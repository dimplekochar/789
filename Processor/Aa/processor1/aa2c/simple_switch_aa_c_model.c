#include <pthread.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <simple_switch_aa_c_model_internal.h>
#include <simple_switch_aa_c_model.h>
FILE* simple_switch___report_log_file__ = NULL;
int simple_switch___trace_on__ = 0;
void simple_switch__set_trace_file(FILE* fp) {
simple_switch___report_log_file__ = fp;
}
bit_vector simple_switch__mem[256];
#define mem (simple_switch__mem)

bit_vector simple_switch__next_pc1;
#define next_pc1 (simple_switch__next_pc1)

bit_vector simple_switch__reg[256];
#define reg (simple_switch__reg)

bit_vector simple_switch__right_shift;
#define right_shift (simple_switch__right_shift)

void simple_switch___init_aa_globals__() 
{
register_signal("LEDS", 16);\
init_static_bit_vector(&(mem[0]), 32);\
init_static_bit_vector(&(mem[1]), 32);\
init_static_bit_vector(&(mem[2]), 32);\
init_static_bit_vector(&(mem[3]), 32);\
init_static_bit_vector(&(mem[4]), 32);\
init_static_bit_vector(&(mem[5]), 32);\
init_static_bit_vector(&(mem[6]), 32);\
init_static_bit_vector(&(mem[7]), 32);\
init_static_bit_vector(&(mem[8]), 32);\
init_static_bit_vector(&(mem[9]), 32);\
init_static_bit_vector(&(mem[10]), 32);\
init_static_bit_vector(&(mem[11]), 32);\
init_static_bit_vector(&(mem[12]), 32);\
init_static_bit_vector(&(mem[13]), 32);\
init_static_bit_vector(&(mem[14]), 32);\
init_static_bit_vector(&(mem[15]), 32);\
init_static_bit_vector(&(mem[16]), 32);\
init_static_bit_vector(&(mem[17]), 32);\
init_static_bit_vector(&(mem[18]), 32);\
init_static_bit_vector(&(mem[19]), 32);\
init_static_bit_vector(&(mem[20]), 32);\
init_static_bit_vector(&(mem[21]), 32);\
init_static_bit_vector(&(mem[22]), 32);\
init_static_bit_vector(&(mem[23]), 32);\
init_static_bit_vector(&(mem[24]), 32);\
init_static_bit_vector(&(mem[25]), 32);\
init_static_bit_vector(&(mem[26]), 32);\
init_static_bit_vector(&(mem[27]), 32);\
init_static_bit_vector(&(mem[28]), 32);\
init_static_bit_vector(&(mem[29]), 32);\
init_static_bit_vector(&(mem[30]), 32);\
init_static_bit_vector(&(mem[31]), 32);\
init_static_bit_vector(&(mem[32]), 32);\
init_static_bit_vector(&(mem[33]), 32);\
init_static_bit_vector(&(mem[34]), 32);\
init_static_bit_vector(&(mem[35]), 32);\
init_static_bit_vector(&(mem[36]), 32);\
init_static_bit_vector(&(mem[37]), 32);\
init_static_bit_vector(&(mem[38]), 32);\
init_static_bit_vector(&(mem[39]), 32);\
init_static_bit_vector(&(mem[40]), 32);\
init_static_bit_vector(&(mem[41]), 32);\
init_static_bit_vector(&(mem[42]), 32);\
init_static_bit_vector(&(mem[43]), 32);\
init_static_bit_vector(&(mem[44]), 32);\
init_static_bit_vector(&(mem[45]), 32);\
init_static_bit_vector(&(mem[46]), 32);\
init_static_bit_vector(&(mem[47]), 32);\
init_static_bit_vector(&(mem[48]), 32);\
init_static_bit_vector(&(mem[49]), 32);\
init_static_bit_vector(&(mem[50]), 32);\
init_static_bit_vector(&(mem[51]), 32);\
init_static_bit_vector(&(mem[52]), 32);\
init_static_bit_vector(&(mem[53]), 32);\
init_static_bit_vector(&(mem[54]), 32);\
init_static_bit_vector(&(mem[55]), 32);\
init_static_bit_vector(&(mem[56]), 32);\
init_static_bit_vector(&(mem[57]), 32);\
init_static_bit_vector(&(mem[58]), 32);\
init_static_bit_vector(&(mem[59]), 32);\
init_static_bit_vector(&(mem[60]), 32);\
init_static_bit_vector(&(mem[61]), 32);\
init_static_bit_vector(&(mem[62]), 32);\
init_static_bit_vector(&(mem[63]), 32);\
init_static_bit_vector(&(mem[64]), 32);\
init_static_bit_vector(&(mem[65]), 32);\
init_static_bit_vector(&(mem[66]), 32);\
init_static_bit_vector(&(mem[67]), 32);\
init_static_bit_vector(&(mem[68]), 32);\
init_static_bit_vector(&(mem[69]), 32);\
init_static_bit_vector(&(mem[70]), 32);\
init_static_bit_vector(&(mem[71]), 32);\
init_static_bit_vector(&(mem[72]), 32);\
init_static_bit_vector(&(mem[73]), 32);\
init_static_bit_vector(&(mem[74]), 32);\
init_static_bit_vector(&(mem[75]), 32);\
init_static_bit_vector(&(mem[76]), 32);\
init_static_bit_vector(&(mem[77]), 32);\
init_static_bit_vector(&(mem[78]), 32);\
init_static_bit_vector(&(mem[79]), 32);\
init_static_bit_vector(&(mem[80]), 32);\
init_static_bit_vector(&(mem[81]), 32);\
init_static_bit_vector(&(mem[82]), 32);\
init_static_bit_vector(&(mem[83]), 32);\
init_static_bit_vector(&(mem[84]), 32);\
init_static_bit_vector(&(mem[85]), 32);\
init_static_bit_vector(&(mem[86]), 32);\
init_static_bit_vector(&(mem[87]), 32);\
init_static_bit_vector(&(mem[88]), 32);\
init_static_bit_vector(&(mem[89]), 32);\
init_static_bit_vector(&(mem[90]), 32);\
init_static_bit_vector(&(mem[91]), 32);\
init_static_bit_vector(&(mem[92]), 32);\
init_static_bit_vector(&(mem[93]), 32);\
init_static_bit_vector(&(mem[94]), 32);\
init_static_bit_vector(&(mem[95]), 32);\
init_static_bit_vector(&(mem[96]), 32);\
init_static_bit_vector(&(mem[97]), 32);\
init_static_bit_vector(&(mem[98]), 32);\
init_static_bit_vector(&(mem[99]), 32);\
init_static_bit_vector(&(mem[100]), 32);\
init_static_bit_vector(&(mem[101]), 32);\
init_static_bit_vector(&(mem[102]), 32);\
init_static_bit_vector(&(mem[103]), 32);\
init_static_bit_vector(&(mem[104]), 32);\
init_static_bit_vector(&(mem[105]), 32);\
init_static_bit_vector(&(mem[106]), 32);\
init_static_bit_vector(&(mem[107]), 32);\
init_static_bit_vector(&(mem[108]), 32);\
init_static_bit_vector(&(mem[109]), 32);\
init_static_bit_vector(&(mem[110]), 32);\
init_static_bit_vector(&(mem[111]), 32);\
init_static_bit_vector(&(mem[112]), 32);\
init_static_bit_vector(&(mem[113]), 32);\
init_static_bit_vector(&(mem[114]), 32);\
init_static_bit_vector(&(mem[115]), 32);\
init_static_bit_vector(&(mem[116]), 32);\
init_static_bit_vector(&(mem[117]), 32);\
init_static_bit_vector(&(mem[118]), 32);\
init_static_bit_vector(&(mem[119]), 32);\
init_static_bit_vector(&(mem[120]), 32);\
init_static_bit_vector(&(mem[121]), 32);\
init_static_bit_vector(&(mem[122]), 32);\
init_static_bit_vector(&(mem[123]), 32);\
init_static_bit_vector(&(mem[124]), 32);\
init_static_bit_vector(&(mem[125]), 32);\
init_static_bit_vector(&(mem[126]), 32);\
init_static_bit_vector(&(mem[127]), 32);\
init_static_bit_vector(&(mem[128]), 32);\
init_static_bit_vector(&(mem[129]), 32);\
init_static_bit_vector(&(mem[130]), 32);\
init_static_bit_vector(&(mem[131]), 32);\
init_static_bit_vector(&(mem[132]), 32);\
init_static_bit_vector(&(mem[133]), 32);\
init_static_bit_vector(&(mem[134]), 32);\
init_static_bit_vector(&(mem[135]), 32);\
init_static_bit_vector(&(mem[136]), 32);\
init_static_bit_vector(&(mem[137]), 32);\
init_static_bit_vector(&(mem[138]), 32);\
init_static_bit_vector(&(mem[139]), 32);\
init_static_bit_vector(&(mem[140]), 32);\
init_static_bit_vector(&(mem[141]), 32);\
init_static_bit_vector(&(mem[142]), 32);\
init_static_bit_vector(&(mem[143]), 32);\
init_static_bit_vector(&(mem[144]), 32);\
init_static_bit_vector(&(mem[145]), 32);\
init_static_bit_vector(&(mem[146]), 32);\
init_static_bit_vector(&(mem[147]), 32);\
init_static_bit_vector(&(mem[148]), 32);\
init_static_bit_vector(&(mem[149]), 32);\
init_static_bit_vector(&(mem[150]), 32);\
init_static_bit_vector(&(mem[151]), 32);\
init_static_bit_vector(&(mem[152]), 32);\
init_static_bit_vector(&(mem[153]), 32);\
init_static_bit_vector(&(mem[154]), 32);\
init_static_bit_vector(&(mem[155]), 32);\
init_static_bit_vector(&(mem[156]), 32);\
init_static_bit_vector(&(mem[157]), 32);\
init_static_bit_vector(&(mem[158]), 32);\
init_static_bit_vector(&(mem[159]), 32);\
init_static_bit_vector(&(mem[160]), 32);\
init_static_bit_vector(&(mem[161]), 32);\
init_static_bit_vector(&(mem[162]), 32);\
init_static_bit_vector(&(mem[163]), 32);\
init_static_bit_vector(&(mem[164]), 32);\
init_static_bit_vector(&(mem[165]), 32);\
init_static_bit_vector(&(mem[166]), 32);\
init_static_bit_vector(&(mem[167]), 32);\
init_static_bit_vector(&(mem[168]), 32);\
init_static_bit_vector(&(mem[169]), 32);\
init_static_bit_vector(&(mem[170]), 32);\
init_static_bit_vector(&(mem[171]), 32);\
init_static_bit_vector(&(mem[172]), 32);\
init_static_bit_vector(&(mem[173]), 32);\
init_static_bit_vector(&(mem[174]), 32);\
init_static_bit_vector(&(mem[175]), 32);\
init_static_bit_vector(&(mem[176]), 32);\
init_static_bit_vector(&(mem[177]), 32);\
init_static_bit_vector(&(mem[178]), 32);\
init_static_bit_vector(&(mem[179]), 32);\
init_static_bit_vector(&(mem[180]), 32);\
init_static_bit_vector(&(mem[181]), 32);\
init_static_bit_vector(&(mem[182]), 32);\
init_static_bit_vector(&(mem[183]), 32);\
init_static_bit_vector(&(mem[184]), 32);\
init_static_bit_vector(&(mem[185]), 32);\
init_static_bit_vector(&(mem[186]), 32);\
init_static_bit_vector(&(mem[187]), 32);\
init_static_bit_vector(&(mem[188]), 32);\
init_static_bit_vector(&(mem[189]), 32);\
init_static_bit_vector(&(mem[190]), 32);\
init_static_bit_vector(&(mem[191]), 32);\
init_static_bit_vector(&(mem[192]), 32);\
init_static_bit_vector(&(mem[193]), 32);\
init_static_bit_vector(&(mem[194]), 32);\
init_static_bit_vector(&(mem[195]), 32);\
init_static_bit_vector(&(mem[196]), 32);\
init_static_bit_vector(&(mem[197]), 32);\
init_static_bit_vector(&(mem[198]), 32);\
init_static_bit_vector(&(mem[199]), 32);\
init_static_bit_vector(&(mem[200]), 32);\
init_static_bit_vector(&(mem[201]), 32);\
init_static_bit_vector(&(mem[202]), 32);\
init_static_bit_vector(&(mem[203]), 32);\
init_static_bit_vector(&(mem[204]), 32);\
init_static_bit_vector(&(mem[205]), 32);\
init_static_bit_vector(&(mem[206]), 32);\
init_static_bit_vector(&(mem[207]), 32);\
init_static_bit_vector(&(mem[208]), 32);\
init_static_bit_vector(&(mem[209]), 32);\
init_static_bit_vector(&(mem[210]), 32);\
init_static_bit_vector(&(mem[211]), 32);\
init_static_bit_vector(&(mem[212]), 32);\
init_static_bit_vector(&(mem[213]), 32);\
init_static_bit_vector(&(mem[214]), 32);\
init_static_bit_vector(&(mem[215]), 32);\
init_static_bit_vector(&(mem[216]), 32);\
init_static_bit_vector(&(mem[217]), 32);\
init_static_bit_vector(&(mem[218]), 32);\
init_static_bit_vector(&(mem[219]), 32);\
init_static_bit_vector(&(mem[220]), 32);\
init_static_bit_vector(&(mem[221]), 32);\
init_static_bit_vector(&(mem[222]), 32);\
init_static_bit_vector(&(mem[223]), 32);\
init_static_bit_vector(&(mem[224]), 32);\
init_static_bit_vector(&(mem[225]), 32);\
init_static_bit_vector(&(mem[226]), 32);\
init_static_bit_vector(&(mem[227]), 32);\
init_static_bit_vector(&(mem[228]), 32);\
init_static_bit_vector(&(mem[229]), 32);\
init_static_bit_vector(&(mem[230]), 32);\
init_static_bit_vector(&(mem[231]), 32);\
init_static_bit_vector(&(mem[232]), 32);\
init_static_bit_vector(&(mem[233]), 32);\
init_static_bit_vector(&(mem[234]), 32);\
init_static_bit_vector(&(mem[235]), 32);\
init_static_bit_vector(&(mem[236]), 32);\
init_static_bit_vector(&(mem[237]), 32);\
init_static_bit_vector(&(mem[238]), 32);\
init_static_bit_vector(&(mem[239]), 32);\
init_static_bit_vector(&(mem[240]), 32);\
init_static_bit_vector(&(mem[241]), 32);\
init_static_bit_vector(&(mem[242]), 32);\
init_static_bit_vector(&(mem[243]), 32);\
init_static_bit_vector(&(mem[244]), 32);\
init_static_bit_vector(&(mem[245]), 32);\
init_static_bit_vector(&(mem[246]), 32);\
init_static_bit_vector(&(mem[247]), 32);\
init_static_bit_vector(&(mem[248]), 32);\
init_static_bit_vector(&(mem[249]), 32);\
init_static_bit_vector(&(mem[250]), 32);\
init_static_bit_vector(&(mem[251]), 32);\
init_static_bit_vector(&(mem[252]), 32);\
init_static_bit_vector(&(mem[253]), 32);\
init_static_bit_vector(&(mem[254]), 32);\
init_static_bit_vector(&(mem[255]), 32);\
init_static_bit_vector(&(next_pc1), 8);\
init_static_bit_vector(&(reg[0]), 32);\
init_static_bit_vector(&(reg[1]), 32);\
init_static_bit_vector(&(reg[2]), 32);\
init_static_bit_vector(&(reg[3]), 32);\
init_static_bit_vector(&(reg[4]), 32);\
init_static_bit_vector(&(reg[5]), 32);\
init_static_bit_vector(&(reg[6]), 32);\
init_static_bit_vector(&(reg[7]), 32);\
init_static_bit_vector(&(reg[8]), 32);\
init_static_bit_vector(&(reg[9]), 32);\
init_static_bit_vector(&(reg[10]), 32);\
init_static_bit_vector(&(reg[11]), 32);\
init_static_bit_vector(&(reg[12]), 32);\
init_static_bit_vector(&(reg[13]), 32);\
init_static_bit_vector(&(reg[14]), 32);\
init_static_bit_vector(&(reg[15]), 32);\
init_static_bit_vector(&(reg[16]), 32);\
init_static_bit_vector(&(reg[17]), 32);\
init_static_bit_vector(&(reg[18]), 32);\
init_static_bit_vector(&(reg[19]), 32);\
init_static_bit_vector(&(reg[20]), 32);\
init_static_bit_vector(&(reg[21]), 32);\
init_static_bit_vector(&(reg[22]), 32);\
init_static_bit_vector(&(reg[23]), 32);\
init_static_bit_vector(&(reg[24]), 32);\
init_static_bit_vector(&(reg[25]), 32);\
init_static_bit_vector(&(reg[26]), 32);\
init_static_bit_vector(&(reg[27]), 32);\
init_static_bit_vector(&(reg[28]), 32);\
init_static_bit_vector(&(reg[29]), 32);\
init_static_bit_vector(&(reg[30]), 32);\
init_static_bit_vector(&(reg[31]), 32);\
init_static_bit_vector(&(reg[32]), 32);\
init_static_bit_vector(&(reg[33]), 32);\
init_static_bit_vector(&(reg[34]), 32);\
init_static_bit_vector(&(reg[35]), 32);\
init_static_bit_vector(&(reg[36]), 32);\
init_static_bit_vector(&(reg[37]), 32);\
init_static_bit_vector(&(reg[38]), 32);\
init_static_bit_vector(&(reg[39]), 32);\
init_static_bit_vector(&(reg[40]), 32);\
init_static_bit_vector(&(reg[41]), 32);\
init_static_bit_vector(&(reg[42]), 32);\
init_static_bit_vector(&(reg[43]), 32);\
init_static_bit_vector(&(reg[44]), 32);\
init_static_bit_vector(&(reg[45]), 32);\
init_static_bit_vector(&(reg[46]), 32);\
init_static_bit_vector(&(reg[47]), 32);\
init_static_bit_vector(&(reg[48]), 32);\
init_static_bit_vector(&(reg[49]), 32);\
init_static_bit_vector(&(reg[50]), 32);\
init_static_bit_vector(&(reg[51]), 32);\
init_static_bit_vector(&(reg[52]), 32);\
init_static_bit_vector(&(reg[53]), 32);\
init_static_bit_vector(&(reg[54]), 32);\
init_static_bit_vector(&(reg[55]), 32);\
init_static_bit_vector(&(reg[56]), 32);\
init_static_bit_vector(&(reg[57]), 32);\
init_static_bit_vector(&(reg[58]), 32);\
init_static_bit_vector(&(reg[59]), 32);\
init_static_bit_vector(&(reg[60]), 32);\
init_static_bit_vector(&(reg[61]), 32);\
init_static_bit_vector(&(reg[62]), 32);\
init_static_bit_vector(&(reg[63]), 32);\
init_static_bit_vector(&(reg[64]), 32);\
init_static_bit_vector(&(reg[65]), 32);\
init_static_bit_vector(&(reg[66]), 32);\
init_static_bit_vector(&(reg[67]), 32);\
init_static_bit_vector(&(reg[68]), 32);\
init_static_bit_vector(&(reg[69]), 32);\
init_static_bit_vector(&(reg[70]), 32);\
init_static_bit_vector(&(reg[71]), 32);\
init_static_bit_vector(&(reg[72]), 32);\
init_static_bit_vector(&(reg[73]), 32);\
init_static_bit_vector(&(reg[74]), 32);\
init_static_bit_vector(&(reg[75]), 32);\
init_static_bit_vector(&(reg[76]), 32);\
init_static_bit_vector(&(reg[77]), 32);\
init_static_bit_vector(&(reg[78]), 32);\
init_static_bit_vector(&(reg[79]), 32);\
init_static_bit_vector(&(reg[80]), 32);\
init_static_bit_vector(&(reg[81]), 32);\
init_static_bit_vector(&(reg[82]), 32);\
init_static_bit_vector(&(reg[83]), 32);\
init_static_bit_vector(&(reg[84]), 32);\
init_static_bit_vector(&(reg[85]), 32);\
init_static_bit_vector(&(reg[86]), 32);\
init_static_bit_vector(&(reg[87]), 32);\
init_static_bit_vector(&(reg[88]), 32);\
init_static_bit_vector(&(reg[89]), 32);\
init_static_bit_vector(&(reg[90]), 32);\
init_static_bit_vector(&(reg[91]), 32);\
init_static_bit_vector(&(reg[92]), 32);\
init_static_bit_vector(&(reg[93]), 32);\
init_static_bit_vector(&(reg[94]), 32);\
init_static_bit_vector(&(reg[95]), 32);\
init_static_bit_vector(&(reg[96]), 32);\
init_static_bit_vector(&(reg[97]), 32);\
init_static_bit_vector(&(reg[98]), 32);\
init_static_bit_vector(&(reg[99]), 32);\
init_static_bit_vector(&(reg[100]), 32);\
init_static_bit_vector(&(reg[101]), 32);\
init_static_bit_vector(&(reg[102]), 32);\
init_static_bit_vector(&(reg[103]), 32);\
init_static_bit_vector(&(reg[104]), 32);\
init_static_bit_vector(&(reg[105]), 32);\
init_static_bit_vector(&(reg[106]), 32);\
init_static_bit_vector(&(reg[107]), 32);\
init_static_bit_vector(&(reg[108]), 32);\
init_static_bit_vector(&(reg[109]), 32);\
init_static_bit_vector(&(reg[110]), 32);\
init_static_bit_vector(&(reg[111]), 32);\
init_static_bit_vector(&(reg[112]), 32);\
init_static_bit_vector(&(reg[113]), 32);\
init_static_bit_vector(&(reg[114]), 32);\
init_static_bit_vector(&(reg[115]), 32);\
init_static_bit_vector(&(reg[116]), 32);\
init_static_bit_vector(&(reg[117]), 32);\
init_static_bit_vector(&(reg[118]), 32);\
init_static_bit_vector(&(reg[119]), 32);\
init_static_bit_vector(&(reg[120]), 32);\
init_static_bit_vector(&(reg[121]), 32);\
init_static_bit_vector(&(reg[122]), 32);\
init_static_bit_vector(&(reg[123]), 32);\
init_static_bit_vector(&(reg[124]), 32);\
init_static_bit_vector(&(reg[125]), 32);\
init_static_bit_vector(&(reg[126]), 32);\
init_static_bit_vector(&(reg[127]), 32);\
init_static_bit_vector(&(reg[128]), 32);\
init_static_bit_vector(&(reg[129]), 32);\
init_static_bit_vector(&(reg[130]), 32);\
init_static_bit_vector(&(reg[131]), 32);\
init_static_bit_vector(&(reg[132]), 32);\
init_static_bit_vector(&(reg[133]), 32);\
init_static_bit_vector(&(reg[134]), 32);\
init_static_bit_vector(&(reg[135]), 32);\
init_static_bit_vector(&(reg[136]), 32);\
init_static_bit_vector(&(reg[137]), 32);\
init_static_bit_vector(&(reg[138]), 32);\
init_static_bit_vector(&(reg[139]), 32);\
init_static_bit_vector(&(reg[140]), 32);\
init_static_bit_vector(&(reg[141]), 32);\
init_static_bit_vector(&(reg[142]), 32);\
init_static_bit_vector(&(reg[143]), 32);\
init_static_bit_vector(&(reg[144]), 32);\
init_static_bit_vector(&(reg[145]), 32);\
init_static_bit_vector(&(reg[146]), 32);\
init_static_bit_vector(&(reg[147]), 32);\
init_static_bit_vector(&(reg[148]), 32);\
init_static_bit_vector(&(reg[149]), 32);\
init_static_bit_vector(&(reg[150]), 32);\
init_static_bit_vector(&(reg[151]), 32);\
init_static_bit_vector(&(reg[152]), 32);\
init_static_bit_vector(&(reg[153]), 32);\
init_static_bit_vector(&(reg[154]), 32);\
init_static_bit_vector(&(reg[155]), 32);\
init_static_bit_vector(&(reg[156]), 32);\
init_static_bit_vector(&(reg[157]), 32);\
init_static_bit_vector(&(reg[158]), 32);\
init_static_bit_vector(&(reg[159]), 32);\
init_static_bit_vector(&(reg[160]), 32);\
init_static_bit_vector(&(reg[161]), 32);\
init_static_bit_vector(&(reg[162]), 32);\
init_static_bit_vector(&(reg[163]), 32);\
init_static_bit_vector(&(reg[164]), 32);\
init_static_bit_vector(&(reg[165]), 32);\
init_static_bit_vector(&(reg[166]), 32);\
init_static_bit_vector(&(reg[167]), 32);\
init_static_bit_vector(&(reg[168]), 32);\
init_static_bit_vector(&(reg[169]), 32);\
init_static_bit_vector(&(reg[170]), 32);\
init_static_bit_vector(&(reg[171]), 32);\
init_static_bit_vector(&(reg[172]), 32);\
init_static_bit_vector(&(reg[173]), 32);\
init_static_bit_vector(&(reg[174]), 32);\
init_static_bit_vector(&(reg[175]), 32);\
init_static_bit_vector(&(reg[176]), 32);\
init_static_bit_vector(&(reg[177]), 32);\
init_static_bit_vector(&(reg[178]), 32);\
init_static_bit_vector(&(reg[179]), 32);\
init_static_bit_vector(&(reg[180]), 32);\
init_static_bit_vector(&(reg[181]), 32);\
init_static_bit_vector(&(reg[182]), 32);\
init_static_bit_vector(&(reg[183]), 32);\
init_static_bit_vector(&(reg[184]), 32);\
init_static_bit_vector(&(reg[185]), 32);\
init_static_bit_vector(&(reg[186]), 32);\
init_static_bit_vector(&(reg[187]), 32);\
init_static_bit_vector(&(reg[188]), 32);\
init_static_bit_vector(&(reg[189]), 32);\
init_static_bit_vector(&(reg[190]), 32);\
init_static_bit_vector(&(reg[191]), 32);\
init_static_bit_vector(&(reg[192]), 32);\
init_static_bit_vector(&(reg[193]), 32);\
init_static_bit_vector(&(reg[194]), 32);\
init_static_bit_vector(&(reg[195]), 32);\
init_static_bit_vector(&(reg[196]), 32);\
init_static_bit_vector(&(reg[197]), 32);\
init_static_bit_vector(&(reg[198]), 32);\
init_static_bit_vector(&(reg[199]), 32);\
init_static_bit_vector(&(reg[200]), 32);\
init_static_bit_vector(&(reg[201]), 32);\
init_static_bit_vector(&(reg[202]), 32);\
init_static_bit_vector(&(reg[203]), 32);\
init_static_bit_vector(&(reg[204]), 32);\
init_static_bit_vector(&(reg[205]), 32);\
init_static_bit_vector(&(reg[206]), 32);\
init_static_bit_vector(&(reg[207]), 32);\
init_static_bit_vector(&(reg[208]), 32);\
init_static_bit_vector(&(reg[209]), 32);\
init_static_bit_vector(&(reg[210]), 32);\
init_static_bit_vector(&(reg[211]), 32);\
init_static_bit_vector(&(reg[212]), 32);\
init_static_bit_vector(&(reg[213]), 32);\
init_static_bit_vector(&(reg[214]), 32);\
init_static_bit_vector(&(reg[215]), 32);\
init_static_bit_vector(&(reg[216]), 32);\
init_static_bit_vector(&(reg[217]), 32);\
init_static_bit_vector(&(reg[218]), 32);\
init_static_bit_vector(&(reg[219]), 32);\
init_static_bit_vector(&(reg[220]), 32);\
init_static_bit_vector(&(reg[221]), 32);\
init_static_bit_vector(&(reg[222]), 32);\
init_static_bit_vector(&(reg[223]), 32);\
init_static_bit_vector(&(reg[224]), 32);\
init_static_bit_vector(&(reg[225]), 32);\
init_static_bit_vector(&(reg[226]), 32);\
init_static_bit_vector(&(reg[227]), 32);\
init_static_bit_vector(&(reg[228]), 32);\
init_static_bit_vector(&(reg[229]), 32);\
init_static_bit_vector(&(reg[230]), 32);\
init_static_bit_vector(&(reg[231]), 32);\
init_static_bit_vector(&(reg[232]), 32);\
init_static_bit_vector(&(reg[233]), 32);\
init_static_bit_vector(&(reg[234]), 32);\
init_static_bit_vector(&(reg[235]), 32);\
init_static_bit_vector(&(reg[236]), 32);\
init_static_bit_vector(&(reg[237]), 32);\
init_static_bit_vector(&(reg[238]), 32);\
init_static_bit_vector(&(reg[239]), 32);\
init_static_bit_vector(&(reg[240]), 32);\
init_static_bit_vector(&(reg[241]), 32);\
init_static_bit_vector(&(reg[242]), 32);\
init_static_bit_vector(&(reg[243]), 32);\
init_static_bit_vector(&(reg[244]), 32);\
init_static_bit_vector(&(reg[245]), 32);\
init_static_bit_vector(&(reg[246]), 32);\
init_static_bit_vector(&(reg[247]), 32);\
init_static_bit_vector(&(reg[248]), 32);\
init_static_bit_vector(&(reg[249]), 32);\
init_static_bit_vector(&(reg[250]), 32);\
init_static_bit_vector(&(reg[251]), 32);\
init_static_bit_vector(&(reg[252]), 32);\
init_static_bit_vector(&(reg[253]), 32);\
init_static_bit_vector(&(reg[254]), 32);\
init_static_bit_vector(&(reg[255]), 32);\
register_pipe("reg_output", 40, 8, 0);\
init_static_bit_vector(&(right_shift), 32);\
register_pipe("write_mem", 40, 8, 0);\
}
void _simple_switch_accessMem_(bit_vector* __pread_write_bar, bit_vector* __paddr, bit_vector* __pwrite_data, bit_vector*  __pread_data)
{
MUTEX_DECL(simple_switch__accessMem_series_block_stmt_11_c_mutex_);
MUTEX_LOCK(simple_switch__accessMem_series_block_stmt_11_c_mutex_);
simple_switch__accessMem_inner_inarg_prep_macro__; 
// 	$guard (~read_write_bar) mem[addr] := write_data// bits of buffering = 32. 
simple_switch__accessMem_assign_stmt_21_c_macro_; 
// 	$guard (read_write_bar) read_data := mem[addr]// bits of buffering = 32. 
simple_switch__accessMem_assign_stmt_26_c_macro_; 
simple_switch__accessMem_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__accessMem_series_block_stmt_11_c_mutex_);
}
void _simple_switch_accessreg_(bit_vector* __pread_write_bar, bit_vector* __paddr, bit_vector* __pwrite_data, bit_vector*  __pread_data)
{
MUTEX_DECL(simple_switch__accessreg_series_block_stmt_28_c_mutex_);
MUTEX_LOCK(simple_switch__accessreg_series_block_stmt_28_c_mutex_);
simple_switch__accessreg_inner_inarg_prep_macro__; 
// 	$guard (~read_write_bar) reg[addr] := write_data// bits of buffering = 32. 
simple_switch__accessreg_assign_stmt_37_c_macro_; 
// 	$guard (read_write_bar) read_data := reg[addr]// bits of buffering = 32. 
simple_switch__accessreg_assign_stmt_42_c_macro_; 
simple_switch__accessreg_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__accessreg_series_block_stmt_28_c_mutex_);
}
void _simple_switch_add_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__add_series_block_stmt_44_c_mutex_);
MUTEX_LOCK(simple_switch__add_series_block_stmt_44_c_mutex_);
simple_switch__add_inner_inarg_prep_macro__; 
// 	output := (rs1_data + rs2_data)// bits of buffering = 32. 
simple_switch__add_assign_stmt_54_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__add_call_stmt_59_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__add_assign_stmt_64_c_macro_; 
simple_switch__add_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__add_series_block_stmt_44_c_mutex_);
}
void simple_switch_add(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__add_outer_arg_decl_macro__;
_simple_switch_add_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__add_outer_op_xfer_macro__;
}


