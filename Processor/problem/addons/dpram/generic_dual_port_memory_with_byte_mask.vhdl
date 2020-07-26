-- Generic memory for use in proto-board.
--  Uses base_bank.vhd in AHIR.
--
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library ahir;
use ahir.BaseComponents.all;
use ahir.mem_component_pack.all;
use ahir.Utilities.all;

library AjitCustom;
use AjitCustom.AjitCustomComponents.all;
use AjitCustom.MemmapPackage.all;


entity generic_dual_port_memory_with_byte_mask is
   generic ( name: string; 
		g_addr_width: natural := 10; 
		g_data_width : natural := 16);
   port (
	   datain_0 : in std_logic_vector(g_data_width-1 downto 0);
           dataout_0: out std_logic_vector(g_data_width-1 downto 0);
           addrin_0: in std_logic_vector(g_addr_width-1 downto 0);
	   bytemask_0: in std_logic_vector((g_data_width/8)-1 downto 0);
           enable_0: in std_logic;
           writebar_0 : in std_logic;
	   datain_1 : in std_logic_vector(g_data_width-1 downto 0);
           dataout_1: out std_logic_vector(g_data_width-1 downto 0);
           addrin_1: in std_logic_vector(g_addr_width-1 downto 0);
	   bytemask_1: in std_logic_vector((g_data_width/8)-1 downto 0);
           enable_1: in std_logic;
           writebar_1 : in std_logic;
           clk: in std_logic;
           reset : in std_logic);
end entity generic_dual_port_memory_with_byte_mask;


architecture Mixed of generic_dual_port_memory_with_byte_mask is
	constant init_byte_array : ByteArray(0 to (2**(g_addr_width+3))-1) :=
			construct_init_byte_array("cpu_test_setup_memmap.txt", (2**(g_addr_width+3)));
begin  -- XilinxBramInfer


  genByteMem: for I in 0 to (g_data_width/8)-1 generate

	memBlock: block
		signal local_enable_sig_0 : std_logic;
		signal local_enable_sig_1 : std_logic;
		constant local_init_byte_array : ByteArray(0 to (2**g_addr_width)-1) :=
			Select_Byte_Init_Value_By_Position_In_Double_Word (I, init_byte_array);
		constant J: integer := ((g_data_width/8)-1)-I;
	begin
		local_enable_sig_0 <= enable_0 and (writebar_0 or bytemask_0(J));
		local_enable_sig_1 <= enable_1 and (writebar_1 or bytemask_1(J));
		
		bb: dual_port_byte_ram_with_init
			generic map (byte_position => I,
					g_addr_width => g_addr_width,
					init_byte_array => local_init_byte_array)
			port map(
					datain_0 => datain_0((8*(J+1))-1 downto (8*J)),
					dataout_0 => dataout_0((8*(J+1))-1 downto (8*J)),
					addrin_0 => addrin_0,
					enable_0 => local_enable_sig_0,
					writebar_0 => writebar_0,
					datain_1 => datain_1((8*(J+1))-1 downto (8*J)),
					dataout_1 => dataout_1((8*(J+1))-1 downto (8*J)),
					addrin_1 => addrin_1,
					enable_1 => local_enable_sig_1,
					writebar_1 => writebar_1,
					clk => clk,
					reset => reset);

	end block memBlock;
  end generate genByteMem;

end Mixed;
