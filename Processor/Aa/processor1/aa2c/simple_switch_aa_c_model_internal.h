#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
// object initialization 

#define simple_switch__accessMem_inner_inarg_prep_macro__ __declare_static_bit_vector(read_write_bar,1);\
bit_vector_cast_to_bit_vector(0, &(read_write_bar), &((*__pread_write_bar)));\
__declare_static_bit_vector(addr,8);\
bit_vector_cast_to_bit_vector(0, &(addr), &((*__paddr)));\
__declare_static_bit_vector(write_data,32);\
bit_vector_cast_to_bit_vector(0, &(write_data), &((*__pwrite_data)));\
__declare_static_bit_vector(read_data,32);\

#define simple_switch__accessMem_assign_stmt_21_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
if (!bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_cast_to_bit_vector(0, &((mem[bit_vector_to_uint64(0, &addr)])), &(write_data));\
}
;

#define simple_switch__accessMem_assign_stmt_26_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_cast_to_bit_vector(0, &(read_data), &((mem[bit_vector_to_uint64(0, &addr)])));\
}
;

#define simple_switch__accessMem_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pread_data)), &(read_data));\
;

#define simple_switch__accessreg_inner_inarg_prep_macro__ __declare_static_bit_vector(read_write_bar,1);\
bit_vector_cast_to_bit_vector(0, &(read_write_bar), &((*__pread_write_bar)));\
__declare_static_bit_vector(addr,8);\
bit_vector_cast_to_bit_vector(0, &(addr), &((*__paddr)));\
__declare_static_bit_vector(write_data,32);\
bit_vector_cast_to_bit_vector(0, &(write_data), &((*__pwrite_data)));\
__declare_static_bit_vector(read_data,32);\

#define simple_switch__accessreg_assign_stmt_37_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
if (!bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_cast_to_bit_vector(0, &((reg[bit_vector_to_uint64(0, &addr)])), &(write_data));\
}
;

#define simple_switch__accessreg_assign_stmt_42_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_cast_to_bit_vector(0, &(read_data), &((reg[bit_vector_to_uint64(0, &addr)])));\
}
;

#define simple_switch__accessreg_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pread_data)), &(read_data));\
;

#define simple_switch__add_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__add_assign_stmt_54_c_macro_ __declare_static_bit_vector(ADD_u32_u32_53,32);\
bit_vector_plus( &(rs1_data), &(rs2_data), &(ADD_u32_u32_53));\
bit_vector_cast_to_bit_vector(0, &(output), &(ADD_u32_u32_53));\
;

#define simple_switch__add_call_stmt_59_c_macro_ __declare_static_bit_vector(konst_55,1);\
bit_vector_clear(&konst_55);\
bit_vector_clear(&konst_55);\
_simple_switch_accessreg_( &(konst_55),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__add_assign_stmt_64_c_macro_ __declare_static_bit_vector(konst_62,8);\
bit_vector_clear(&konst_62);\
konst_62.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_63,8);\
bit_vector_clear(&konst_62);\
konst_62.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_62), &(ADD_u8_u8_63));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_63));\
;

#define simple_switch__add_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__add_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__add_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__and_i_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy1,32);\

#define simple_switch__and_i_assign_stmt_76_c_macro_ __declare_static_bit_vector(AND_u32_u32_75,32);\
bit_vector_and(&(rs1_data), &(rs2_data), &(AND_u32_u32_75));\
bit_vector_cast_to_bit_vector(0, &(output), &(AND_u32_u32_75));\
;

#define simple_switch__and_i_call_stmt_81_c_macro_ __declare_static_bit_vector(konst_77,1);\
bit_vector_clear(&konst_77);\
bit_vector_clear(&konst_77);\
_simple_switch_accessreg_( &(konst_77),  &(rd),  &(output), &(dummy1));\
;

#define simple_switch__and_i_assign_stmt_86_c_macro_ __declare_static_bit_vector(konst_84,8);\
bit_vector_clear(&konst_84);\
konst_84.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_85,8);\
bit_vector_clear(&konst_84);\
konst_84.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_84), &(ADD_u8_u8_85));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_85));\
;

#define simple_switch__and_i_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__and_i_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__and_i_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__bn_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(bnn,32);\

#define simple_switch__bn_assign_stmt_98_c_macro_ __declare_static_bit_vector(konst_96,32);\
bit_vector_clear(&konst_96);\
konst_96.val.byte_array[0] = 31;\
__declare_static_bit_vector(LSHR_u32_u32_97,32);\
bit_vector_clear(&konst_96);\
konst_96.val.byte_array[0] = 31;\
bit_vector_shift_right(0, &(rs1_data), &(konst_96), &(LSHR_u32_u32_97));\
bit_vector_cast_to_bit_vector(0, &(bnn), &(LSHR_u32_u32_97));\
;

#define simple_switch__bn_assign_stmt_104_c_macro_ if (has_undefined_bit(&bnn)) {fprintf(stderr, "Error: variable bnn has undefined value (%s) at test point.\n", to_string(&bnn));assert(0);} \
__declare_static_bit_vector(konst_102,8);\
bit_vector_clear(&konst_102);\
konst_102.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_103,8);\
if (!bit_vector_to_uint64(0, &bnn)) {\
bit_vector_clear(&konst_102);\
konst_102.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_102), &(ADD_u8_u8_103));\
bit_vector_cast_to_bit_vector(0, &(next_pc1), &(ADD_u8_u8_103));\
}
;

#define simple_switch__bn_assign_stmt_109_c_macro_ if (has_undefined_bit(&bnn)) {fprintf(stderr, "Error: variable bnn has undefined value (%s) at test point.\n", to_string(&bnn));assert(0);} \
__declare_static_bit_vector(slice_108,8);\
if (bit_vector_to_uint64(0, &bnn)) {\
bit_vector_slice(&(rs2_data), &(slice_108), 0);\
bit_vector_cast_to_bit_vector(0, &(next_pc1), &(slice_108));\
}
;

#define simple_switch__bn_assign_stmt_112_c_macro_ bit_vector_cast_to_bit_vector(0, &(next_pc), &(next_pc1));\
;

#define simple_switch__bn_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__bn_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__bn_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__bz_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(bzz,32);\

#define simple_switch__bz_assign_stmt_122_c_macro_ bit_vector_cast_to_bit_vector(0, &(bzz), &(rs1_data));\
;

#define simple_switch__bz_assign_stmt_128_c_macro_ if (has_undefined_bit(&bzz)) {fprintf(stderr, "Error: variable bzz has undefined value (%s) at test point.\n", to_string(&bzz));assert(0);} \
__declare_static_bit_vector(konst_126,8);\
bit_vector_clear(&konst_126);\
konst_126.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_127,8);\
if (bit_vector_to_uint64(0, &bzz)) {\
bit_vector_clear(&konst_126);\
konst_126.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_126), &(ADD_u8_u8_127));\
bit_vector_cast_to_bit_vector(0, &(next_pc1), &(ADD_u8_u8_127));\
}
;

#define simple_switch__bz_assign_stmt_133_c_macro_ if (has_undefined_bit(&bzz)) {fprintf(stderr, "Error: variable bzz has undefined value (%s) at test point.\n", to_string(&bzz));assert(0);} \
__declare_static_bit_vector(slice_132,8);\
if (!bit_vector_to_uint64(0, &bzz)) {\
bit_vector_slice(&(rs2_data), &(slice_132), 0);\
bit_vector_cast_to_bit_vector(0, &(next_pc1), &(slice_132));\
}
;

#define simple_switch__bz_assign_stmt_136_c_macro_ bit_vector_cast_to_bit_vector(0, &(next_pc), &(next_pc1));\
;

#define simple_switch__bz_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__bz_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__bz_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__call_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(zero24,24);\
bit_vector_clear(&zero24);\
static char simple_switch_call_init_objects_flag = 1;\
if (simple_switch_call_init_objects_flag) {\
simple_switch_call_init_objects_flag= 0;\
init_static_bit_vector(&(zero24), 24);\
bit_vector_clear(&zero24);\
 }\
__declare_static_bit_vector(pc_32,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__call_assign_stmt_152_c_macro_ __declare_static_bit_vector(CONCAT_u24_u32_151,32);\
bit_vector_concatenate( &(zero24), &(pc), &(CONCAT_u24_u32_151));\
bit_vector_cast_to_bit_vector(0, &(pc_32), &(CONCAT_u24_u32_151));\
;

#define simple_switch__call_call_stmt_157_c_macro_ __declare_static_bit_vector(konst_153,1);\
bit_vector_clear(&konst_153);\
bit_vector_clear(&konst_153);\
_simple_switch_accessreg_( &(konst_153),  &(rd),  &(pc_32), &(dummy));\
;

#define simple_switch__call_assign_stmt_161_c_macro_ __declare_static_bit_vector(slice_160,8);\
bit_vector_slice(&(rs1_data), &(slice_160), 0);\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(slice_160));\
;