void _simple_switch_and_i_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__and_i_series_block_stmt_66_c_mutex_);
MUTEX_LOCK(simple_switch__and_i_series_block_stmt_66_c_mutex_);
simple_switch__and_i_inner_inarg_prep_macro__; 
// 	output := (rs1_data & rs2_data)// bits of buffering = 32. 
simple_switch__and_i_assign_stmt_76_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy1 ) 
simple_switch__and_i_call_stmt_81_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__and_i_assign_stmt_86_c_macro_; 
simple_switch__and_i_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__and_i_series_block_stmt_66_c_mutex_);
}
void simple_switch_and_i(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__and_i_outer_arg_decl_macro__;
_simple_switch_and_i_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__and_i_outer_op_xfer_macro__;
}


void _simple_switch_bn_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__bn_series_block_stmt_88_c_mutex_);
MUTEX_LOCK(simple_switch__bn_series_block_stmt_88_c_mutex_);
simple_switch__bn_inner_inarg_prep_macro__; 
// 	bnn := (rs1_data >> 31 )// bits of buffering = 32. 
simple_switch__bn_assign_stmt_98_c_macro_; 
// 	$guard (~bnn) next_pc1 := (pc + 1 )// bits of buffering = 8. 
simple_switch__bn_assign_stmt_104_c_macro_; 
// 	$guard (bnn) next_pc1 := ( $slice rs2_data 7 0 ) // bits of buffering = 8. 
simple_switch__bn_assign_stmt_109_c_macro_; 
// 	next_pc := next_pc1// bits of buffering = 8. 
simple_switch__bn_assign_stmt_112_c_macro_; 
simple_switch__bn_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__bn_series_block_stmt_88_c_mutex_);
}
void simple_switch_bn(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__bn_outer_arg_decl_macro__;
_simple_switch_bn_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__bn_outer_op_xfer_macro__;
}


