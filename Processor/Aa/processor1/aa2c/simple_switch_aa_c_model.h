#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
void simple_switch__set_trace_file(FILE* fp);
void simple_switch___init_aa_globals__(); 
void _simple_switch_accessMem_(bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void _simple_switch_accessreg_(bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_add(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_add_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_and_i(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_and_i_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_bn(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_bn_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_bz(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_bz_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_call(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_call_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_cmp(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_cmp_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_global_storage_initializer_();
void _simple_switch_global_storage_initializer__();
void simple_switch_halt(uint8_t, uint8_t* );
void _simple_switch_halt_(bit_vector*, bit_vector* );
void simple_switch_init_mem();
void _simple_switch_init_mem_();
void simple_switch_init_reg();
void _simple_switch_init_reg_();
void simple_switch_jmp(uint32_t, uint8_t, uint8_t* );
void _simple_switch_jmp_(bit_vector*, bit_vector*, bit_vector* );
void simple_switch_load(uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_load_(bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_or_i(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_or_i_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_sbir(uint8_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_sbir_(bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_sll_i(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_sll_i_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_sra_i(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_sra_i_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_srl_i(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_srl_i_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_store(uint32_t, uint32_t, uint8_t, uint8_t* );
void _simple_switch_store_(bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_sub(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_sub_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_try(uint8_t, uint32_t, uint8_t* );
void _simple_switch_try_(bit_vector*, bit_vector*, bit_vector* );
void simple_switch_try1();
void _simple_switch_try1_();
void simple_switch_xnor_i(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_xnor_i_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_xor_i(uint32_t, uint32_t, uint8_t, uint8_t, uint8_t* );
void _simple_switch_xor_i_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* );
void simple_switch_start_daemons(FILE* fp, int trace_on);
void simple_switch_stop_daemons();
