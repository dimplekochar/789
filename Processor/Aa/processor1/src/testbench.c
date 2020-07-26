#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
# include <inttypes.h>
#ifdef AA2C
#include "processor_aa_c_model.h"
#else
#include "vhdlCStubs.h"
#endif

#define ORDER 16
void Exit(int sig)
{
	fprintf(stderr, "## Break! ##\n");
	exit(0);
}

void Sender_0()
{
 uint8_t altmem[20] = {0x0b, 0x02, 0x03, 0x1, 
0x0c, 0x64, 0x04, 0x01, 
0x0d, 0x64, 0x05, 0x01, 
0x02, 0x07, 0x08, 0x01, 
0x10, 0x04, 0x0a, 0x01};

	int idx;
	while(1)
	{
		uint8_t  X[40];
		
		for(idx = 0; idx < 20; idx++)
		{
			X[idx] = altmem[idx];
		}
		for(idx = 20; idx < 40; idx++)
		{
			X[idx] = altmem[idx%20];
		}
		write_uint8_n("write_mem", X, 40);
	}
}




void Receiver_0()
{
	int idx;
	uint8_t Xl [40];
	read_uint8_n("reg_output", Xl, 40);
	for(idx = 0; idx < 40; idx++)
	{	
		uint8_t rvall = Xl[idx];
		fprintf(stdout,"%d ", idx);
		fprintf(stdout,"reg_output:  received %x\n", rvall);
	}
}



DEFINE_THREAD(Sender_0)
DEFINE_THREAD(Receiver_0)

int main(int argc, char* argv[])
{
	float result[ORDER];
	signal(SIGINT,  Exit);
  	signal(SIGTERM, Exit);

#ifdef AA2C
	init_pipe_handler();
	processor_start_daemons (NULL, 0);
#endif


	PTHREAD_DECL(Sender_0);
	PTHREAD_CREATE(Sender_0);


	PTHREAD_DECL(Receiver_0);
	PTHREAD_CREATE(Receiver_0);


	PTHREAD_JOIN(Sender_0)
	PTHREAD_JOIN(Receiver_0)


#ifdef AA2C
	processor_stop_daemons();
#endif

	return(0);
}