void _simple_switch_bz_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__bz_series_block_stmt_114_c_mutex_);
MUTEX_LOCK(simple_switch__bz_series_block_stmt_114_c_mutex_);
simple_switch__bz_inner_inarg_prep_macro__; 
// 	bzz := rs1_data// bits of buffering = 32. 
simple_switch__bz_assign_stmt_122_c_macro_; 
// 	$guard (bzz) next_pc1 := (pc + 1 )// bits of buffering = 8. 
simple_switch__bz_assign_stmt_128_c_macro_; 
// 	$guard (~bzz) next_pc1 := ( $slice rs2_data 7 0 ) // bits of buffering = 8. 
simple_switch__bz_assign_stmt_133_c_macro_; 
// 	next_pc := next_pc1// bits of buffering = 8. 
simple_switch__bz_assign_stmt_136_c_macro_; 
simple_switch__bz_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__bz_series_block_stmt_114_c_mutex_);
}
void simple_switch_bz(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__bz_outer_arg_decl_macro__;
_simple_switch_bz_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__bz_outer_op_xfer_macro__;
}


void _simple_switch_call_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__call_series_block_stmt_138_c_mutex_);
MUTEX_LOCK(simple_switch__call_series_block_stmt_138_c_mutex_);
simple_switch__call_inner_inarg_prep_macro__; 
// 	pc_32 := (zero24 && pc)// bits of buffering = 32. 
simple_switch__call_assign_stmt_152_c_macro_; 
// 	$call accessreg (0  rd pc_32 ) (dummy ) 
simple_switch__call_call_stmt_157_c_macro_; 
// 	next_pc := ( $slice rs1_data 7 0 ) // bits of buffering = 8. 
simple_switch__call_assign_stmt_161_c_macro_; 
simple_switch__call_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__call_series_block_stmt_138_c_mutex_);
}
void simple_switch_call(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__call_outer_arg_decl_macro__;
_simple_switch_call_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__call_outer_op_xfer_macro__;
}


