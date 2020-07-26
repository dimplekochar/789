#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <Pipes.h>
#include <SocketLib.h>
uint8_t add(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t and_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t bn(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t bz(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t call(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t cmp(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
void global_storage_initializer_();
uint8_t halt(uint8_t pc);
void init_mem();
void init_reg();
uint8_t jmp(uint32_t rs1_data,uint8_t pc);
uint8_t load(uint32_t rs1_data,uint8_t rd,uint8_t pc);
uint8_t or_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t sbir(uint8_t imm,uint8_t rd,uint8_t pc);
uint8_t sll_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t sra_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t srl_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t store(uint32_t rs1_data,uint32_t rs2_data,uint8_t pc);
uint8_t sub(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t try(uint8_t pc,uint32_t inst);
void try1();
uint8_t xnor_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
uint8_t xor_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc);