#define simple_switch__call_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__call_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__call_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__cmp_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__cmp_assign_stmt_190_c_macro_ __declare_static_bit_vector(EQ_u32_u1_172,1);\
__declare_static_bit_vector(konst_173,32);\
bit_vector_clear(&konst_173);\
__declare_static_bit_vector(konst_174,32);\
bit_vector_clear(&konst_174);\
__declare_static_bit_vector(MUX_175,32);\
__declare_static_bit_vector(ULT_u32_u1_178,1);\
__declare_static_bit_vector(konst_179,32);\
bit_vector_clear(&konst_179);\
konst_179.val.byte_array[0] = 255;\
konst_179.val.byte_array[1] = 255;\
konst_179.val.byte_array[2] = 255;\
konst_179.val.byte_array[3] = 255;\
__declare_static_bit_vector(konst_180,32);\
bit_vector_clear(&konst_180);\
__declare_static_bit_vector(MUX_181,32);\
__declare_static_bit_vector(OR_u32_u32_182,32);\
__declare_static_bit_vector(UGT_u32_u1_185,1);\
__declare_static_bit_vector(konst_186,32);\
bit_vector_clear(&konst_186);\
konst_186.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_187,32);\
bit_vector_clear(&konst_187);\
__declare_static_bit_vector(MUX_188,32);\
__declare_static_bit_vector(OR_u32_u32_189,32);\
bit_vector_equal(0, &(rs1_data), &(rs2_data), &(EQ_u32_u1_172));\
if (has_undefined_bit(&EQ_u32_u1_172)) {fprintf(stderr, "Error: variable EQ_u32_u1_172 has undefined value (%s) at test point.\n", to_string(&EQ_u32_u1_172));assert(0);} \
bit_vector_clear(&konst_173);\
bit_vector_clear(&konst_174);\
if(bit_vector_to_uint64(0, &EQ_u32_u1_172)){\
bit_vector_cast_to_bit_vector(0, &(MUX_175), &(konst_173));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_175), &(konst_174));\
}\
bit_vector_less(0, &(rs1_data), &(rs2_data), &(ULT_u32_u1_178));\
if (has_undefined_bit(&ULT_u32_u1_178)) {fprintf(stderr, "Error: variable ULT_u32_u1_178 has undefined value (%s) at test point.\n", to_string(&ULT_u32_u1_178));assert(0);} \
bit_vector_clear(&konst_179);\
konst_179.val.byte_array[0] = 255;\
konst_179.val.byte_array[1] = 255;\
konst_179.val.byte_array[2] = 255;\
konst_179.val.byte_array[3] = 255;\
bit_vector_clear(&konst_180);\
if(bit_vector_to_uint64(0, &ULT_u32_u1_178)){\
bit_vector_cast_to_bit_vector(0, &(MUX_181), &(konst_179));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_181), &(konst_180));\
}\
bit_vector_or(&(MUX_175), &(MUX_181), &(OR_u32_u32_182));\
bit_vector_greater(0, &(rs1_data), &(rs2_data), &(UGT_u32_u1_185));\
if (has_undefined_bit(&UGT_u32_u1_185)) {fprintf(stderr, "Error: variable UGT_u32_u1_185 has undefined value (%s) at test point.\n", to_string(&UGT_u32_u1_185));assert(0);} \
bit_vector_clear(&konst_186);\
konst_186.val.byte_array[0] = 1;\
bit_vector_clear(&konst_187);\
if(bit_vector_to_uint64(0, &UGT_u32_u1_185)){\
bit_vector_cast_to_bit_vector(0, &(MUX_188), &(konst_186));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_188), &(konst_187));\
}\
bit_vector_or(&(OR_u32_u32_182), &(MUX_188), &(OR_u32_u32_189));\
bit_vector_cast_to_bit_vector(0, &(output), &(OR_u32_u32_189));\
;

#define simple_switch__cmp_call_stmt_195_c_macro_ __declare_static_bit_vector(konst_191,1);\
bit_vector_clear(&konst_191);\
bit_vector_clear(&konst_191);\
_simple_switch_accessreg_( &(konst_191),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__cmp_assign_stmt_200_c_macro_ __declare_static_bit_vector(konst_198,8);\
bit_vector_clear(&konst_198);\
konst_198.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_199,8);\
bit_vector_clear(&konst_198);\
konst_198.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_198), &(ADD_u8_u8_199));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_199));\
;

#define simple_switch__cmp_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__cmp_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__cmp_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__global_storage_initializer__inner_inarg_prep_macro__ 
#define simple_switch__global_storage_initializer__inner_outarg_prep_macro__ ;

#define simple_switch__global_storage_initializer__outer_arg_decl_macro__ ;

#define simple_switch__global_storage_initializer__outer_op_xfer_macro__ ;

#define simple_switch__halt_inner_inarg_prep_macro__ __declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\

#define simple_switch__halt_assign_stmt_212_c_macro_ __declare_static_bit_vector(konst_210,8);\
bit_vector_clear(&konst_210);\
konst_210.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_211,8);\
bit_vector_clear(&konst_210);\
konst_210.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_210), &(ADD_u8_u8_211));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_211));\
;

#define simple_switch__halt_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__halt_outer_arg_decl_macro__ __declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__halt_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__init_mem_inner_inarg_prep_macro__ 
#define simple_switch__init_mem_branch_block_stmt_215_c_export_decl_macro_ __declare_static_bit_vector(I,8);\
__declare_static_bit_vector(NII,32);\
__declare_static_bit_vector(NI,8);\


#define simple_switch__init_mem_merge_stmt_216_c_preamble_macro_ uint8_t merge_stmt_216_entry_flag;\
merge_stmt_216_entry_flag = 1;\
uint8_t loopback_215_flag = 0;\
goto merge_stmt_216_run;\
loopback_215: loopback_215_flag = 1;\
goto merge_stmt_216_run;\
merge_stmt_216_run: ;\

#define simple_switch__init_mem_phi_stmt_217_c_macro_ __declare_static_bit_vector(konst_219,8);\
bit_vector_clear(&konst_219);\
__declare_static_bit_vector(type_cast_220,8);\
bit_vector_clear(&type_cast_220);\
if(loopback_215_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(NI));\
}\
else {\
__declare_static_bit_vector(konst_219,8);\
bit_vector_clear(&konst_219);\
__declare_static_bit_vector(type_cast_220,8);\
bit_vector_clear(&type_cast_220);\
bit_vector_clear(&konst_219);\
bit_vector_bitcast_to_bit_vector( &(type_cast_220), &(konst_219));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_220));\
}\
;
;

#define simple_switch__init_mem_merge_stmt_216_c_postamble_macro_ loopback_215_flag = 0;\
merge_stmt_216_entry_flag = 0;

#define simple_switch__init_mem_assign_stmt_226_c_macro_ __declare_static_bit_vector(type_cast_225,32);\
bit_vector_cast_to_bit_vector(0, &(type_cast_225), &(I));\
bit_vector_cast_to_bit_vector(0, &(NII), &(type_cast_225));\
;

#define simple_switch__init_mem_assign_stmt_230_c_macro_ bit_vector_cast_to_bit_vector(0, &((mem[bit_vector_to_uint64(0, &I)])), &(NII));\
;

#define simple_switch__init_mem_assign_stmt_235_c_macro_ __declare_static_bit_vector(konst_233,8);\
bit_vector_clear(&konst_233);\
konst_233.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_234,8);\
bit_vector_clear(&konst_233);\
konst_233.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_233), &(ADD_u8_u8_234));\
bit_vector_cast_to_bit_vector(0, &(NI), &(ADD_u8_u8_234));\
;
;

#define simple_switch__init_mem_branch_block_stmt_215_c_export_apply_macro_ ;

#define simple_switch__init_mem_inner_outarg_prep_macro__ ;

#define simple_switch__init_mem_outer_arg_decl_macro__ ;

#define simple_switch__init_mem_outer_op_xfer_macro__ ;

#define simple_switch__init_reg_inner_inarg_prep_macro__ 
#define simple_switch__init_reg_branch_block_stmt_245_c_export_decl_macro_ __declare_static_bit_vector(J,8);\
__declare_static_bit_vector(NJJ,32);\
__declare_static_bit_vector(NJ,8);\


#define simple_switch__init_reg_merge_stmt_246_c_preamble_macro_ uint8_t merge_stmt_246_entry_flag;\
merge_stmt_246_entry_flag = 1;\
uint8_t loopback_245_flag = 0;\
goto merge_stmt_246_run;\
loopback_245: loopback_245_flag = 1;\
goto merge_stmt_246_run;\
merge_stmt_246_run: ;\

#define simple_switch__init_reg_phi_stmt_247_c_macro_ __declare_static_bit_vector(konst_249,8);\
bit_vector_clear(&konst_249);\
__declare_static_bit_vector(type_cast_250,8);\
bit_vector_clear(&type_cast_250);\
if(loopback_245_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(NJ));\
}\
else {\
__declare_static_bit_vector(konst_249,8);\
bit_vector_clear(&konst_249);\
__declare_static_bit_vector(type_cast_250,8);\
bit_vector_clear(&type_cast_250);\
bit_vector_clear(&konst_249);\
bit_vector_bitcast_to_bit_vector( &(type_cast_250), &(konst_249));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_250));\
}\
;
;

#define simple_switch__init_reg_merge_stmt_246_c_postamble_macro_ loopback_245_flag = 0;\
merge_stmt_246_entry_flag = 0;

#define simple_switch__init_reg_assign_stmt_256_c_macro_ __declare_static_bit_vector(type_cast_255,32);\
bit_vector_cast_to_bit_vector(0, &(type_cast_255), &(J));\
bit_vector_cast_to_bit_vector(0, &(NJJ), &(type_cast_255));\
;

#define simple_switch__init_reg_assign_stmt_260_c_macro_ bit_vector_cast_to_bit_vector(0, &((reg[bit_vector_to_uint64(0, &J)])), &(NJJ));\
;

#define simple_switch__init_reg_assign_stmt_265_c_macro_ __declare_static_bit_vector(konst_263,8);\
bit_vector_clear(&konst_263);\
konst_263.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_264,8);\
bit_vector_clear(&konst_263);\
konst_263.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_263), &(ADD_u8_u8_264));\
bit_vector_cast_to_bit_vector(0, &(NJ), &(ADD_u8_u8_264));\
;
;

#define simple_switch__init_reg_branch_block_stmt_245_c_export_apply_macro_ ;

#define simple_switch__init_reg_inner_outarg_prep_macro__ ;

#define simple_switch__init_reg_outer_arg_decl_macro__ ;

#define simple_switch__init_reg_outer_op_xfer_macro__ ;

#define simple_switch__jmp_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\

#define simple_switch__jmp_assign_stmt_281_c_macro_ __declare_static_bit_vector(slice_280,8);\
bit_vector_slice(&(rs1_data), &(slice_280), 0);\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(slice_280));\
;

#define simple_switch__jmp_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__jmp_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__jmp_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__load_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(addr,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy1,32);\

#define simple_switch__load_assign_stmt_291_c_macro_ __declare_static_bit_vector(slice_290,8);\
bit_vector_slice(&(rs1_data), &(slice_290), 0);\
bit_vector_cast_to_bit_vector(0, &(addr), &(slice_290));\
;