void _simple_switch_cmp_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__cmp_series_block_stmt_163_c_mutex_);
MUTEX_LOCK(simple_switch__cmp_series_block_stmt_163_c_mutex_);
simple_switch__cmp_inner_inarg_prep_macro__; 
// 	output := ((( $mux (rs1_data == rs2_data) 0   _b0  )  | ( $mux (rs1_data < rs2_data) -1   _b0  ) ) | ( $mux (rs1_data > rs2_data) 1   _b0  ) )// bits of buffering = 32. 
simple_switch__cmp_assign_stmt_190_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__cmp_call_stmt_195_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__cmp_assign_stmt_200_c_macro_; 
simple_switch__cmp_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__cmp_series_block_stmt_163_c_mutex_);
}
void simple_switch_cmp(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__cmp_outer_arg_decl_macro__;
_simple_switch_cmp_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__cmp_outer_op_xfer_macro__;
}


void _simple_switch_global_storage_initializer__()
{
MUTEX_DECL(simple_switch__global_storage_initializer__series_block_stmt_202_c_mutex_);
MUTEX_LOCK(simple_switch__global_storage_initializer__series_block_stmt_202_c_mutex_);
simple_switch__global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
simple_switch__global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__global_storage_initializer__series_block_stmt_202_c_mutex_);
}
void simple_switch_global_storage_initializer_()
{
simple_switch__global_storage_initializer__outer_arg_decl_macro__;
_simple_switch_global_storage_initializer__();
simple_switch__global_storage_initializer__outer_op_xfer_macro__;
}


