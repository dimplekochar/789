#include <vhdlCStubs.h>
void accMemAccessDaemon(uint32_t acc_mem_request,uint32_t* acc_mem_responsel,uint32_t* acc_mem_responseh)
{
char buffer[1024];  char* ss;  sprintf(buffer, "call accMemAccessDaemon ");
append_int(buffer,1); ADD_SPACE__(buffer);
append_uint32_t(buffer,acc_mem_request); ADD_SPACE__(buffer);
append_int(buffer,2); ADD_SPACE__(buffer);
append_int(buffer,32); ADD_SPACE__(buffer);
append_int(buffer,32); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
*acc_mem_responsel = get_uint32_t(buffer,&ss);
*acc_mem_responseh = get_uint32_t(buffer,&ss);
return;
}
void global_storage_initializer_()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call global_storage_initializer_ ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void initial()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call initial ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void try()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call try ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void try1()
{
char buffer[1024];  char* ss;  sprintf(buffer, "call try1 ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