#define simple_switch__load_call_stmt_296_c_macro_ __declare_static_bit_vector(konst_292,1);\
bit_vector_clear(&konst_292);\
konst_292.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_294,32);\
bit_vector_clear(&konst_294);\
bit_vector_clear(&konst_292);\
konst_292.val.byte_array[0] = 1;\
bit_vector_clear(&konst_294);\
_simple_switch_accessMem_( &(konst_292),  &(addr),  &(konst_294), &(output));\
;

#define simple_switch__load_call_stmt_301_c_macro_ __declare_static_bit_vector(konst_297,1);\
bit_vector_clear(&konst_297);\
bit_vector_clear(&konst_297);\
_simple_switch_accessreg_( &(konst_297),  &(rd),  &(output), &(dummy1));\
;

#define simple_switch__load_assign_stmt_306_c_macro_ __declare_static_bit_vector(konst_304,8);\
bit_vector_clear(&konst_304);\
konst_304.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_305,8);\
bit_vector_clear(&konst_304);\
konst_304.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_304), &(ADD_u8_u8_305));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_305));\
;

#define simple_switch__load_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__load_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__load_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__or_i_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__or_i_assign_stmt_318_c_macro_ __declare_static_bit_vector(OR_u32_u32_317,32);\
bit_vector_or(&(rs1_data), &(rs2_data), &(OR_u32_u32_317));\
bit_vector_cast_to_bit_vector(0, &(output), &(OR_u32_u32_317));\
;

#define simple_switch__or_i_call_stmt_323_c_macro_ __declare_static_bit_vector(konst_319,1);\
bit_vector_clear(&konst_319);\
bit_vector_clear(&konst_319);\
_simple_switch_accessreg_( &(konst_319),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__or_i_assign_stmt_328_c_macro_ __declare_static_bit_vector(konst_326,8);\
bit_vector_clear(&konst_326);\
konst_326.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_327,8);\
bit_vector_clear(&konst_326);\
konst_326.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_326), &(ADD_u8_u8_327));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_327));\
;

#define simple_switch__or_i_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__or_i_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__or_i_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__sbir_inner_inarg_prep_macro__ __declare_static_bit_vector(imm,8);\
bit_vector_cast_to_bit_vector(0, &(imm), &((*__pimm)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(zero24,24);\
bit_vector_clear(&zero24);\
static char simple_switch_sbir_init_objects_flag = 1;\
if (simple_switch_sbir_init_objects_flag) {\
simple_switch_sbir_init_objects_flag= 0;\
init_static_bit_vector(&(zero24), 24);\
bit_vector_clear(&zero24);\
 }\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy1,32);\

#define simple_switch__sbir_assign_stmt_342_c_macro_ __declare_static_bit_vector(CONCAT_u24_u32_341,32);\
bit_vector_concatenate( &(zero24), &(imm), &(CONCAT_u24_u32_341));\
bit_vector_cast_to_bit_vector(0, &(output), &(CONCAT_u24_u32_341));\
;

#define simple_switch__sbir_call_stmt_347_c_macro_ __declare_static_bit_vector(konst_343,1);\
bit_vector_clear(&konst_343);\
bit_vector_clear(&konst_343);\
_simple_switch_accessreg_( &(konst_343),  &(rd),  &(output), &(dummy1));\
;

#define simple_switch__sbir_assign_stmt_352_c_macro_ __declare_static_bit_vector(konst_350,8);\
bit_vector_clear(&konst_350);\
konst_350.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_351,8);\
bit_vector_clear(&konst_350);\
konst_350.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_350), &(ADD_u8_u8_351));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_351));\
;

#define simple_switch__sbir_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__sbir_outer_arg_decl_macro__ __declare_static_bit_vector(__imm, 8);\
bit_vector_assign_uint64(0, &__imm, imm);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__sbir_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__sll_i_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__sll_i_assign_stmt_364_c_macro_ __declare_static_bit_vector(SHL_u32_u32_363,32);\
bit_vector_shift_left(&(rs1_data), &(rs2_data), &(SHL_u32_u32_363));\
bit_vector_cast_to_bit_vector(0, &(output), &(SHL_u32_u32_363));\
;

#define simple_switch__sll_i_call_stmt_369_c_macro_ __declare_static_bit_vector(konst_365,1);\
bit_vector_clear(&konst_365);\
bit_vector_clear(&konst_365);\
_simple_switch_accessreg_( &(konst_365),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__sll_i_assign_stmt_374_c_macro_ __declare_static_bit_vector(konst_372,8);\
bit_vector_clear(&konst_372);\
konst_372.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_373,8);\
bit_vector_clear(&konst_372);\
konst_372.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_372), &(ADD_u8_u8_373));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_373));\
;

#define simple_switch__sll_i_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__sll_i_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__sll_i_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__sra_i_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(no_of_shifts,32);\
__declare_static_bit_vector(sraa,32);\
__declare_static_bit_vector(sraaa,32);\
__declare_static_bit_vector(new,32);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__sra_i_assign_stmt_386_c_macro_ __declare_static_bit_vector(LSHR_u32_u32_385,32);\
bit_vector_shift_right(0, &(rs1_data), &(rs2_data), &(LSHR_u32_u32_385));\
bit_vector_cast_to_bit_vector(0, &(right_shift), &(LSHR_u32_u32_385));\
;

#define simple_switch__sra_i_assign_stmt_401_c_macro_ __declare_static_bit_vector(konst_389,32);\
bit_vector_clear(&konst_389);\
konst_389.val.byte_array[0] = 33;\
__declare_static_bit_vector(ULT_u32_u1_390,1);\
__declare_static_bit_vector(konst_391,32);\
bit_vector_clear(&konst_391);\
konst_391.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_392,32);\
bit_vector_clear(&konst_392);\
__declare_static_bit_vector(MUX_393,32);\
__declare_static_bit_vector(konst_395,32);\
bit_vector_clear(&konst_395);\
konst_395.val.byte_array[0] = 32;\
__declare_static_bit_vector(UGT_u32_u1_396,1);\
__declare_static_bit_vector(konst_397,32);\
bit_vector_clear(&konst_397);\
__declare_static_bit_vector(konst_398,32);\
bit_vector_clear(&konst_398);\
__declare_static_bit_vector(MUX_399,32);\
__declare_static_bit_vector(OR_u32_u32_400,32);\
bit_vector_clear(&konst_389);\
konst_389.val.byte_array[0] = 33;\
bit_vector_less(0, &(rs2_data), &(konst_389), &(ULT_u32_u1_390));\
if (has_undefined_bit(&ULT_u32_u1_390)) {fprintf(stderr, "Error: variable ULT_u32_u1_390 has undefined value (%s) at test point.\n", to_string(&ULT_u32_u1_390));assert(0);} \
bit_vector_clear(&konst_391);\
konst_391.val.byte_array[0] = 1;\
bit_vector_clear(&konst_392);\
if(bit_vector_to_uint64(0, &ULT_u32_u1_390)){\
bit_vector_cast_to_bit_vector(0, &(MUX_393), &(konst_391));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_393), &(konst_392));\
}\
bit_vector_clear(&konst_395);\
konst_395.val.byte_array[0] = 32;\
bit_vector_greater(0, &(rs2_data), &(konst_395), &(UGT_u32_u1_396));\
if (has_undefined_bit(&UGT_u32_u1_396)) {fprintf(stderr, "Error: variable UGT_u32_u1_396 has undefined value (%s) at test point.\n", to_string(&UGT_u32_u1_396));assert(0);} \
bit_vector_clear(&konst_397);\
bit_vector_clear(&konst_398);\
if(bit_vector_to_uint64(0, &UGT_u32_u1_396)){\
bit_vector_cast_to_bit_vector(0, &(MUX_399), &(konst_397));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_399), &(konst_398));\
}\
bit_vector_or(&(MUX_393), &(MUX_399), &(OR_u32_u32_400));\
bit_vector_cast_to_bit_vector(0, &(no_of_shifts), &(OR_u32_u32_400));\
;

#define simple_switch__sra_i_assign_stmt_406_c_macro_ __declare_static_bit_vector(AND_u32_u32_405,32);\
bit_vector_and(&(right_shift), &(no_of_shifts), &(AND_u32_u32_405));\
bit_vector_cast_to_bit_vector(0, &(sraa), &(AND_u32_u32_405));\
;

#define simple_switch__sra_i_assign_stmt_412_c_macro_ __declare_static_bit_vector(NOT_u32_u32_410,32);\
__declare_static_bit_vector(AND_u32_u32_411,32);\
bit_vector_not( &(no_of_shifts), &(NOT_u32_u32_410));\
bit_vector_and(&(right_shift), &(NOT_u32_u32_410), &(AND_u32_u32_411));\
bit_vector_cast_to_bit_vector(0, &(sraaa), &(AND_u32_u32_411));\
;

#define simple_switch__sra_i_assign_stmt_420_c_macro_ if (has_undefined_bit(&sraa)) {fprintf(stderr, "Error: variable sraa has undefined value (%s) at test point.\n", to_string(&sraa));assert(0);} \
__declare_static_bit_vector(konst_415,32);\
bit_vector_clear(&konst_415);\
konst_415.val.byte_array[0] = 255;\
konst_415.val.byte_array[1] = 255;\
konst_415.val.byte_array[2] = 255;\
konst_415.val.byte_array[3] = 255;\
__declare_static_bit_vector(konst_416,32);\
bit_vector_clear(&konst_416);\
konst_416.val.byte_array[0] = 32;\
__declare_static_bit_vector(SUB_u32_u32_418,32);\
__declare_static_bit_vector(SHL_u32_u32_419,32);\
if (bit_vector_to_uint64(0, &sraa)) {\
bit_vector_clear(&konst_415);\
konst_415.val.byte_array[0] = 255;\
konst_415.val.byte_array[1] = 255;\
konst_415.val.byte_array[2] = 255;\
konst_415.val.byte_array[3] = 255;\
bit_vector_clear(&konst_416);\
konst_416.val.byte_array[0] = 32;\
bit_vector_minus( &(konst_416), &(rs1_data), &(SUB_u32_u32_418));\
bit_vector_shift_left(&(konst_415), &(SUB_u32_u32_418), &(SHL_u32_u32_419));\
bit_vector_cast_to_bit_vector(0, &(new), &(SHL_u32_u32_419));\
}
;