void _simple_switch_halt_(bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__halt_series_block_stmt_205_c_mutex_);
MUTEX_LOCK(simple_switch__halt_series_block_stmt_205_c_mutex_);
simple_switch__halt_inner_inarg_prep_macro__; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__halt_assign_stmt_212_c_macro_; 
simple_switch__halt_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__halt_series_block_stmt_205_c_mutex_);
}
void simple_switch_halt(uint8_t pc , uint8_t*  next_pc )
{
simple_switch__halt_outer_arg_decl_macro__;
_simple_switch_halt_( &__pc,  &__next_pc);
simple_switch__halt_outer_op_xfer_macro__;
}


void _simple_switch_init_mem_()
{
MUTEX_DECL(simple_switch__init_mem_series_block_stmt_214_c_mutex_);
MUTEX_LOCK(simple_switch__init_mem_series_block_stmt_214_c_mutex_);
simple_switch__init_mem_inner_inarg_prep_macro__; 
simple_switch__init_mem_branch_block_stmt_215_c_export_decl_macro_; 
{
// merge  file prog.linked.opt.aa, line 111
simple_switch__init_mem_merge_stmt_216_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<8>) 0  ) $on   $entry 			  NI $on   loopback 
 // type of target is $uint<8>
simple_switch__init_mem_phi_stmt_217_c_macro_; 
simple_switch__init_mem_merge_stmt_216_c_postamble_macro_; 
// 		NII := ($cast ($uint<32>) I )// bits of buffering = 32. 
simple_switch__init_mem_assign_stmt_226_c_macro_; 
// 		mem[I] := NII// bits of buffering = 32. 
simple_switch__init_mem_assign_stmt_230_c_macro_; 
// 		NI := (I + 1 )// bits of buffering = 8. 
simple_switch__init_mem_assign_stmt_235_c_macro_; 
// if statement :  file prog.linked.opt.aa, line 0
__declare_static_bit_vector(konst_238,8);\
bit_vector_clear(&konst_238);\
konst_238.val.byte_array[0] = 10;\
__declare_static_bit_vector(ULT_u8_u1_239,1);\
bit_vector_clear(&konst_238);\
konst_238.val.byte_array[0] = 10;\
bit_vector_less(0, &(I), &(konst_238), &(ULT_u8_u1_239));\
if (has_undefined_bit(&ULT_u8_u1_239)) {fprintf(stderr, "Error: variable ULT_u8_u1_239 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_239));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_239)) { 
/* 			$place[loopback]
*/  goto loopback_215;
} 
else {
 ;
}
simple_switch__init_mem_branch_block_stmt_215_c_export_apply_macro_;
}
simple_switch__init_mem_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__init_mem_series_block_stmt_214_c_mutex_);
}
void simple_switch_init_mem()
{
simple_switch__init_mem_outer_arg_decl_macro__;
_simple_switch_init_mem_();
simple_switch__init_mem_outer_op_xfer_macro__;
}


