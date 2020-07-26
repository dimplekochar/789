#include <vhdlCStubs.h>
uint8_t add(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call add ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t and_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call and_i ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t bn(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call bn ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t bz(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call bz ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t call(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call call ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t cmp(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call cmp ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
void global_storage_initializer_()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call global_storage_initializer_ ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
uint8_t halt(uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call halt ");
append_int(buffer,1); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
void init_mem()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call init_mem ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void init_reg()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call init_reg ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
uint8_t jmp(uint32_t rs1_data,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call jmp ");
append_int(buffer,2); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t load(uint32_t rs1_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call load ");
append_int(buffer,3); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t or_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call or_i ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t sbir(uint8_t imm,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call sbir ");
append_int(buffer,3); ADD_SPACE__(buffer);
append_uint8_t(buffer,imm); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t sll_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call sll_i ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t sra_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call sra_i ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t srl_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call srl_i ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t store(uint32_t rs1_data,uint32_t rs2_data,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call store ");
append_int(buffer,3); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t sub(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call sub ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t try(uint8_t pc,uint32_t inst)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call try ");
append_int(buffer,2); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_uint32_t(buffer,inst); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
void try1()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call try1 ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
uint8_t xnor_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call xnor_i ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
uint8_t xor_i(uint32_t rs1_data,uint32_t rs2_data,uint8_t rd,uint8_t pc)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call xor_i ");
append_int(buffer,4); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs1_data); ADD_SPACE__(buffer);
append_uint32_t(buffer,rs2_data); ADD_SPACE__(buffer);
append_uint8_t(buffer,rd); ADD_SPACE__(buffer);
append_uint8_t(buffer,pc); ADD_SPACE__(buffer);
append_int(buffer,1); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
uint8_t next_pc = get_uint8_t(buffer,&ss);
return(next_pc);
}