#define simple_switch__sra_i_assign_stmt_426_c_macro_ if (has_undefined_bit(&sraa)) {fprintf(stderr, "Error: variable sraa has undefined value (%s) at test point.\n", to_string(&sraa));assert(0);} \
__declare_static_bit_vector(OR_u32_u32_425,32);\
if (bit_vector_to_uint64(0, &sraa)) {\
bit_vector_or(&(right_shift), &(new), &(OR_u32_u32_425));\
bit_vector_cast_to_bit_vector(0, &(right_shift), &(OR_u32_u32_425));\
}
;

#define simple_switch__sra_i_assign_stmt_430_c_macro_ if (has_undefined_bit(&sraaa)) {fprintf(stderr, "Error: variable sraaa has undefined value (%s) at test point.\n", to_string(&sraaa));assert(0);} \
__declare_static_bit_vector(konst_429,32);\
bit_vector_clear(&konst_429);\
konst_429.val.byte_array[0] = 255;\
konst_429.val.byte_array[1] = 255;\
konst_429.val.byte_array[2] = 255;\
konst_429.val.byte_array[3] = 255;\
if (bit_vector_to_uint64(0, &sraaa)) {\
bit_vector_clear(&konst_429);\
konst_429.val.byte_array[0] = 255;\
konst_429.val.byte_array[1] = 255;\
konst_429.val.byte_array[2] = 255;\
konst_429.val.byte_array[3] = 255;\
bit_vector_cast_to_bit_vector(0, &(right_shift), &(konst_429));\
}
;

#define simple_switch__sra_i_assign_stmt_433_c_macro_ bit_vector_cast_to_bit_vector(0, &(output), &(right_shift));\
;

#define simple_switch__sra_i_call_stmt_438_c_macro_ __declare_static_bit_vector(konst_434,1);\
bit_vector_clear(&konst_434);\
bit_vector_clear(&konst_434);\
_simple_switch_accessreg_( &(konst_434),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__sra_i_assign_stmt_443_c_macro_ __declare_static_bit_vector(konst_441,8);\
bit_vector_clear(&konst_441);\
konst_441.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_442,8);\
bit_vector_clear(&konst_441);\
konst_441.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_441), &(ADD_u8_u8_442));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_442));\
;

#define simple_switch__sra_i_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__sra_i_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__sra_i_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__srl_i_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__srl_i_assign_stmt_455_c_macro_ __declare_static_bit_vector(LSHR_u32_u32_454,32);\
bit_vector_shift_right(0, &(rs1_data), &(rs2_data), &(LSHR_u32_u32_454));\
bit_vector_cast_to_bit_vector(0, &(output), &(LSHR_u32_u32_454));\
;

#define simple_switch__srl_i_call_stmt_460_c_macro_ __declare_static_bit_vector(konst_456,1);\
bit_vector_clear(&konst_456);\
bit_vector_clear(&konst_456);\
_simple_switch_accessreg_( &(konst_456),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__srl_i_assign_stmt_465_c_macro_ __declare_static_bit_vector(konst_463,8);\
bit_vector_clear(&konst_463);\
konst_463.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_464,8);\
bit_vector_clear(&konst_463);\
konst_463.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_463), &(ADD_u8_u8_464));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_464));\
;

#define simple_switch__srl_i_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__srl_i_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__srl_i_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__store_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(addr,8);\
__declare_static_bit_vector(dummy1,32);\

#define simple_switch__store_assign_stmt_475_c_macro_ __declare_static_bit_vector(slice_474,8);\
bit_vector_slice(&(rs1_data), &(slice_474), 0);\
bit_vector_cast_to_bit_vector(0, &(addr), &(slice_474));\
;

#define simple_switch__store_call_stmt_480_c_macro_ __declare_static_bit_vector(konst_476,1);\
bit_vector_clear(&konst_476);\
bit_vector_clear(&konst_476);\
_simple_switch_accessMem_( &(konst_476),  &(addr),  &(rs2_data), &(dummy1));\
;

#define simple_switch__store_assign_stmt_485_c_macro_ __declare_static_bit_vector(konst_483,8);\
bit_vector_clear(&konst_483);\
konst_483.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_484,8);\
bit_vector_clear(&konst_483);\
konst_483.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_483), &(ADD_u8_u8_484));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_484));\
;

#define simple_switch__store_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__store_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__store_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__sub_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__sub_assign_stmt_497_c_macro_ __declare_static_bit_vector(SUB_u32_u32_496,32);\
bit_vector_minus( &(rs1_data), &(rs2_data), &(SUB_u32_u32_496));\
bit_vector_cast_to_bit_vector(0, &(output), &(SUB_u32_u32_496));\
;

#define simple_switch__sub_call_stmt_502_c_macro_ __declare_static_bit_vector(konst_498,1);\
bit_vector_clear(&konst_498);\
bit_vector_clear(&konst_498);\
_simple_switch_accessreg_( &(konst_498),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__sub_assign_stmt_507_c_macro_ __declare_static_bit_vector(konst_505,8);\
bit_vector_clear(&konst_505);\
konst_505.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_506,8);\
bit_vector_clear(&konst_505);\
konst_505.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_505), &(ADD_u8_u8_506));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_506));\
;

#define simple_switch__sub_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__sub_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__sub_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__try_inner_inarg_prep_macro__ __declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(inst,32);\
bit_vector_cast_to_bit_vector(0, &(inst), &((*__pinst)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(op,8);\
__declare_static_bit_vector(rs1,8);\
__declare_static_bit_vector(rs2,8);\
__declare_static_bit_vector(rd,8);\
__declare_static_bit_vector(halt1,1);\
__declare_static_bit_vector(sbir1,1);\
__declare_static_bit_vector(load1,1);\
__declare_static_bit_vector(store1,1);\
__declare_static_bit_vector(and1,1);\
__declare_static_bit_vector(or1,1);\
__declare_static_bit_vector(xnor1,1);\
__declare_static_bit_vector(xor1,1);\
__declare_static_bit_vector(add1,1);\
__declare_static_bit_vector(sub1,1);\
__declare_static_bit_vector(sll1,1);\
__declare_static_bit_vector(srl1,1);\
__declare_static_bit_vector(sra1,1);\
__declare_static_bit_vector(bz1,1);\
__declare_static_bit_vector(bn1,1);\
__declare_static_bit_vector(call1,1);\
__declare_static_bit_vector(jmp1,1);\
__declare_static_bit_vector(cmp1,1);\
__declare_static_bit_vector(rs1_data,32);\
__declare_static_bit_vector(rs2_data,32);\
__declare_static_bit_vector(next_pc2,8);\
__declare_static_bit_vector(next_pc3,8);\
__declare_static_bit_vector(next_pc4,8);\
__declare_static_bit_vector(next_pc5,8);\
__declare_static_bit_vector(next_pc6,8);\
__declare_static_bit_vector(next_pc7,8);\
__declare_static_bit_vector(next_pc8,8);\
__declare_static_bit_vector(next_pc9,8);\
__declare_static_bit_vector(next_pc10,8);\
__declare_static_bit_vector(next_pc11,8);\
__declare_static_bit_vector(next_pc12,8);\
__declare_static_bit_vector(next_pc13,8);\
__declare_static_bit_vector(next_pc14,8);\
__declare_static_bit_vector(next_pc15,8);\
__declare_static_bit_vector(next_pc16,8);\
__declare_static_bit_vector(next_pc17,8);\
__declare_static_bit_vector(next_pc18,8);\

#define simple_switch__try_assign_stmt_560_c_macro_ __declare_static_bit_vector(slice_559,8);\
bit_vector_slice(&(inst), &(slice_559), 24);\
bit_vector_cast_to_bit_vector(0, &(op), &(slice_559));\
;

#define simple_switch__try_assign_stmt_564_c_macro_ __declare_static_bit_vector(slice_563,8);\
bit_vector_slice(&(inst), &(slice_563), 16);\
bit_vector_cast_to_bit_vector(0, &(rs1), &(slice_563));\
;

#define simple_switch__try_assign_stmt_568_c_macro_ __declare_static_bit_vector(slice_567,8);\
bit_vector_slice(&(inst), &(slice_567), 8);\
bit_vector_cast_to_bit_vector(0, &(rs2), &(slice_567));\
;

#define simple_switch__try_assign_stmt_572_c_macro_ __declare_static_bit_vector(slice_571,8);\
bit_vector_slice(&(inst), &(slice_571), 0);\
bit_vector_cast_to_bit_vector(0, &(rd), &(slice_571));\
;

#define simple_switch__try_assign_stmt_577_c_macro_ __declare_static_bit_vector(konst_575,8);\
bit_vector_clear(&konst_575);\
konst_575.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_576,1);\
bit_vector_clear(&konst_575);\
konst_575.val.byte_array[0] = 1;\
bit_vector_equal(0, &(op), &(konst_575), &(EQ_u8_u1_576));\
bit_vector_cast_to_bit_vector(0, &(halt1), &(EQ_u8_u1_576));\
;

#define simple_switch__try_assign_stmt_582_c_macro_ __declare_static_bit_vector(konst_580,8);\
bit_vector_clear(&konst_580);\
konst_580.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_581,1);\
bit_vector_clear(&konst_580);\
konst_580.val.byte_array[0] = 2;\
bit_vector_equal(0, &(op), &(konst_580), &(EQ_u8_u1_581));\
bit_vector_cast_to_bit_vector(0, &(sbir1), &(EQ_u8_u1_581));\
;

#define simple_switch__try_assign_stmt_587_c_macro_ __declare_static_bit_vector(konst_585,8);\
bit_vector_clear(&konst_585);\
konst_585.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_586,1);\
bit_vector_clear(&konst_585);\
konst_585.val.byte_array[0] = 3;\
bit_vector_equal(0, &(op), &(konst_585), &(EQ_u8_u1_586));\
bit_vector_cast_to_bit_vector(0, &(load1), &(EQ_u8_u1_586));\
;

