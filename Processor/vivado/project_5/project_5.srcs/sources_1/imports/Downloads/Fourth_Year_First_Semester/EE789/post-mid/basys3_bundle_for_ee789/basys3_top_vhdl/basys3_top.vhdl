library ieee;
use ieee.std_logic_1164.all;

library work;
use work.uartPackage.all;

entity basys3_top is
	port (CLK100MHZ: in std_logic;
		-- this is the reset (btnC)
		btnC: in std_logic;
		-- switch values are forwarded to
		-- AHIR system.
		--SWITCHES: in std_logic_vector(0 to 15);
		-- LEDS to be driven from AHIR system.
		LEDS: out std_logic_vector(0 to 15);
		-- UART signals, UART configured to 9600 
		-- baud.
		RsRx: in std_logic;
		RsTx: out std_logic);
end entity basys3_top;


architecture Struct of basys3_top is

	signal reset, btnC_registered, btnC_synched: std_logic;
--	signal SWITCHES_REGISTERED: std_logic_vector(0 to 15);
--	signal SWITCHES_SYNCHED: std_logic_vector(0 to 15);

	signal LEDS_SIGNAL: std_logic_vector(0 to 15);
--	signal SWITCHES_SIGNAL: std_logic_vector(0 to 15);

	signal uart_read_data, uart_write_data: std_logic_vector(7 downto 0);
	signal uart_read_req, uart_write_req: std_logic_vector(0 downto 0);
	signal uart_read_ack, uart_write_ack: std_logic_vector(0 downto 0);

	component ahir_system is  -- system 
  		port (-- 
    			clk : in std_logic;
    			reset : in std_logic;
    			LEDS: out std_logic_vector(15 downto 0);
    			--SWITCHES: in std_logic_vector(15 downto 0);
    			write_mem_pipe_write_data: in std_logic_vector(7 downto 0);
    			write_mem_pipe_write_req : in std_logic_vector(0 downto 0);
    			write_mem_pipe_write_ack : out std_logic_vector(0 downto 0);
    			reg_output_pipe_read_data: out std_logic_vector(7 downto 0);
    			reg_output_pipe_read_req : in std_logic_vector(0 downto 0);
    			reg_output_pipe_read_ack : out std_logic_vector(0 downto 0)); -- 
	end component; 
begin
	-------------------------------------------------------
	-- synch the switches.
	-------------------------------------------------------
	process(CLK100MHZ)
	begin
		if(CLK100MHZ'event and CLK100MHZ='1') then
			--SWITCHES_REGISTERED <= SWITCHES;
			--SWITCHES_SYNCHED <= SWITCHES_REGISTERED;
			btnC_registered <= btnC;
			btnC_synched    <= btnC_registered;
		end if;
	end process;

	reset <= btnC_synched;

	-------------------------------------------------------
	-- the LED and SWITCH signals to AHIR SYSTEM
	-------------------------------------------------------
	LEDS <= LEDS_SIGNAL;
	--SWITCHES_SIGNAL <= SWITCHES_SYNCHED;

	-------------------------------------------------------
	-- the UART.. generics are set for 9600 baud.
	-------------------------------------------------------
	uartInst: uartTop
			generic map(baudFreq => 24, baudLimit => 15601)
			port map (
         			reset     => reset,
         			clk       => CLK100MHZ,
         			-- uart serial signals
         			serIn     => RsRx,
         			serOut    => RsTx,
         			-- pipe signals for tx/rx.
	 			uart_rx_pipe_read_data  =>  uart_read_data,
	 			uart_rx_pipe_read_req   =>  uart_read_req,
	 			uart_rx_pipe_read_ack   =>  uart_read_ack,
	 			uart_tx_pipe_write_data =>  uart_write_data,
	 			uart_tx_pipe_write_req  =>  uart_write_req,
	 			uart_tx_pipe_write_ack  =>  uart_write_ack
			);


	-------------------------------------------------------
	-- the AHIR system.. 
	-------------------------------------------------------
	ahirInst: ahir_system
			port map (
				clk 			=> CLK100MHZ,
				reset  			=>  reset,
				--SWITCHES	        =>  SWITCHES_SIGNAL,
				LEDS			=>  LEDS_SIGNAL,
	 			reg_output_pipe_read_data =>  uart_write_data,
	 			reg_output_pipe_read_req  =>  uart_write_ack,
	 			reg_output_pipe_read_ack  =>  uart_write_req,
	 			write_mem_pipe_write_data =>  uart_read_data,
	 			write_mem_pipe_write_req  =>  uart_read_ack,
	 			write_mem_pipe_write_ack  =>  uart_read_req
			);


end Struct;