void _simple_switch_init_reg_()
{
MUTEX_DECL(simple_switch__init_reg_series_block_stmt_244_c_mutex_);
MUTEX_LOCK(simple_switch__init_reg_series_block_stmt_244_c_mutex_);
simple_switch__init_reg_inner_inarg_prep_macro__; 
simple_switch__init_reg_branch_block_stmt_245_c_export_decl_macro_; 
{
// merge  file prog.linked.opt.aa, line 130
simple_switch__init_reg_merge_stmt_246_c_preamble_macro_; 
// 			$phi J := 			  ($bitcast ($uint<8>) 0  ) $on   $entry 			  NJ $on   loopback 
 // type of target is $uint<8>
simple_switch__init_reg_phi_stmt_247_c_macro_; 
simple_switch__init_reg_merge_stmt_246_c_postamble_macro_; 
// 		NJJ := ($cast ($uint<32>) J )// bits of buffering = 32. 
simple_switch__init_reg_assign_stmt_256_c_macro_; 
// 		reg[J] := NJJ// bits of buffering = 32. 
simple_switch__init_reg_assign_stmt_260_c_macro_; 
// 		NJ := (J + 1 )// bits of buffering = 8. 
simple_switch__init_reg_assign_stmt_265_c_macro_; 
// if statement :  file prog.linked.opt.aa, line 0
__declare_static_bit_vector(konst_268,8);\
bit_vector_clear(&konst_268);\
konst_268.val.byte_array[0] = 64;\
__declare_static_bit_vector(ULT_u8_u1_269,1);\
bit_vector_clear(&konst_268);\
konst_268.val.byte_array[0] = 64;\
bit_vector_less(0, &(J), &(konst_268), &(ULT_u8_u1_269));\
if (has_undefined_bit(&ULT_u8_u1_269)) {fprintf(stderr, "Error: variable ULT_u8_u1_269 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_269));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_269)) { 
/* 			$place[loopback]
*/  goto loopback_245;
} 
else {
 ;
}
simple_switch__init_reg_branch_block_stmt_245_c_export_apply_macro_;
}
simple_switch__init_reg_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__init_reg_series_block_stmt_244_c_mutex_);
}
void simple_switch_init_reg()
{
simple_switch__init_reg_outer_arg_decl_macro__;
_simple_switch_init_reg_();
simple_switch__init_reg_outer_op_xfer_macro__;
}


void _simple_switch_jmp_(bit_vector* __prs1_data, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__jmp_series_block_stmt_274_c_mutex_);
MUTEX_LOCK(simple_switch__jmp_series_block_stmt_274_c_mutex_);
simple_switch__jmp_inner_inarg_prep_macro__; 
// 	next_pc := ( $slice rs1_data 7 0 ) // bits of buffering = 8. 
simple_switch__jmp_assign_stmt_281_c_macro_; 
simple_switch__jmp_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__jmp_series_block_stmt_274_c_mutex_);
}
void simple_switch_jmp(uint32_t rs1_data , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__jmp_outer_arg_decl_macro__;
_simple_switch_jmp_( &__rs1_data,  &__pc,  &__next_pc);
simple_switch__jmp_outer_op_xfer_macro__;
}


void _simple_switch_load_(bit_vector* __prs1_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__load_series_block_stmt_283_c_mutex_);
MUTEX_LOCK(simple_switch__load_series_block_stmt_283_c_mutex_);
simple_switch__load_inner_inarg_prep_macro__; 
// 	$volatile addr := ( $slice rs1_data 7 0 ) 
simple_switch__load_assign_stmt_291_c_macro_; 
// 	$call accessMem (1  addr 0  ) (output ) 
simple_switch__load_call_stmt_296_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy1 ) 
simple_switch__load_call_stmt_301_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__load_assign_stmt_306_c_macro_; 
simple_switch__load_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__load_series_block_stmt_283_c_mutex_);
}
void simple_switch_load(uint32_t rs1_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__load_outer_arg_decl_macro__;
_simple_switch_load_( &__rs1_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__load_outer_op_xfer_macro__;
}


void _simple_switch_or_i_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__or_i_series_block_stmt_308_c_mutex_);
MUTEX_LOCK(simple_switch__or_i_series_block_stmt_308_c_mutex_);
simple_switch__or_i_inner_inarg_prep_macro__; 
// 	output := (rs1_data | rs2_data)// bits of buffering = 32. 
simple_switch__or_i_assign_stmt_318_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__or_i_call_stmt_323_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__or_i_assign_stmt_328_c_macro_; 
simple_switch__or_i_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__or_i_series_block_stmt_308_c_mutex_);
}
void simple_switch_or_i(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__or_i_outer_arg_decl_macro__;
_simple_switch_or_i_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__or_i_outer_op_xfer_macro__;
}


void _simple_switch_sbir_(bit_vector* __pimm, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__sbir_series_block_stmt_330_c_mutex_);
MUTEX_LOCK(simple_switch__sbir_series_block_stmt_330_c_mutex_);
simple_switch__sbir_inner_inarg_prep_macro__; 
// 	output := (zero24 && imm)// bits of buffering = 32. 
simple_switch__sbir_assign_stmt_342_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy1 ) 
simple_switch__sbir_call_stmt_347_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__sbir_assign_stmt_352_c_macro_; 
simple_switch__sbir_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__sbir_series_block_stmt_330_c_mutex_);
}
void simple_switch_sbir(uint8_t imm , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__sbir_outer_arg_decl_macro__;
_simple_switch_sbir_( &__imm,  &__rd,  &__pc,  &__next_pc);
simple_switch__sbir_outer_op_xfer_macro__;
}


void _simple_switch_sll_i_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__sll_i_series_block_stmt_354_c_mutex_);
MUTEX_LOCK(simple_switch__sll_i_series_block_stmt_354_c_mutex_);
simple_switch__sll_i_inner_inarg_prep_macro__; 
// 	output := (rs1_data << rs2_data)// bits of buffering = 32. 
simple_switch__sll_i_assign_stmt_364_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__sll_i_call_stmt_369_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__sll_i_assign_stmt_374_c_macro_; 
simple_switch__sll_i_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__sll_i_series_block_stmt_354_c_mutex_);
}
void simple_switch_sll_i(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__sll_i_outer_arg_decl_macro__;
_simple_switch_sll_i_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__sll_i_outer_op_xfer_macro__;
}


void _simple_switch_sra_i_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__sra_i_series_block_stmt_376_c_mutex_);
MUTEX_LOCK(simple_switch__sra_i_series_block_stmt_376_c_mutex_);
simple_switch__sra_i_inner_inarg_prep_macro__; 
// 	right_shift := (rs1_data >> rs2_data)// bits of buffering = 32. 
simple_switch__sra_i_assign_stmt_386_c_macro_; 
// 	no_of_shifts := (( $mux (rs2_data < 33 ) 1   _b0  )  | ( $mux (rs2_data > 32 ) 0   _b0  ) )// bits of buffering = 32. 
simple_switch__sra_i_assign_stmt_401_c_macro_; 
// 	sraa := (right_shift & no_of_shifts)// bits of buffering = 32. 
simple_switch__sra_i_assign_stmt_406_c_macro_; 
// 	sraaa := (right_shift & ( ~ no_of_shifts ))// bits of buffering = 32. 
simple_switch__sra_i_assign_stmt_412_c_macro_; 
// 	$guard (sraa) new := (_hffffffff  << (32  - rs1_data))// bits of buffering = 32. 
simple_switch__sra_i_assign_stmt_420_c_macro_; 
// 	$guard (sraa) right_shift := (right_shift | new)// bits of buffering = 32. 
simple_switch__sra_i_assign_stmt_426_c_macro_; 
// 	$guard (sraaa) right_shift := _hffffffff // bits of buffering = 32. 
simple_switch__sra_i_assign_stmt_430_c_macro_; 
// 	output := right_shift// bits of buffering = 32. 
simple_switch__sra_i_assign_stmt_433_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__sra_i_call_stmt_438_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__sra_i_assign_stmt_443_c_macro_; 
simple_switch__sra_i_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__sra_i_series_block_stmt_376_c_mutex_);
}
void simple_switch_sra_i(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__sra_i_outer_arg_decl_macro__;
_simple_switch_sra_i_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__sra_i_outer_op_xfer_macro__;
}