#define simple_switch__try_assign_stmt_592_c_macro_ __declare_static_bit_vector(konst_590,8);\
bit_vector_clear(&konst_590);\
konst_590.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_591,1);\
bit_vector_clear(&konst_590);\
konst_590.val.byte_array[0] = 4;\
bit_vector_equal(0, &(op), &(konst_590), &(EQ_u8_u1_591));\
bit_vector_cast_to_bit_vector(0, &(store1), &(EQ_u8_u1_591));\
;

#define simple_switch__try_assign_stmt_597_c_macro_ __declare_static_bit_vector(konst_595,8);\
bit_vector_clear(&konst_595);\
konst_595.val.byte_array[0] = 5;\
__declare_static_bit_vector(EQ_u8_u1_596,1);\
bit_vector_clear(&konst_595);\
konst_595.val.byte_array[0] = 5;\
bit_vector_equal(0, &(op), &(konst_595), &(EQ_u8_u1_596));\
bit_vector_cast_to_bit_vector(0, &(and1), &(EQ_u8_u1_596));\
;

#define simple_switch__try_assign_stmt_602_c_macro_ __declare_static_bit_vector(konst_600,8);\
bit_vector_clear(&konst_600);\
konst_600.val.byte_array[0] = 6;\
__declare_static_bit_vector(EQ_u8_u1_601,1);\
bit_vector_clear(&konst_600);\
konst_600.val.byte_array[0] = 6;\
bit_vector_equal(0, &(op), &(konst_600), &(EQ_u8_u1_601));\
bit_vector_cast_to_bit_vector(0, &(or1), &(EQ_u8_u1_601));\
;

#define simple_switch__try_assign_stmt_607_c_macro_ __declare_static_bit_vector(konst_605,8);\
bit_vector_clear(&konst_605);\
konst_605.val.byte_array[0] = 7;\
__declare_static_bit_vector(EQ_u8_u1_606,1);\
bit_vector_clear(&konst_605);\
konst_605.val.byte_array[0] = 7;\
bit_vector_equal(0, &(op), &(konst_605), &(EQ_u8_u1_606));\
bit_vector_cast_to_bit_vector(0, &(xnor1), &(EQ_u8_u1_606));\
;

#define simple_switch__try_assign_stmt_612_c_macro_ __declare_static_bit_vector(konst_610,8);\
bit_vector_clear(&konst_610);\
konst_610.val.byte_array[0] = 8;\
__declare_static_bit_vector(EQ_u8_u1_611,1);\
bit_vector_clear(&konst_610);\
konst_610.val.byte_array[0] = 8;\
bit_vector_equal(0, &(op), &(konst_610), &(EQ_u8_u1_611));\
bit_vector_cast_to_bit_vector(0, &(xor1), &(EQ_u8_u1_611));\
;

#define simple_switch__try_assign_stmt_617_c_macro_ __declare_static_bit_vector(konst_615,8);\
bit_vector_clear(&konst_615);\
konst_615.val.byte_array[0] = 9;\
__declare_static_bit_vector(EQ_u8_u1_616,1);\
bit_vector_clear(&konst_615);\
konst_615.val.byte_array[0] = 9;\
bit_vector_equal(0, &(op), &(konst_615), &(EQ_u8_u1_616));\
bit_vector_cast_to_bit_vector(0, &(add1), &(EQ_u8_u1_616));\
;

#define simple_switch__try_assign_stmt_622_c_macro_ __declare_static_bit_vector(konst_620,8);\
bit_vector_clear(&konst_620);\
konst_620.val.byte_array[0] = 10;\
__declare_static_bit_vector(EQ_u8_u1_621,1);\
bit_vector_clear(&konst_620);\
konst_620.val.byte_array[0] = 10;\
bit_vector_equal(0, &(op), &(konst_620), &(EQ_u8_u1_621));\
bit_vector_cast_to_bit_vector(0, &(sub1), &(EQ_u8_u1_621));\
;

#define simple_switch__try_assign_stmt_627_c_macro_ __declare_static_bit_vector(konst_625,8);\
bit_vector_clear(&konst_625);\
konst_625.val.byte_array[0] = 11;\
__declare_static_bit_vector(EQ_u8_u1_626,1);\
bit_vector_clear(&konst_625);\
konst_625.val.byte_array[0] = 11;\
bit_vector_equal(0, &(op), &(konst_625), &(EQ_u8_u1_626));\
bit_vector_cast_to_bit_vector(0, &(sll1), &(EQ_u8_u1_626));\
;

#define simple_switch__try_assign_stmt_632_c_macro_ __declare_static_bit_vector(konst_630,8);\
bit_vector_clear(&konst_630);\
konst_630.val.byte_array[0] = 12;\
__declare_static_bit_vector(EQ_u8_u1_631,1);\
bit_vector_clear(&konst_630);\
konst_630.val.byte_array[0] = 12;\
bit_vector_equal(0, &(op), &(konst_630), &(EQ_u8_u1_631));\
bit_vector_cast_to_bit_vector(0, &(srl1), &(EQ_u8_u1_631));\
;

#define simple_switch__try_assign_stmt_637_c_macro_ __declare_static_bit_vector(konst_635,8);\
bit_vector_clear(&konst_635);\
konst_635.val.byte_array[0] = 13;\
__declare_static_bit_vector(EQ_u8_u1_636,1);\
bit_vector_clear(&konst_635);\
konst_635.val.byte_array[0] = 13;\
bit_vector_equal(0, &(op), &(konst_635), &(EQ_u8_u1_636));\
bit_vector_cast_to_bit_vector(0, &(sra1), &(EQ_u8_u1_636));\
;

#define simple_switch__try_assign_stmt_642_c_macro_ __declare_static_bit_vector(konst_640,8);\
bit_vector_clear(&konst_640);\
konst_640.val.byte_array[0] = 14;\
__declare_static_bit_vector(EQ_u8_u1_641,1);\
bit_vector_clear(&konst_640);\
konst_640.val.byte_array[0] = 14;\
bit_vector_equal(0, &(op), &(konst_640), &(EQ_u8_u1_641));\
bit_vector_cast_to_bit_vector(0, &(bz1), &(EQ_u8_u1_641));\
;

#define simple_switch__try_assign_stmt_647_c_macro_ __declare_static_bit_vector(konst_645,8);\
bit_vector_clear(&konst_645);\
konst_645.val.byte_array[0] = 15;\
__declare_static_bit_vector(EQ_u8_u1_646,1);\
bit_vector_clear(&konst_645);\
konst_645.val.byte_array[0] = 15;\
bit_vector_equal(0, &(op), &(konst_645), &(EQ_u8_u1_646));\
bit_vector_cast_to_bit_vector(0, &(bn1), &(EQ_u8_u1_646));\
;

#define simple_switch__try_assign_stmt_652_c_macro_ __declare_static_bit_vector(konst_650,8);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 16;\
__declare_static_bit_vector(EQ_u8_u1_651,1);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 16;\
bit_vector_equal(0, &(op), &(konst_650), &(EQ_u8_u1_651));\
bit_vector_cast_to_bit_vector(0, &(call1), &(EQ_u8_u1_651));\
;

#define simple_switch__try_assign_stmt_657_c_macro_ __declare_static_bit_vector(konst_655,8);\
bit_vector_clear(&konst_655);\
konst_655.val.byte_array[0] = 17;\
__declare_static_bit_vector(EQ_u8_u1_656,1);\
bit_vector_clear(&konst_655);\
konst_655.val.byte_array[0] = 17;\
bit_vector_equal(0, &(op), &(konst_655), &(EQ_u8_u1_656));\
bit_vector_cast_to_bit_vector(0, &(jmp1), &(EQ_u8_u1_656));\
;

#define simple_switch__try_assign_stmt_662_c_macro_ __declare_static_bit_vector(konst_660,8);\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 18;\
__declare_static_bit_vector(EQ_u8_u1_661,1);\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 18;\
bit_vector_equal(0, &(op), &(konst_660), &(EQ_u8_u1_661));\
bit_vector_cast_to_bit_vector(0, &(cmp1), &(EQ_u8_u1_661));\
;

#define simple_switch__try_call_stmt_667_c_macro_ __declare_static_bit_vector(konst_663,1);\
bit_vector_clear(&konst_663);\
konst_663.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_665,32);\
bit_vector_clear(&konst_665);\
bit_vector_clear(&konst_663);\
konst_663.val.byte_array[0] = 1;\
bit_vector_clear(&konst_665);\
_simple_switch_accessreg_( &(konst_663),  &(rs1),  &(konst_665), &(rs1_data));\
;

#define simple_switch__try_call_stmt_672_c_macro_ __declare_static_bit_vector(konst_668,1);\
bit_vector_clear(&konst_668);\
konst_668.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_670,32);\
bit_vector_clear(&konst_670);\
bit_vector_clear(&konst_668);\
konst_668.val.byte_array[0] = 1;\
bit_vector_clear(&konst_670);\
_simple_switch_accessreg_( &(konst_668),  &(rs2),  &(konst_670), &(rs2_data));\
;

#define simple_switch__try_call_stmt_676_c_macro_ if (has_undefined_bit(&halt1)) {fprintf(stderr, "Error: variable halt1 has undefined value (%s) at test point.\n", to_string(&halt1));assert(0);} \
if (bit_vector_to_uint64(0, &halt1)) {\
_simple_switch_halt_( &(pc), &(next_pc1));\
}\
;

#define simple_switch__try_call_stmt_682_c_macro_ if (has_undefined_bit(&sbir1)) {fprintf(stderr, "Error: variable sbir1 has undefined value (%s) at test point.\n", to_string(&sbir1));assert(0);} \
if (bit_vector_to_uint64(0, &sbir1)) {\
_simple_switch_sbir_( &(rs1),  &(rd),  &(pc), &(next_pc2));\
}\
;

