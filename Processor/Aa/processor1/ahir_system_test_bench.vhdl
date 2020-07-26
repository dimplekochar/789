library std;
use std.standard.all;
library ieee;
use ieee.std_logic_1164.all;
library aHiR_ieee_proposed;
use aHiR_ieee_proposed.math_utility_pkg.all;
use aHiR_ieee_proposed.fixed_pkg.all;
use aHiR_ieee_proposed.float_pkg.all;
library ahir;
use ahir.memory_subsystem_package.all;
use ahir.types.all;
use ahir.subprograms.all;
use ahir.components.all;
use ahir.basecomponents.all;
use ahir.operatorpackage.all;
use ahir.floatoperatorpackage.all;
use ahir.utilities.all;
library work;
use work.ahir_system_global_package.all;
library GhdlLink;
use GhdlLink.Utility_Package.all;
use GhdlLink.Vhpi_Foreign.all;
entity ahir_system_Test_Bench is -- 
  -- 
end entity;
architecture VhpiLink of ahir_system_Test_Bench is -- 
  component ahir_system is -- 
    port (-- 
      clk : in std_logic;
      reset : in std_logic;
      LEDS: out std_logic_vector(15 downto 0);
      reg_output_pipe_read_data: out std_logic_vector(7 downto 0);
      reg_output_pipe_read_req : in std_logic_vector(0 downto 0);
      reg_output_pipe_read_ack : out std_logic_vector(0 downto 0);
      write_mem_pipe_write_data: in std_logic_vector(7 downto 0);
      write_mem_pipe_write_req : in std_logic_vector(0 downto 0);
      write_mem_pipe_write_ack : out std_logic_vector(0 downto 0)); -- 
    -- 
  end component;
  signal clk: std_logic := '0';
  signal reset: std_logic := '1';
  signal try1_tag_in: std_logic_vector(1 downto 0);
  signal try1_tag_out: std_logic_vector(1 downto 0);
  signal try1_start_req : std_logic := '0';
  signal try1_start_ack : std_logic := '0';
  signal try1_fin_req   : std_logic := '0';
  signal try1_fin_ack   : std_logic := '0';
  -- read from pipe LEDS
  signal LEDS_pipe_read_data: std_logic_vector(15 downto 0);
  signal LEDS_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal LEDS_pipe_read_ack : std_logic_vector(0 downto 0);
  signal LEDS: std_logic_vector(15 downto 0);
  -- read from pipe reg_output
  signal reg_output_pipe_read_data: std_logic_vector(7 downto 0);
  signal reg_output_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal reg_output_pipe_read_ack : std_logic_vector(0 downto 0);
  -- write to pipe write_mem
  signal write_mem_pipe_write_data: std_logic_vector(7 downto 0);
  signal write_mem_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal write_mem_pipe_write_ack : std_logic_vector(0 downto 0);
  -- 
begin --
  -- clock/reset generation 
  clk <= not clk after 5 ns;
  -- assert reset for four clocks.
  process
  begin --
    Vhpi_Initialize;
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    reset <= '0';
    while true loop --
      wait until clk = '0';
      Vhpi_Listen;
      Vhpi_Send;
      --
    end loop;
    wait;
    --
  end process;
  -- connect all the top-level modules to Vhpi
  LEDS_pipe_read_ack(0) <= '1';
  TruncateOrPad(LEDS, LEDS_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("LEDS req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      LEDS_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("LEDS ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(LEDS_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("LEDS 0");
      port_val_string := Pack_SLV_To_Vhpi_String(LEDS_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,16);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("reg_output req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      reg_output_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("reg_output ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(reg_output_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("reg_output 0");
      port_val_string := Pack_SLV_To_Vhpi_String(reg_output_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,8);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("write_mem req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      write_mem_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("write_mem 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,8);
      write_mem_pipe_write_data <= Unpack_String(port_val_string,8);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("write_mem ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(write_mem_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  ahir_system_instance: ahir_system -- 
    port map ( -- 
      clk => clk,
      reset => reset,
      LEDS => LEDS,
      reg_output_pipe_read_data  => reg_output_pipe_read_data, 
      reg_output_pipe_read_req  => reg_output_pipe_read_req, 
      reg_output_pipe_read_ack  => reg_output_pipe_read_ack ,
      write_mem_pipe_write_data  => write_mem_pipe_write_data, 
      write_mem_pipe_write_req  => write_mem_pipe_write_req, 
      write_mem_pipe_write_ack  => write_mem_pipe_write_ack); -- 
  -- 
end VhpiLink;