void _simple_switch_srl_i_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__srl_i_series_block_stmt_445_c_mutex_);
MUTEX_LOCK(simple_switch__srl_i_series_block_stmt_445_c_mutex_);
simple_switch__srl_i_inner_inarg_prep_macro__; 
// 	output := (rs1_data >> rs2_data)// bits of buffering = 32. 
simple_switch__srl_i_assign_stmt_455_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__srl_i_call_stmt_460_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__srl_i_assign_stmt_465_c_macro_; 
simple_switch__srl_i_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__srl_i_series_block_stmt_445_c_mutex_);
}
void simple_switch_srl_i(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__srl_i_outer_arg_decl_macro__;
_simple_switch_srl_i_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__srl_i_outer_op_xfer_macro__;
}


void _simple_switch_store_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__store_series_block_stmt_467_c_mutex_);
MUTEX_LOCK(simple_switch__store_series_block_stmt_467_c_mutex_);
simple_switch__store_inner_inarg_prep_macro__; 
// 	$volatile addr := ( $slice rs1_data 7 0 ) 
simple_switch__store_assign_stmt_475_c_macro_; 
// 	$call accessMem (0  addr rs2_data ) (dummy1 ) 
simple_switch__store_call_stmt_480_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__store_assign_stmt_485_c_macro_; 
simple_switch__store_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__store_series_block_stmt_467_c_mutex_);
}
void simple_switch_store(uint32_t rs1_data , uint32_t rs2_data , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__store_outer_arg_decl_macro__;
_simple_switch_store_( &__rs1_data,  &__rs2_data,  &__pc,  &__next_pc);
simple_switch__store_outer_op_xfer_macro__;
}


void _simple_switch_sub_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__sub_series_block_stmt_487_c_mutex_);
MUTEX_LOCK(simple_switch__sub_series_block_stmt_487_c_mutex_);
simple_switch__sub_inner_inarg_prep_macro__; 
// 	output := (rs1_data - rs2_data)// bits of buffering = 32. 
simple_switch__sub_assign_stmt_497_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__sub_call_stmt_502_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__sub_assign_stmt_507_c_macro_; 
simple_switch__sub_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__sub_series_block_stmt_487_c_mutex_);
}
void simple_switch_sub(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__sub_outer_arg_decl_macro__;
_simple_switch_sub_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__sub_outer_op_xfer_macro__;
}


void _simple_switch_try_(bit_vector* __ppc, bit_vector* __pinst, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__try_series_block_stmt_553_c_mutex_);
MUTEX_LOCK(simple_switch__try_series_block_stmt_553_c_mutex_);
simple_switch__try_inner_inarg_prep_macro__; 
// 	$volatile op := ( $slice inst 31 24 ) 
simple_switch__try_assign_stmt_560_c_macro_; 
// 	$volatile rs1 := ( $slice inst 23 16 ) 
simple_switch__try_assign_stmt_564_c_macro_; 
// 	$volatile rs2 := ( $slice inst 15 8 ) 
simple_switch__try_assign_stmt_568_c_macro_; 
// 	$volatile rd := ( $slice inst 7 0 ) 
simple_switch__try_assign_stmt_572_c_macro_; 
// 	$volatile halt1 := (op == 1 )
simple_switch__try_assign_stmt_577_c_macro_; 
// 	$volatile sbir1 := (op == 2 )
simple_switch__try_assign_stmt_582_c_macro_; 
// 	$volatile load1 := (op == 3 )
simple_switch__try_assign_stmt_587_c_macro_; 
// 	$volatile store1 := (op == 4 )
simple_switch__try_assign_stmt_592_c_macro_; 
// 	$volatile and1 := (op == 5 )
simple_switch__try_assign_stmt_597_c_macro_; 
// 	$volatile or1 := (op == 6 )
simple_switch__try_assign_stmt_602_c_macro_; 
// 	$volatile xnor1 := (op == 7 )
simple_switch__try_assign_stmt_607_c_macro_; 
// 	$volatile xor1 := (op == 8 )
simple_switch__try_assign_stmt_612_c_macro_; 
// 	$volatile add1 := (op == 9 )
simple_switch__try_assign_stmt_617_c_macro_; 
// 	$volatile sub1 := (op == 10 )
simple_switch__try_assign_stmt_622_c_macro_; 
// 	$volatile sll1 := (op == 11 )
simple_switch__try_assign_stmt_627_c_macro_; 
// 	$volatile srl1 := (op == 12 )
simple_switch__try_assign_stmt_632_c_macro_; 
// 	$volatile sra1 := (op == 13 )
simple_switch__try_assign_stmt_637_c_macro_; 
// 	$volatile bz1 := (op == 14 )
simple_switch__try_assign_stmt_642_c_macro_; 
// 	$volatile bn1 := (op == 15 )
simple_switch__try_assign_stmt_647_c_macro_; 
// 	$volatile call1 := (op == 16 )
simple_switch__try_assign_stmt_652_c_macro_; 
// 	$volatile jmp1 := (op == 17 )
simple_switch__try_assign_stmt_657_c_macro_; 
// 	$volatile cmp1 := (op == 18 )
simple_switch__try_assign_stmt_662_c_macro_; 
// 	$call accessreg (1  rs1 0  ) (rs1_data ) 
simple_switch__try_call_stmt_667_c_macro_; 
// 	$call accessreg (1  rs2 0  ) (rs2_data ) 
simple_switch__try_call_stmt_672_c_macro_; 
// 	$guard (halt1) $call halt (pc ) (next_pc1 ) 
simple_switch__try_call_stmt_676_c_macro_; 
// 	$guard (sbir1) $call sbir (rs1 rd pc ) (next_pc2 ) 
simple_switch__try_call_stmt_682_c_macro_; 
// 	$guard (load1) $call load (rs1_data rd pc ) (next_pc3 ) 
simple_switch__try_call_stmt_688_c_macro_; 
// 	$guard (store1) $call store (rs1_data rs2_data pc ) (next_pc4 ) 
simple_switch__try_call_stmt_694_c_macro_; 
// 	$guard (and1) $call and_i (rs1_data rs2_data rd pc ) (next_pc5 ) 
simple_switch__try_call_stmt_701_c_macro_; 
// 	$guard (or1) $call or_i (rs1_data rs2_data rd pc ) (next_pc6 ) 
simple_switch__try_call_stmt_708_c_macro_; 
// 	$guard (xnor1) $call xnor_i (rs1_data rs2_data rd pc ) (next_pc7 ) 
simple_switch__try_call_stmt_715_c_macro_; 
// 	$guard (xor1) $call xor_i (rs1_data rs2_data rd pc ) (next_pc8 ) 
simple_switch__try_call_stmt_722_c_macro_; 
// 	$guard (add1) $call add (rs1_data rs2_data rd pc ) (next_pc9 ) 
simple_switch__try_call_stmt_729_c_macro_; 
// 	$guard (sub1) $call sub (rs1_data rs2_data rd pc ) (next_pc10 ) 
simple_switch__try_call_stmt_736_c_macro_; 
// 	$guard (sll1) $call sll_i (rs1_data rs2_data rd pc ) (next_pc11 ) 
simple_switch__try_call_stmt_743_c_macro_; 
// 	$guard (srl1) $call srl_i (rs1_data rs2_data rd pc ) (next_pc12 ) 
simple_switch__try_call_stmt_750_c_macro_; 
// 	$guard (sra1) $call sra_i (rs1_data rs2_data rd pc ) (next_pc13 ) 
simple_switch__try_call_stmt_757_c_macro_; 
// 	$guard (bz1) $call bz (rs1_data rs2_data rd pc ) (next_pc14 ) 
simple_switch__try_call_stmt_764_c_macro_; 
// 	$guard (bn1) $call bn (rs1_data rs2_data rd pc ) (next_pc15 ) 
simple_switch__try_call_stmt_771_c_macro_; 
// 	$guard (call1) $call call (rs1_data rs2_data rd pc ) (next_pc16 ) 
simple_switch__try_call_stmt_778_c_macro_; 
// 	$guard (jmp1) $call jmp (rs1_data pc ) (next_pc17 ) 
simple_switch__try_call_stmt_783_c_macro_; 
// 	$guard (cmp1) $call cmp (rs1_data rs2_data rd pc ) (next_pc18 ) 
simple_switch__try_call_stmt_790_c_macro_; 
// 	next_pc := ( $mux (op == 1 ) next_pc1  ( $mux (op == 2 ) next_pc2  ( $mux (op == 3 ) next_pc3  ( $mux (op == 4 ) next_pc4  ( $mux (op == 5 ) next_pc5  ( $mux (op == 6 ) next_pc6  ( $mux (op == 7 ) next_pc7  ( $mux (op == 8 ) next_pc8  ( $mux (op == 9 ) next_pc9  ( $mux (op == 10 ) next_pc10  ( $mux (op == 11 ) next_pc11  ( $mux (op == 12 ) next_pc12  ( $mux (op == 13 ) next_pc13  ( $mux (op == 14 ) next_pc14  ( $mux (op == 15 ) next_pc15  ( $mux (op == 16 ) next_pc16  ( $mux (op == 17 ) next_pc17  ( $mux (op == 18 ) next_pc18  ($bitcast ($uint<8>) 0  ) )  )  )  )  )  )  )  )  )  )  )  )  )  )  )  )  )  ) // bits of buffering = 8. 
simple_switch__try_assign_stmt_884_c_macro_; 
simple_switch__try_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__try_series_block_stmt_553_c_mutex_);
}
void simple_switch_try(uint8_t pc , uint32_t inst , uint8_t*  next_pc )
{
simple_switch__try_outer_arg_decl_macro__;
_simple_switch_try_( &__pc,  &__inst,  &__next_pc);
simple_switch__try_outer_op_xfer_macro__;
}