#define simple_switch__try_call_stmt_688_c_macro_ if (has_undefined_bit(&load1)) {fprintf(stderr, "Error: variable load1 has undefined value (%s) at test point.\n", to_string(&load1));assert(0);} \
if (bit_vector_to_uint64(0, &load1)) {\
_simple_switch_load_( &(rs1_data),  &(rd),  &(pc), &(next_pc3));\
}\
;

#define simple_switch__try_call_stmt_694_c_macro_ if (has_undefined_bit(&store1)) {fprintf(stderr, "Error: variable store1 has undefined value (%s) at test point.\n", to_string(&store1));assert(0);} \
if (bit_vector_to_uint64(0, &store1)) {\
_simple_switch_store_( &(rs1_data),  &(rs2_data),  &(pc), &(next_pc4));\
}\
;

#define simple_switch__try_call_stmt_701_c_macro_ if (has_undefined_bit(&and1)) {fprintf(stderr, "Error: variable and1 has undefined value (%s) at test point.\n", to_string(&and1));assert(0);} \
if (bit_vector_to_uint64(0, &and1)) {\
_simple_switch_and_i_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc5));\
}\
;

#define simple_switch__try_call_stmt_708_c_macro_ if (has_undefined_bit(&or1)) {fprintf(stderr, "Error: variable or1 has undefined value (%s) at test point.\n", to_string(&or1));assert(0);} \
if (bit_vector_to_uint64(0, &or1)) {\
_simple_switch_or_i_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc6));\
}\
;

#define simple_switch__try_call_stmt_715_c_macro_ if (has_undefined_bit(&xnor1)) {fprintf(stderr, "Error: variable xnor1 has undefined value (%s) at test point.\n", to_string(&xnor1));assert(0);} \
if (bit_vector_to_uint64(0, &xnor1)) {\
_simple_switch_xnor_i_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc7));\
}\
;

#define simple_switch__try_call_stmt_722_c_macro_ if (has_undefined_bit(&xor1)) {fprintf(stderr, "Error: variable xor1 has undefined value (%s) at test point.\n", to_string(&xor1));assert(0);} \
if (bit_vector_to_uint64(0, &xor1)) {\
_simple_switch_xor_i_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc8));\
}\
;

#define simple_switch__try_call_stmt_729_c_macro_ if (has_undefined_bit(&add1)) {fprintf(stderr, "Error: variable add1 has undefined value (%s) at test point.\n", to_string(&add1));assert(0);} \
if (bit_vector_to_uint64(0, &add1)) {\
_simple_switch_add_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc9));\
}\
;

#define simple_switch__try_call_stmt_736_c_macro_ if (has_undefined_bit(&sub1)) {fprintf(stderr, "Error: variable sub1 has undefined value (%s) at test point.\n", to_string(&sub1));assert(0);} \
if (bit_vector_to_uint64(0, &sub1)) {\
_simple_switch_sub_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc10));\
}\
;

#define simple_switch__try_call_stmt_743_c_macro_ if (has_undefined_bit(&sll1)) {fprintf(stderr, "Error: variable sll1 has undefined value (%s) at test point.\n", to_string(&sll1));assert(0);} \
if (bit_vector_to_uint64(0, &sll1)) {\
_simple_switch_sll_i_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc11));\
}\
;

#define simple_switch__try_call_stmt_750_c_macro_ if (has_undefined_bit(&srl1)) {fprintf(stderr, "Error: variable srl1 has undefined value (%s) at test point.\n", to_string(&srl1));assert(0);} \
if (bit_vector_to_uint64(0, &srl1)) {\
_simple_switch_srl_i_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc12));\
}\
;

#define simple_switch__try_call_stmt_757_c_macro_ if (has_undefined_bit(&sra1)) {fprintf(stderr, "Error: variable sra1 has undefined value (%s) at test point.\n", to_string(&sra1));assert(0);} \
if (bit_vector_to_uint64(0, &sra1)) {\
_simple_switch_sra_i_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc13));\
}\
;

#define simple_switch__try_call_stmt_764_c_macro_ if (has_undefined_bit(&bz1)) {fprintf(stderr, "Error: variable bz1 has undefined value (%s) at test point.\n", to_string(&bz1));assert(0);} \
if (bit_vector_to_uint64(0, &bz1)) {\
_simple_switch_bz_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc14));\
}\
;

#define simple_switch__try_call_stmt_771_c_macro_ if (has_undefined_bit(&bn1)) {fprintf(stderr, "Error: variable bn1 has undefined value (%s) at test point.\n", to_string(&bn1));assert(0);} \
if (bit_vector_to_uint64(0, &bn1)) {\
_simple_switch_bn_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc15));\
}\
;

#define simple_switch__try_call_stmt_778_c_macro_ if (has_undefined_bit(&call1)) {fprintf(stderr, "Error: variable call1 has undefined value (%s) at test point.\n", to_string(&call1));assert(0);} \
if (bit_vector_to_uint64(0, &call1)) {\
_simple_switch_call_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc16));\
}\
;

#define simple_switch__try_call_stmt_783_c_macro_ if (has_undefined_bit(&jmp1)) {fprintf(stderr, "Error: variable jmp1 has undefined value (%s) at test point.\n", to_string(&jmp1));assert(0);} \
if (bit_vector_to_uint64(0, &jmp1)) {\
_simple_switch_jmp_( &(rs1_data),  &(pc), &(next_pc17));\
}\
;

#define simple_switch__try_call_stmt_790_c_macro_ if (has_undefined_bit(&cmp1)) {fprintf(stderr, "Error: variable cmp1 has undefined value (%s) at test point.\n", to_string(&cmp1));assert(0);} \
if (bit_vector_to_uint64(0, &cmp1)) {\
_simple_switch_cmp_( &(rs1_data),  &(rs2_data),  &(rd),  &(pc), &(next_pc18));\
}\
;

