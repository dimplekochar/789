#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
void simple_memory__set_trace_file(FILE* fp);
void simple_memory___init_aa_globals__(); 
void simple_memory_accMemAccessDaemon(uint32_t, uint32_t* , uint32_t* );
void _simple_memory_accMemAccessDaemon_(bit_vector*, bit_vector* , bit_vector* );
void _simple_memory_accessMem_(bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void _simple_memory_accessMem_v_(bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_memory_global_storage_initializer_();
void _simple_memory_global_storage_initializer__();
void simple_memory_initial();
void _simple_memory_initial_();
void simple_memory_try();
void _simple_memory_try_();
void simple_memory_try1();
void _simple_memory_try1_();
void simple_memory_start_daemons(FILE* fp, int trace_on);
void simple_memory_stop_daemons();