void _simple_switch_try1_()
{
MUTEX_DECL(simple_switch__try1_series_block_stmt_886_c_mutex_);
MUTEX_LOCK(simple_switch__try1_series_block_stmt_886_c_mutex_);
simple_switch__try1_inner_inarg_prep_macro__; 
// 	$call init_mem () () 
simple_switch__try1_call_stmt_887_c_macro_; 
// 	$call init_reg () () 
simple_switch__try1_call_stmt_888_c_macro_; 
simple_switch__try1_branch_block_stmt_889_c_export_decl_macro_; 
{
// merge  file prog.linked.opt.aa, line 306
simple_switch__try1_merge_stmt_890_c_preamble_macro_; 
// 			$phi pc := 			  ($bitcast ($uint<8>) 0  ) $on   $entry 			  next_pc $on   loopback 
 // type of target is $uint<8>
simple_switch__try1_phi_stmt_891_c_macro_; 
simple_switch__try1_merge_stmt_890_c_postamble_macro_; 
// 		inst1 := write_mem// bits of buffering = 8. 
simple_switch__try1_assign_stmt_899_c_macro_; 
// 		inst2 := write_mem// bits of buffering = 8. 
simple_switch__try1_assign_stmt_902_c_macro_; 
// 		inst3 := write_mem// bits of buffering = 8. 
simple_switch__try1_assign_stmt_905_c_macro_; 
// 		inst4 := write_mem// bits of buffering = 8. 
simple_switch__try1_assign_stmt_908_c_macro_; 
// 		inst := ((inst1 && inst1) && (inst1 && inst1))// bits of buffering = 32. 
simple_switch__try1_assign_stmt_917_c_macro_; 
// 		$call try (pc inst ) (next_pc )  $mark FIRST 
simple_switch__try1_call_stmt_921_c_macro_; 
// 		register_output := reg[1 ] $synch ( $update FIRST )  // bits of buffering = 32. 
simple_switch__try1_assign_stmt_925_c_macro_; 
// 		reg1 := ( $slice register_output 31 24 ) // bits of buffering = 8. 
simple_switch__try1_assign_stmt_929_c_macro_; 
// 		reg2 := ( $slice register_output 23 16 ) // bits of buffering = 8. 
simple_switch__try1_assign_stmt_933_c_macro_; 
// 		reg3 := ( $slice register_output 15 8 ) // bits of buffering = 8. 
simple_switch__try1_assign_stmt_937_c_macro_; 
// 		reg4 := ( $slice register_output 7 0 ) // bits of buffering = 8. 
simple_switch__try1_assign_stmt_941_c_macro_; 
// 		LEDS := (reg3 && reg4)// bits of buffering = 16. 
simple_switch__try1_assign_stmt_946_c_macro_; 
// 		reg_output := reg1// bits of buffering = 8. 
simple_switch__try1_assign_stmt_949_c_macro_; 
// 		reg_output := reg2// bits of buffering = 8. 
simple_switch__try1_assign_stmt_952_c_macro_; 
// 		reg_output := reg3// bits of buffering = 8. 
simple_switch__try1_assign_stmt_955_c_macro_; 
// 		reg_output := reg4// bits of buffering = 8. 
simple_switch__try1_assign_stmt_958_c_macro_; 
/* 		$place[loopback]
*/  goto loopback_889;
simple_switch__try1_branch_block_stmt_889_c_export_apply_macro_;
}
simple_switch__try1_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__try1_series_block_stmt_886_c_mutex_);
}
void simple_switch_try1()
{
simple_switch__try1_outer_arg_decl_macro__;
_simple_switch_try1_();
simple_switch__try1_outer_op_xfer_macro__;
}


void _simple_switch_xnor_i_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__xnor_i_series_block_stmt_509_c_mutex_);
MUTEX_LOCK(simple_switch__xnor_i_series_block_stmt_509_c_mutex_);
simple_switch__xnor_i_inner_inarg_prep_macro__; 
// 	output := (rs1_data ~^ rs2_data)// bits of buffering = 32. 
simple_switch__xnor_i_assign_stmt_519_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__xnor_i_call_stmt_524_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__xnor_i_assign_stmt_529_c_macro_; 
simple_switch__xnor_i_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__xnor_i_series_block_stmt_509_c_mutex_);
}
void simple_switch_xnor_i(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__xnor_i_outer_arg_decl_macro__;
_simple_switch_xnor_i_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__xnor_i_outer_op_xfer_macro__;
}


void _simple_switch_xor_i_(bit_vector* __prs1_data, bit_vector* __prs2_data, bit_vector* __prd, bit_vector* __ppc, bit_vector*  __pnext_pc)
{
MUTEX_DECL(simple_switch__xor_i_series_block_stmt_531_c_mutex_);
MUTEX_LOCK(simple_switch__xor_i_series_block_stmt_531_c_mutex_);
simple_switch__xor_i_inner_inarg_prep_macro__; 
// 	output := (rs1_data ^ rs2_data)// bits of buffering = 32. 
simple_switch__xor_i_assign_stmt_541_c_macro_; 
// 	$call accessreg (0  rd output ) (dummy ) 
simple_switch__xor_i_call_stmt_546_c_macro_; 
// 	next_pc := (pc + 1 )// bits of buffering = 8. 
simple_switch__xor_i_assign_stmt_551_c_macro_; 
simple_switch__xor_i_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(simple_switch__xor_i_series_block_stmt_531_c_mutex_);
}
void simple_switch_xor_i(uint32_t rs1_data , uint32_t rs2_data , uint8_t rd , uint8_t pc , uint8_t*  next_pc )
{
simple_switch__xor_i_outer_arg_decl_macro__;
_simple_switch_xor_i_( &__rs1_data,  &__rs2_data,  &__rd,  &__pc,  &__next_pc);
simple_switch__xor_i_outer_op_xfer_macro__;
}


DEFINE_THREAD(simple_switch_try1);
PTHREAD_DECL(simple_switch_try1);
void simple_switch_start_daemons(FILE* fp, int trace_on) {
simple_switch___report_log_file__ = fp;
simple_switch___trace_on__ = trace_on;
simple_switch___init_aa_globals__(); 
PTHREAD_CREATE(simple_switch_try1);
}
void simple_switch_stop_daemons() {
PTHREAD_CANCEL(simple_switch_try1);
}