#define simple_switch__try_assign_stmt_884_c_macro_ __declare_static_bit_vector(konst_793,8);\
bit_vector_clear(&konst_793);\
konst_793.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_794,1);\
__declare_static_bit_vector(konst_797,8);\
bit_vector_clear(&konst_797);\
konst_797.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_798,1);\
__declare_static_bit_vector(konst_801,8);\
bit_vector_clear(&konst_801);\
konst_801.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_802,1);\
__declare_static_bit_vector(konst_805,8);\
bit_vector_clear(&konst_805);\
konst_805.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_806,1);\
__declare_static_bit_vector(konst_809,8);\
bit_vector_clear(&konst_809);\
konst_809.val.byte_array[0] = 5;\
__declare_static_bit_vector(EQ_u8_u1_810,1);\
__declare_static_bit_vector(konst_813,8);\
bit_vector_clear(&konst_813);\
konst_813.val.byte_array[0] = 6;\
__declare_static_bit_vector(EQ_u8_u1_814,1);\
__declare_static_bit_vector(konst_817,8);\
bit_vector_clear(&konst_817);\
konst_817.val.byte_array[0] = 7;\
__declare_static_bit_vector(EQ_u8_u1_818,1);\
__declare_static_bit_vector(konst_821,8);\
bit_vector_clear(&konst_821);\
konst_821.val.byte_array[0] = 8;\
__declare_static_bit_vector(EQ_u8_u1_822,1);\
__declare_static_bit_vector(konst_825,8);\
bit_vector_clear(&konst_825);\
konst_825.val.byte_array[0] = 9;\
__declare_static_bit_vector(EQ_u8_u1_826,1);\
__declare_static_bit_vector(konst_829,8);\
bit_vector_clear(&konst_829);\
konst_829.val.byte_array[0] = 10;\
__declare_static_bit_vector(EQ_u8_u1_830,1);\
__declare_static_bit_vector(konst_833,8);\
bit_vector_clear(&konst_833);\
konst_833.val.byte_array[0] = 11;\
__declare_static_bit_vector(EQ_u8_u1_834,1);\
__declare_static_bit_vector(konst_837,8);\
bit_vector_clear(&konst_837);\
konst_837.val.byte_array[0] = 12;\
__declare_static_bit_vector(EQ_u8_u1_838,1);\
__declare_static_bit_vector(konst_841,8);\
bit_vector_clear(&konst_841);\
konst_841.val.byte_array[0] = 13;\
__declare_static_bit_vector(EQ_u8_u1_842,1);\
__declare_static_bit_vector(konst_845,8);\
bit_vector_clear(&konst_845);\
konst_845.val.byte_array[0] = 14;\
__declare_static_bit_vector(EQ_u8_u1_846,1);\
__declare_static_bit_vector(konst_849,8);\
bit_vector_clear(&konst_849);\
konst_849.val.byte_array[0] = 15;\
__declare_static_bit_vector(EQ_u8_u1_850,1);\
__declare_static_bit_vector(konst_853,8);\
bit_vector_clear(&konst_853);\
konst_853.val.byte_array[0] = 16;\
__declare_static_bit_vector(EQ_u8_u1_854,1);\
__declare_static_bit_vector(konst_857,8);\
bit_vector_clear(&konst_857);\
konst_857.val.byte_array[0] = 17;\
__declare_static_bit_vector(EQ_u8_u1_858,1);\
__declare_static_bit_vector(konst_861,8);\
bit_vector_clear(&konst_861);\
konst_861.val.byte_array[0] = 18;\
__declare_static_bit_vector(EQ_u8_u1_862,1);\
__declare_static_bit_vector(konst_864,8);\
bit_vector_clear(&konst_864);\
__declare_static_bit_vector(type_cast_865,8);\
bit_vector_clear(&type_cast_865);\
__declare_static_bit_vector(MUX_866,8);\
__declare_static_bit_vector(MUX_867,8);\
__declare_static_bit_vector(MUX_868,8);\
__declare_static_bit_vector(MUX_869,8);\
__declare_static_bit_vector(MUX_870,8);\
__declare_static_bit_vector(MUX_871,8);\
__declare_static_bit_vector(MUX_872,8);\
__declare_static_bit_vector(MUX_873,8);\
__declare_static_bit_vector(MUX_874,8);\
__declare_static_bit_vector(MUX_875,8);\
__declare_static_bit_vector(MUX_876,8);\
__declare_static_bit_vector(MUX_877,8);\
__declare_static_bit_vector(MUX_878,8);\
__declare_static_bit_vector(MUX_879,8);\
__declare_static_bit_vector(MUX_880,8);\
__declare_static_bit_vector(MUX_881,8);\
__declare_static_bit_vector(MUX_882,8);\
__declare_static_bit_vector(MUX_883,8);\
bit_vector_clear(&konst_793);\
konst_793.val.byte_array[0] = 1;\
bit_vector_equal(0, &(op), &(konst_793), &(EQ_u8_u1_794));\
if (has_undefined_bit(&EQ_u8_u1_794)) {fprintf(stderr, "Error: variable EQ_u8_u1_794 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_794));assert(0);} \
bit_vector_clear(&konst_797);\
konst_797.val.byte_array[0] = 2;\
bit_vector_equal(0, &(op), &(konst_797), &(EQ_u8_u1_798));\
if (has_undefined_bit(&EQ_u8_u1_798)) {fprintf(stderr, "Error: variable EQ_u8_u1_798 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_798));assert(0);} \
bit_vector_clear(&konst_801);\
konst_801.val.byte_array[0] = 3;\
bit_vector_equal(0, &(op), &(konst_801), &(EQ_u8_u1_802));\
if (has_undefined_bit(&EQ_u8_u1_802)) {fprintf(stderr, "Error: variable EQ_u8_u1_802 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_802));assert(0);} \
bit_vector_clear(&konst_805);\
konst_805.val.byte_array[0] = 4;\
bit_vector_equal(0, &(op), &(konst_805), &(EQ_u8_u1_806));\
if (has_undefined_bit(&EQ_u8_u1_806)) {fprintf(stderr, "Error: variable EQ_u8_u1_806 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_806));assert(0);} \
bit_vector_clear(&konst_809);\
konst_809.val.byte_array[0] = 5;\
bit_vector_equal(0, &(op), &(konst_809), &(EQ_u8_u1_810));\
if (has_undefined_bit(&EQ_u8_u1_810)) {fprintf(stderr, "Error: variable EQ_u8_u1_810 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_810));assert(0);} \
bit_vector_clear(&konst_813);\
konst_813.val.byte_array[0] = 6;\
bit_vector_equal(0, &(op), &(konst_813), &(EQ_u8_u1_814));\
if (has_undefined_bit(&EQ_u8_u1_814)) {fprintf(stderr, "Error: variable EQ_u8_u1_814 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_814));assert(0);} \
bit_vector_clear(&konst_817);\
konst_817.val.byte_array[0] = 7;\
bit_vector_equal(0, &(op), &(konst_817), &(EQ_u8_u1_818));\
if (has_undefined_bit(&EQ_u8_u1_818)) {fprintf(stderr, "Error: variable EQ_u8_u1_818 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_818));assert(0);} \
bit_vector_clear(&konst_821);\
konst_821.val.byte_array[0] = 8;\
bit_vector_equal(0, &(op), &(konst_821), &(EQ_u8_u1_822));\
if (has_undefined_bit(&EQ_u8_u1_822)) {fprintf(stderr, "Error: variable EQ_u8_u1_822 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_822));assert(0);} \
bit_vector_clear(&konst_825);\
konst_825.val.byte_array[0] = 9;\
bit_vector_equal(0, &(op), &(konst_825), &(EQ_u8_u1_826));\
if (has_undefined_bit(&EQ_u8_u1_826)) {fprintf(stderr, "Error: variable EQ_u8_u1_826 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_826));assert(0);} \
bit_vector_clear(&konst_829);\
konst_829.val.byte_array[0] = 10;\
bit_vector_equal(0, &(op), &(konst_829), &(EQ_u8_u1_830));\
if (has_undefined_bit(&EQ_u8_u1_830)) {fprintf(stderr, "Error: variable EQ_u8_u1_830 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_830));assert(0);} \
bit_vector_clear(&konst_833);\
konst_833.val.byte_array[0] = 11;\
bit_vector_equal(0, &(op), &(konst_833), &(EQ_u8_u1_834));\
if (has_undefined_bit(&EQ_u8_u1_834)) {fprintf(stderr, "Error: variable EQ_u8_u1_834 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_834));assert(0);} \
bit_vector_clear(&konst_837);\
konst_837.val.byte_array[0] = 12;\
bit_vector_equal(0, &(op), &(konst_837), &(EQ_u8_u1_838));\
if (has_undefined_bit(&EQ_u8_u1_838)) {fprintf(stderr, "Error: variable EQ_u8_u1_838 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_838));assert(0);} \
bit_vector_clear(&konst_841);\
konst_841.val.byte_array[0] = 13;\
bit_vector_equal(0, &(op), &(konst_841), &(EQ_u8_u1_842));\
if (has_undefined_bit(&EQ_u8_u1_842)) {fprintf(stderr, "Error: variable EQ_u8_u1_842 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_842));assert(0);} \
bit_vector_clear(&konst_845);\
konst_845.val.byte_array[0] = 14;\
bit_vector_equal(0, &(op), &(konst_845), &(EQ_u8_u1_846));\
if (has_undefined_bit(&EQ_u8_u1_846)) {fprintf(stderr, "Error: variable EQ_u8_u1_846 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_846));assert(0);} \
bit_vector_clear(&konst_849);\
konst_849.val.byte_array[0] = 15;\
bit_vector_equal(0, &(op), &(konst_849), &(EQ_u8_u1_850));\
if (has_undefined_bit(&EQ_u8_u1_850)) {fprintf(stderr, "Error: variable EQ_u8_u1_850 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_850));assert(0);} \
bit_vector_clear(&konst_853);\
konst_853.val.byte_array[0] = 16;\
bit_vector_equal(0, &(op), &(konst_853), &(EQ_u8_u1_854));\
if (has_undefined_bit(&EQ_u8_u1_854)) {fprintf(stderr, "Error: variable EQ_u8_u1_854 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_854));assert(0);} \
bit_vector_clear(&konst_857);\
konst_857.val.byte_array[0] = 17;\
bit_vector_equal(0, &(op), &(konst_857), &(EQ_u8_u1_858));\
if (has_undefined_bit(&EQ_u8_u1_858)) {fprintf(stderr, "Error: variable EQ_u8_u1_858 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_858));assert(0);} \
bit_vector_clear(&konst_861);\
konst_861.val.byte_array[0] = 18;\
bit_vector_equal(0, &(op), &(konst_861), &(EQ_u8_u1_862));\
if (has_undefined_bit(&EQ_u8_u1_862)) {fprintf(stderr, "Error: variable EQ_u8_u1_862 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_862));assert(0);} \
bit_vector_clear(&konst_864);\
bit_vector_bitcast_to_bit_vector( &(type_cast_865), &(konst_864));\
if(bit_vector_to_uint64(0, &EQ_u8_u1_862)){\
bit_vector_cast_to_bit_vector(0, &(MUX_866), &(next_pc18));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_866), &(type_cast_865));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_858)){\
bit_vector_cast_to_bit_vector(0, &(MUX_867), &(next_pc17));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_867), &(MUX_866));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_854)){\
bit_vector_cast_to_bit_vector(0, &(MUX_868), &(next_pc16));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_868), &(MUX_867));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_850)){\
bit_vector_cast_to_bit_vector(0, &(MUX_869), &(next_pc15));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_869), &(MUX_868));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_846)){\
bit_vector_cast_to_bit_vector(0, &(MUX_870), &(next_pc14));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_870), &(MUX_869));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_842)){\
bit_vector_cast_to_bit_vector(0, &(MUX_871), &(next_pc13));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_871), &(MUX_870));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_838)){\
bit_vector_cast_to_bit_vector(0, &(MUX_872), &(next_pc12));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_872), &(MUX_871));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_834)){\
bit_vector_cast_to_bit_vector(0, &(MUX_873), &(next_pc11));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_873), &(MUX_872));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_830)){\
bit_vector_cast_to_bit_vector(0, &(MUX_874), &(next_pc10));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_874), &(MUX_873));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_826)){\
bit_vector_cast_to_bit_vector(0, &(MUX_875), &(next_pc9));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_875), &(MUX_874));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_822)){\
bit_vector_cast_to_bit_vector(0, &(MUX_876), &(next_pc8));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_876), &(MUX_875));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_818)){\
bit_vector_cast_to_bit_vector(0, &(MUX_877), &(next_pc7));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_877), &(MUX_876));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_814)){\
bit_vector_cast_to_bit_vector(0, &(MUX_878), &(next_pc6));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_878), &(MUX_877));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_810)){\
bit_vector_cast_to_bit_vector(0, &(MUX_879), &(next_pc5));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_879), &(MUX_878));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_806)){\
bit_vector_cast_to_bit_vector(0, &(MUX_880), &(next_pc4));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_880), &(MUX_879));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_802)){\
bit_vector_cast_to_bit_vector(0, &(MUX_881), &(next_pc3));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_881), &(MUX_880));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_798)){\
bit_vector_cast_to_bit_vector(0, &(MUX_882), &(next_pc2));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_882), &(MUX_881));\
}\
if(bit_vector_to_uint64(0, &EQ_u8_u1_794)){\
bit_vector_cast_to_bit_vector(0, &(MUX_883), &(next_pc1));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_883), &(MUX_882));\
}\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(MUX_883));\
;

#define simple_switch__try_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__try_outer_arg_decl_macro__ __declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__inst, 32);\
bit_vector_assign_uint64(0, &__inst, inst);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__try_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__try1_inner_inarg_prep_macro__ 
#define simple_switch__try1_call_stmt_887_c_macro_ _simple_switch_init_mem_();\
;

#define simple_switch__try1_call_stmt_888_c_macro_ _simple_switch_init_reg_();\
;

#define simple_switch__try1_branch_block_stmt_889_c_export_decl_macro_ __declare_static_bit_vector(pc,8);\
__declare_static_bit_vector(inst1,8);\
__declare_static_bit_vector(inst2,8);\
__declare_static_bit_vector(inst3,8);\
__declare_static_bit_vector(inst4,8);\
__declare_static_bit_vector(inst,32);\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(register_output,32);\
__declare_static_bit_vector(reg1,8);\
__declare_static_bit_vector(reg2,8);\
__declare_static_bit_vector(reg3,8);\
__declare_static_bit_vector(reg4,8);\


