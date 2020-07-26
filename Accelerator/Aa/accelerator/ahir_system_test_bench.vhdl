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
library GhdlLink;
use GhdlLink.LogUtilities.all;
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
      acc_mem_pipe_read_data: out std_logic_vector(15 downto 0);
      acc_mem_pipe_read_req : in std_logic_vector(0 downto 0);
      acc_mem_pipe_read_ack : out std_logic_vector(0 downto 0);
      acc_mem_add_pipe_read_data: out std_logic_vector(15 downto 0);
      acc_mem_add_pipe_read_req : in std_logic_vector(0 downto 0);
      acc_mem_add_pipe_read_ack : out std_logic_vector(0 downto 0);
      start_pipe_write_data: in std_logic_vector(15 downto 0);
      start_pipe_write_req : in std_logic_vector(0 downto 0);
      start_pipe_write_ack : out std_logic_vector(0 downto 0);
      status_pipe_read_data: out std_logic_vector(15 downto 0);
      status_pipe_read_req : in std_logic_vector(0 downto 0);
      status_pipe_read_ack : out std_logic_vector(0 downto 0)); -- 
    -- 
  end component;
  signal clk: std_logic := '0';
  signal reset: std_logic := '1';
  signal try_tag_in: std_logic_vector(1 downto 0);
  signal try_tag_out: std_logic_vector(1 downto 0);
  signal try_start_req : std_logic := '0';
  signal try_start_ack : std_logic := '0';
  signal try_fin_req   : std_logic := '0';
  signal try_fin_ack   : std_logic := '0';
  -- read from pipe acc_mem
  signal acc_mem_pipe_read_data: std_logic_vector(15 downto 0);
  signal acc_mem_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal acc_mem_pipe_read_ack : std_logic_vector(0 downto 0);
  -- read from pipe acc_mem_add
  signal acc_mem_add_pipe_read_data: std_logic_vector(15 downto 0);
  signal acc_mem_add_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal acc_mem_add_pipe_read_ack : std_logic_vector(0 downto 0);
  -- write to pipe start
  signal start_pipe_write_data: std_logic_vector(15 downto 0);
  signal start_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal start_pipe_write_ack : std_logic_vector(0 downto 0);
  -- read from pipe status
  signal status_pipe_read_data: std_logic_vector(15 downto 0);
  signal status_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal status_pipe_read_ack : std_logic_vector(0 downto 0);
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
      obj_ref := Pack_String_To_Vhpi_String("acc_mem req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      acc_mem_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("acc_mem ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(acc_mem_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("acc_mem 0");
      port_val_string := Pack_SLV_To_Vhpi_String(acc_mem_pipe_read_data);
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
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_add req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      acc_mem_add_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_add ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(acc_mem_add_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("acc_mem_add 0");
      port_val_string := Pack_SLV_To_Vhpi_String(acc_mem_add_pipe_read_data);
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
      obj_ref := Pack_String_To_Vhpi_String("start req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      start_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("start 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,16);
      start_pipe_write_data <= Unpack_String(port_val_string,16);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("start ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(start_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
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
      obj_ref := Pack_String_To_Vhpi_String("status req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      status_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("status ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(status_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("status 0");
      port_val_string := Pack_SLV_To_Vhpi_String(status_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,16);
      -- 
    end loop;
    --
  end process;
  ahir_system_instance: ahir_system -- 
    port map ( -- 
      clk => clk,
      reset => reset,
      acc_mem_pipe_read_data  => acc_mem_pipe_read_data, 
      acc_mem_pipe_read_req  => acc_mem_pipe_read_req, 
      acc_mem_pipe_read_ack  => acc_mem_pipe_read_ack ,
      acc_mem_add_pipe_read_data  => acc_mem_add_pipe_read_data, 
      acc_mem_add_pipe_read_req  => acc_mem_add_pipe_read_req, 
      acc_mem_add_pipe_read_ack  => acc_mem_add_pipe_read_ack ,
      start_pipe_write_data  => start_pipe_write_data, 
      start_pipe_write_req  => start_pipe_write_req, 
      start_pipe_write_ack  => start_pipe_write_ack,
      status_pipe_read_data  => status_pipe_read_data, 
      status_pipe_read_req  => status_pipe_read_req, 
      status_pipe_read_ack  => status_pipe_read_ack ); -- 
  -- 
end VhpiLink;