#define simple_switch__try1_merge_stmt_890_c_preamble_macro_ uint8_t merge_stmt_890_entry_flag;\
merge_stmt_890_entry_flag = 1;\
uint8_t loopback_889_flag = 0;\
goto merge_stmt_890_run;\
loopback_889: loopback_889_flag = 1;\
goto merge_stmt_890_run;\
merge_stmt_890_run: ;\

#define simple_switch__try1_phi_stmt_891_c_macro_ __declare_static_bit_vector(konst_893,8);\
bit_vector_clear(&konst_893);\
__declare_static_bit_vector(type_cast_894,8);\
bit_vector_clear(&type_cast_894);\
if(loopback_889_flag) {\
bit_vector_cast_to_bit_vector(0, &(pc), &(next_pc));\
}\
else {\
__declare_static_bit_vector(konst_893,8);\
bit_vector_clear(&konst_893);\
__declare_static_bit_vector(type_cast_894,8);\
bit_vector_clear(&type_cast_894);\
bit_vector_clear(&konst_893);\
bit_vector_bitcast_to_bit_vector( &(type_cast_894), &(konst_893));\
bit_vector_cast_to_bit_vector(0, &(pc), &(type_cast_894));\
}\
;
;

#define simple_switch__try1_merge_stmt_890_c_postamble_macro_ loopback_889_flag = 0;\
merge_stmt_890_entry_flag = 0;

#define simple_switch__try1_assign_stmt_899_c_macro_ __declare_static_bit_vector(RPIPE_write_mem_898,8);\
read_bit_vector_from_pipe("write_mem",&(RPIPE_write_mem_898));\
bit_vector_cast_to_bit_vector(0, &(inst1), &(RPIPE_write_mem_898));\
;

#define simple_switch__try1_assign_stmt_902_c_macro_ __declare_static_bit_vector(RPIPE_write_mem_901,8);\
read_bit_vector_from_pipe("write_mem",&(RPIPE_write_mem_901));\
bit_vector_cast_to_bit_vector(0, &(inst2), &(RPIPE_write_mem_901));\
;

#define simple_switch__try1_assign_stmt_905_c_macro_ __declare_static_bit_vector(RPIPE_write_mem_904,8);\
read_bit_vector_from_pipe("write_mem",&(RPIPE_write_mem_904));\
bit_vector_cast_to_bit_vector(0, &(inst3), &(RPIPE_write_mem_904));\
;

#define simple_switch__try1_assign_stmt_908_c_macro_ __declare_static_bit_vector(RPIPE_write_mem_907,8);\
read_bit_vector_from_pipe("write_mem",&(RPIPE_write_mem_907));\
bit_vector_cast_to_bit_vector(0, &(inst4), &(RPIPE_write_mem_907));\
;

#define simple_switch__try1_assign_stmt_917_c_macro_ __declare_static_bit_vector(CONCAT_u8_u16_912,16);\
__declare_static_bit_vector(CONCAT_u8_u16_915,16);\
__declare_static_bit_vector(CONCAT_u16_u32_916,32);\
bit_vector_concatenate( &(inst1), &(inst1), &(CONCAT_u8_u16_912));\
bit_vector_concatenate( &(inst1), &(inst1), &(CONCAT_u8_u16_915));\
bit_vector_concatenate( &(CONCAT_u8_u16_912), &(CONCAT_u8_u16_915), &(CONCAT_u16_u32_916));\
bit_vector_cast_to_bit_vector(0, &(inst), &(CONCAT_u16_u32_916));\
;

#define simple_switch__try1_call_stmt_921_c_macro_ _simple_switch_try_( &(pc),  &(inst), &(next_pc));\
;

#define simple_switch__try1_assign_stmt_925_c_macro_ __declare_static_bit_vector(konst_923,32);\
bit_vector_clear(&konst_923);\
konst_923.val.byte_array[0] = 1;\
bit_vector_clear(&konst_923);\
konst_923.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(register_output), &((reg[bit_vector_to_uint64(0, &konst_923)])));\
;

#define simple_switch__try1_assign_stmt_929_c_macro_ __declare_static_bit_vector(slice_928,8);\
bit_vector_slice(&(register_output), &(slice_928), 24);\
bit_vector_cast_to_bit_vector(0, &(reg1), &(slice_928));\
;

#define simple_switch__try1_assign_stmt_933_c_macro_ __declare_static_bit_vector(slice_932,8);\
bit_vector_slice(&(register_output), &(slice_932), 16);\
bit_vector_cast_to_bit_vector(0, &(reg2), &(slice_932));\
;

#define simple_switch__try1_assign_stmt_937_c_macro_ __declare_static_bit_vector(slice_936,8);\
bit_vector_slice(&(register_output), &(slice_936), 8);\
bit_vector_cast_to_bit_vector(0, &(reg3), &(slice_936));\
;

#define simple_switch__try1_assign_stmt_941_c_macro_ __declare_static_bit_vector(slice_940,8);\
bit_vector_slice(&(register_output), &(slice_940), 0);\
bit_vector_cast_to_bit_vector(0, &(reg4), &(slice_940));\
;

#define simple_switch__try1_assign_stmt_946_c_macro_ __declare_static_bit_vector(CONCAT_u8_u16_945,16);\
bit_vector_concatenate( &(reg3), &(reg4), &(CONCAT_u8_u16_945));\
write_bit_vector_to_pipe("LEDS",&(CONCAT_u8_u16_945));\
;

#define simple_switch__try1_assign_stmt_949_c_macro_ write_bit_vector_to_pipe("reg_output",&(reg1));\
;

#define simple_switch__try1_assign_stmt_952_c_macro_ write_bit_vector_to_pipe("reg_output",&(reg2));\
;

#define simple_switch__try1_assign_stmt_955_c_macro_ write_bit_vector_to_pipe("reg_output",&(reg3));\
;

#define simple_switch__try1_assign_stmt_958_c_macro_ write_bit_vector_to_pipe("reg_output",&(reg4));\
;
;

#define simple_switch__try1_branch_block_stmt_889_c_export_apply_macro_ ;

#define simple_switch__try1_inner_outarg_prep_macro__ ;

#define simple_switch__try1_outer_arg_decl_macro__ ;

#define simple_switch__try1_outer_op_xfer_macro__ ;

#define simple_switch__xnor_i_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__xnor_i_assign_stmt_519_c_macro_ __declare_static_bit_vector(XOR_u32_u32_518,32);\
bit_vector_xnor(&(rs1_data), &(rs2_data), &(XOR_u32_u32_518));\
bit_vector_cast_to_bit_vector(0, &(output), &(XOR_u32_u32_518));\
;

#define simple_switch__xnor_i_call_stmt_524_c_macro_ __declare_static_bit_vector(konst_520,1);\
bit_vector_clear(&konst_520);\
bit_vector_clear(&konst_520);\
_simple_switch_accessreg_( &(konst_520),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__xnor_i_assign_stmt_529_c_macro_ __declare_static_bit_vector(konst_527,8);\
bit_vector_clear(&konst_527);\
konst_527.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_528,8);\
bit_vector_clear(&konst_527);\
konst_527.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_527), &(ADD_u8_u8_528));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_528));\
;

#define simple_switch__xnor_i_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__xnor_i_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__xnor_i_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;

#define simple_switch__xor_i_inner_inarg_prep_macro__ __declare_static_bit_vector(rs1_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs1_data), &((*__prs1_data)));\
__declare_static_bit_vector(rs2_data,32);\
bit_vector_cast_to_bit_vector(0, &(rs2_data), &((*__prs2_data)));\
__declare_static_bit_vector(rd,8);\
bit_vector_cast_to_bit_vector(0, &(rd), &((*__prd)));\
__declare_static_bit_vector(pc,8);\
bit_vector_cast_to_bit_vector(0, &(pc), &((*__ppc)));\
__declare_static_bit_vector(next_pc,8);\
__declare_static_bit_vector(output,32);\
__declare_static_bit_vector(dummy,32);\

#define simple_switch__xor_i_assign_stmt_541_c_macro_ __declare_static_bit_vector(XOR_u32_u32_540,32);\
bit_vector_xor(&(rs1_data), &(rs2_data), &(XOR_u32_u32_540));\
bit_vector_cast_to_bit_vector(0, &(output), &(XOR_u32_u32_540));\
;

#define simple_switch__xor_i_call_stmt_546_c_macro_ __declare_static_bit_vector(konst_542,1);\
bit_vector_clear(&konst_542);\
bit_vector_clear(&konst_542);\
_simple_switch_accessreg_( &(konst_542),  &(rd),  &(output), &(dummy));\
;

#define simple_switch__xor_i_assign_stmt_551_c_macro_ __declare_static_bit_vector(konst_549,8);\
bit_vector_clear(&konst_549);\
konst_549.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_550,8);\
bit_vector_clear(&konst_549);\
konst_549.val.byte_array[0] = 1;\
bit_vector_plus( &(pc), &(konst_549), &(ADD_u8_u8_550));\
bit_vector_cast_to_bit_vector(0, &(next_pc), &(ADD_u8_u8_550));\
;

#define simple_switch__xor_i_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_pc)), &(next_pc));\
;

#define simple_switch__xor_i_outer_arg_decl_macro__ __declare_static_bit_vector(__rs1_data, 32);\
bit_vector_assign_uint64(0, &__rs1_data, rs1_data);\
__declare_static_bit_vector(__rs2_data, 32);\
bit_vector_assign_uint64(0, &__rs2_data, rs2_data);\
__declare_static_bit_vector(__rd, 8);\
bit_vector_assign_uint64(0, &__rd, rd);\
__declare_static_bit_vector(__pc, 8);\
bit_vector_assign_uint64(0, &__pc, pc);\
__declare_static_bit_vector(__next_pc, 8);\
;

#define simple_switch__xor_i_outer_op_xfer_macro__  *next_pc =  bit_vector_to_uint64(0, &__next_pc);\
;
