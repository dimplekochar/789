#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
// object initialization 

#define simple_memory__accMemAccessDaemon_inner_inarg_prep_macro__ __declare_static_bit_vector(acc_mem_request,32);\
bit_vector_cast_to_bit_vector(0, &(acc_mem_request), &((*__pacc_mem_request)));\
__declare_static_bit_vector(acc_mem_responsel,32);\
__declare_static_bit_vector(acc_mem_responseh,32);\
__declare_static_bit_vector(cmd,32);\
__declare_static_bit_vector(rwbar,1);\
__declare_static_bit_vector(wdata,16);\
__declare_static_bit_vector(addr,12);\
__declare_static_bit_vector(rdatal,64);\
__declare_static_bit_vector(rdata1,32);\
__declare_static_bit_vector(rdata0,32);\

#define simple_memory__accMemAccessDaemon_assign_stmt_110_c_macro_ bit_vector_cast_to_bit_vector(0, &(cmd), &(acc_mem_request));\
;

#define simple_memory__accMemAccessDaemon_assign_stmt_114_c_macro_ __declare_static_bit_vector(slice_113,1);\
bit_vector_slice(&(cmd), &(slice_113), 31);\
bit_vector_cast_to_bit_vector(0, &(rwbar), &(slice_113));\
;

#define simple_memory__accMemAccessDaemon_assign_stmt_118_c_macro_ __declare_static_bit_vector(slice_117,16);\
bit_vector_slice(&(cmd), &(slice_117), 12);\
bit_vector_cast_to_bit_vector(0, &(wdata), &(slice_117));\
;

#define simple_memory__accMemAccessDaemon_assign_stmt_122_c_macro_ __declare_static_bit_vector(slice_121,12);\
bit_vector_slice(&(cmd), &(slice_121), 0);\
bit_vector_cast_to_bit_vector(0, &(addr), &(slice_121));\
;

#define simple_memory__accMemAccessDaemon_call_stmt_127_c_macro_ _simple_memory_accessMem_( &(rwbar),  &(addr),  &(wdata), &(rdatal));\
;

#define simple_memory__accMemAccessDaemon_assign_stmt_131_c_macro_ __declare_static_bit_vector(slice_130,32);\
bit_vector_slice(&(rdatal), &(slice_130), 32);\
bit_vector_cast_to_bit_vector(0, &(rdata1), &(slice_130));\
;

#define simple_memory__accMemAccessDaemon_assign_stmt_135_c_macro_ __declare_static_bit_vector(slice_134,32);\
bit_vector_slice(&(rdatal), &(slice_134), 0);\
bit_vector_cast_to_bit_vector(0, &(rdata0), &(slice_134));\
;

#define simple_memory__accMemAccessDaemon_assign_stmt_138_c_macro_ bit_vector_cast_to_bit_vector(0, &(acc_mem_responsel), &(rdata0));\
;

#define simple_memory__accMemAccessDaemon_assign_stmt_141_c_macro_ bit_vector_cast_to_bit_vector(0, &(acc_mem_responseh), &(rdata1));\
;

#define simple_memory__accMemAccessDaemon_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pacc_mem_responsel)), &(acc_mem_responsel));\
bit_vector_cast_to_bit_vector(0, &((*__pacc_mem_responseh)), &(acc_mem_responseh));\
;

#define simple_memory__accMemAccessDaemon_outer_arg_decl_macro__ __declare_static_bit_vector(__acc_mem_request, 32);\
bit_vector_assign_uint64(0, &__acc_mem_request, acc_mem_request);\
__declare_static_bit_vector(__acc_mem_responsel, 32);\
__declare_static_bit_vector(__acc_mem_responseh, 32);\
;

#define simple_memory__accMemAccessDaemon_outer_op_xfer_macro__  *acc_mem_responsel =  bit_vector_to_uint64(0, &__acc_mem_responsel);\
 *acc_mem_responseh =  bit_vector_to_uint64(0, &__acc_mem_responseh);\
;

#define simple_memory__accessMem_inner_inarg_prep_macro__ __declare_static_bit_vector(read_write_bar,1);\
bit_vector_cast_to_bit_vector(0, &(read_write_bar), &((*__pread_write_bar)));\
__declare_static_bit_vector(addr,12);\
bit_vector_cast_to_bit_vector(0, &(addr), &((*__paddr)));\
__declare_static_bit_vector(write_data,16);\
bit_vector_cast_to_bit_vector(0, &(write_data), &((*__pwrite_data)));\
__declare_static_bit_vector(read_datal,64);\
__declare_static_bit_vector(t_read_data0,16);\
__declare_static_bit_vector(addr1,12);\
__declare_static_bit_vector(read_write_bar_36_delayed_1_0,1);\
__declare_static_bit_vector(t_read_data1,16);\
__declare_static_bit_vector(addr2,12);\
__declare_static_bit_vector(read_write_bar_47_delayed_1_0,1);\
__declare_static_bit_vector(t_read_data2,16);\
__declare_static_bit_vector(addr3,12);\
__declare_static_bit_vector(read_write_bar_58_delayed_1_0,1);\
__declare_static_bit_vector(t_read_data3,16);\
__declare_static_bit_vector(t_read_data0_69_delayed_1_0,16);\
__declare_static_bit_vector(read_write_bar_63_delayed_6_0,1);\
__declare_static_bit_vector(t_read_datal,64);\
__declare_static_bit_vector(read_write_bar_79_delayed_7_0,1);\

#define simple_memory__accessMem_assign_stmt_29_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data0), &((mem_array[bit_vector_to_uint64(0, &addr)])));\
}
;

#define simple_memory__accessMem_assign_stmt_35_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
__declare_static_bit_vector(konst_33,12);\
bit_vector_clear(&konst_33);\
konst_33.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u12_u12_34,12);\
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_clear(&konst_33);\
konst_33.val.byte_array[0] = 1;\
bit_vector_plus( &(addr), &(konst_33), &(ADD_u12_u12_34));\
bit_vector_cast_to_bit_vector(0, &(addr1), &(ADD_u12_u12_34));\
}
;

#define simple_memory__accessMem_assign_stmt_38_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_36_delayed_1_0), &(read_write_bar));\
;

#define simple_memory__accessMem_assign_stmt_43_c_macro_ if (has_undefined_bit(&read_write_bar_36_delayed_1_0)) {fprintf(stderr, "Error: variable read_write_bar_36_delayed_1_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_36_delayed_1_0));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar_36_delayed_1_0)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data1), &((mem_array[bit_vector_to_uint64(0, &addr1)])));\
}
;

#define simple_memory__accessMem_assign_stmt_49_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
__declare_static_bit_vector(konst_47,12);\
bit_vector_clear(&konst_47);\
konst_47.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u12_u12_48,12);\
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_clear(&konst_47);\
konst_47.val.byte_array[0] = 2;\
bit_vector_plus( &(addr), &(konst_47), &(ADD_u12_u12_48));\
bit_vector_cast_to_bit_vector(0, &(addr2), &(ADD_u12_u12_48));\
}
;

#define simple_memory__accessMem_assign_stmt_52_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_47_delayed_1_0), &(read_write_bar));\
;

#define simple_memory__accessMem_assign_stmt_57_c_macro_ if (has_undefined_bit(&read_write_bar_47_delayed_1_0)) {fprintf(stderr, "Error: variable read_write_bar_47_delayed_1_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_47_delayed_1_0));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar_47_delayed_1_0)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data2), &((mem_array[bit_vector_to_uint64(0, &addr2)])));\
}
;

#define simple_memory__accessMem_assign_stmt_63_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
__declare_static_bit_vector(konst_61,12);\
bit_vector_clear(&konst_61);\
konst_61.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u12_u12_62,12);\
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_clear(&konst_61);\
konst_61.val.byte_array[0] = 3;\
bit_vector_plus( &(addr), &(konst_61), &(ADD_u12_u12_62));\
bit_vector_cast_to_bit_vector(0, &(addr3), &(ADD_u12_u12_62));\
}
;

#define simple_memory__accessMem_assign_stmt_66_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_58_delayed_1_0), &(read_write_bar));\
;

#define simple_memory__accessMem_assign_stmt_71_c_macro_ if (has_undefined_bit(&read_write_bar_58_delayed_1_0)) {fprintf(stderr, "Error: variable read_write_bar_58_delayed_1_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_58_delayed_1_0));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar_58_delayed_1_0)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data3), &((mem_array[bit_vector_to_uint64(0, &addr3)])));\
}
;

#define simple_memory__accessMem_assign_stmt_74_c_macro_ bit_vector_cast_to_bit_vector(0, &(t_read_data0_69_delayed_1_0), &(t_read_data0));\
;

#define simple_memory__accessMem_assign_stmt_77_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_63_delayed_6_0), &(read_write_bar));\
;

#define simple_memory__accessMem_assign_stmt_87_c_macro_ if (has_undefined_bit(&read_write_bar_63_delayed_6_0)) {fprintf(stderr, "Error: variable read_write_bar_63_delayed_6_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_63_delayed_6_0));assert(0);} \
__declare_static_bit_vector(CONCAT_u16_u32_82,32);\
__declare_static_bit_vector(CONCAT_u16_u32_85,32);\
__declare_static_bit_vector(CONCAT_u32_u64_86,64);\
if (bit_vector_to_uint64(0, &read_write_bar_63_delayed_6_0)) {\
bit_vector_concatenate( &(t_read_data3), &(t_read_data2), &(CONCAT_u16_u32_82));\
bit_vector_concatenate( &(t_read_data1), &(t_read_data0_69_delayed_1_0), &(CONCAT_u16_u32_85));\
bit_vector_concatenate( &(CONCAT_u16_u32_82), &(CONCAT_u16_u32_85), &(CONCAT_u32_u64_86));\
bit_vector_cast_to_bit_vector(0, &(t_read_datal), &(CONCAT_u32_u64_86));\
}
;

#define simple_memory__accessMem_assign_stmt_92_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
if (!bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_cast_to_bit_vector(0, &((mem_array[bit_vector_to_uint64(0, &addr)])), &(write_data));\
}
;

#define simple_memory__accessMem_assign_stmt_95_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_79_delayed_7_0), &(read_write_bar));\
;

#define simple_memory__accessMem_assign_stmt_101_c_macro_ __declare_static_bit_vector(konst_99,64);\
bit_vector_clear(&konst_99);\
__declare_static_bit_vector(MUX_100,64);\
if (has_undefined_bit(&read_write_bar_79_delayed_7_0)) {fprintf(stderr, "Error: variable read_write_bar_79_delayed_7_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_79_delayed_7_0));assert(0);} \
bit_vector_clear(&konst_99);\
if(bit_vector_to_uint64(0, &read_write_bar_79_delayed_7_0)){\
bit_vector_cast_to_bit_vector(0, &(MUX_100), &(t_read_datal));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_100), &(konst_99));\
}\
bit_vector_cast_to_bit_vector(0, &(read_datal), &(MUX_100));\
;

#define simple_memory__accessMem_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pread_datal)), &(read_datal));\
;

#define simple_memory__accessMem_v_inner_inarg_prep_macro__ __declare_static_bit_vector(read_write_bar,1);\
bit_vector_cast_to_bit_vector(0, &(read_write_bar), &((*__pread_write_bar)));\
__declare_static_bit_vector(addr,12);\
bit_vector_cast_to_bit_vector(0, &(addr), &((*__paddr)));\
__declare_static_bit_vector(write_data,16);\
bit_vector_cast_to_bit_vector(0, &(write_data), &((*__pwrite_data)));\
__declare_static_bit_vector(read_datal,64);\
__declare_static_bit_vector(t_read_data0,16);\
__declare_static_bit_vector(addr1,12);\
__declare_static_bit_vector(read_write_bar_146_delayed_1_0,1);\
__declare_static_bit_vector(t_read_data1,16);\
__declare_static_bit_vector(addr2,12);\
__declare_static_bit_vector(read_write_bar_157_delayed_1_0,1);\
__declare_static_bit_vector(t_read_data2,16);\
__declare_static_bit_vector(addr3,12);\
__declare_static_bit_vector(read_write_bar_168_delayed_1_0,1);\
__declare_static_bit_vector(t_read_data3,16);\
__declare_static_bit_vector(read_write_bar_173_delayed_6_0,1);\
__declare_static_bit_vector(t_read_data0_179_delayed_1_0,16);\
__declare_static_bit_vector(t_read_datal,64);\
__declare_static_bit_vector(read_write_bar_189_delayed_7_0,1);\

#define simple_memory__accessMem_v_assign_stmt_152_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data0), &((mem_array[bit_vector_to_uint64(0, &addr)])));\
}
;

#define simple_memory__accessMem_v_assign_stmt_158_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
__declare_static_bit_vector(konst_156,12);\
bit_vector_clear(&konst_156);\
konst_156.val.byte_array[0] = 32;\
__declare_static_bit_vector(ADD_u12_u12_157,12);\
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_clear(&konst_156);\
konst_156.val.byte_array[0] = 32;\
bit_vector_plus( &(addr), &(konst_156), &(ADD_u12_u12_157));\
bit_vector_cast_to_bit_vector(0, &(addr1), &(ADD_u12_u12_157));\
}
;

#define simple_memory__accessMem_v_assign_stmt_161_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_146_delayed_1_0), &(read_write_bar));\
;

#define simple_memory__accessMem_v_assign_stmt_166_c_macro_ if (has_undefined_bit(&read_write_bar_146_delayed_1_0)) {fprintf(stderr, "Error: variable read_write_bar_146_delayed_1_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_146_delayed_1_0));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar_146_delayed_1_0)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data1), &((mem_array[bit_vector_to_uint64(0, &addr1)])));\
}
;

#define simple_memory__accessMem_v_assign_stmt_172_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
__declare_static_bit_vector(konst_170,12);\
bit_vector_clear(&konst_170);\
konst_170.val.byte_array[0] = 64;\
__declare_static_bit_vector(ADD_u12_u12_171,12);\
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_clear(&konst_170);\
konst_170.val.byte_array[0] = 64;\
bit_vector_plus( &(addr), &(konst_170), &(ADD_u12_u12_171));\
bit_vector_cast_to_bit_vector(0, &(addr2), &(ADD_u12_u12_171));\
}
;

#define simple_memory__accessMem_v_assign_stmt_175_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_157_delayed_1_0), &(read_write_bar));\
;

#define simple_memory__accessMem_v_assign_stmt_180_c_macro_ if (has_undefined_bit(&read_write_bar_157_delayed_1_0)) {fprintf(stderr, "Error: variable read_write_bar_157_delayed_1_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_157_delayed_1_0));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar_157_delayed_1_0)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data2), &((mem_array[bit_vector_to_uint64(0, &addr2)])));\
}
;

#define simple_memory__accessMem_v_assign_stmt_186_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
__declare_static_bit_vector(konst_184,12);\
bit_vector_clear(&konst_184);\
konst_184.val.byte_array[0] = 96;\
__declare_static_bit_vector(ADD_u12_u12_185,12);\
if (bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_clear(&konst_184);\
konst_184.val.byte_array[0] = 96;\
bit_vector_plus( &(addr), &(konst_184), &(ADD_u12_u12_185));\
bit_vector_cast_to_bit_vector(0, &(addr3), &(ADD_u12_u12_185));\
}
;

#define simple_memory__accessMem_v_assign_stmt_189_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_168_delayed_1_0), &(read_write_bar));\
;

#define simple_memory__accessMem_v_assign_stmt_194_c_macro_ if (has_undefined_bit(&read_write_bar_168_delayed_1_0)) {fprintf(stderr, "Error: variable read_write_bar_168_delayed_1_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_168_delayed_1_0));assert(0);} \
if (bit_vector_to_uint64(0, &read_write_bar_168_delayed_1_0)) {\
bit_vector_cast_to_bit_vector(0, &(t_read_data3), &((mem_array[bit_vector_to_uint64(0, &addr3)])));\
}
;

#define simple_memory__accessMem_v_assign_stmt_197_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_173_delayed_6_0), &(read_write_bar));\
;

#define simple_memory__accessMem_v_assign_stmt_200_c_macro_ bit_vector_cast_to_bit_vector(0, &(t_read_data0_179_delayed_1_0), &(t_read_data0));\
;

#define simple_memory__accessMem_v_assign_stmt_210_c_macro_ if (has_undefined_bit(&read_write_bar_173_delayed_6_0)) {fprintf(stderr, "Error: variable read_write_bar_173_delayed_6_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_173_delayed_6_0));assert(0);} \
__declare_static_bit_vector(CONCAT_u16_u32_205,32);\
__declare_static_bit_vector(CONCAT_u16_u32_208,32);\
__declare_static_bit_vector(CONCAT_u32_u64_209,64);\
if (bit_vector_to_uint64(0, &read_write_bar_173_delayed_6_0)) {\
bit_vector_concatenate( &(t_read_data3), &(t_read_data2), &(CONCAT_u16_u32_205));\
bit_vector_concatenate( &(t_read_data1), &(t_read_data0_179_delayed_1_0), &(CONCAT_u16_u32_208));\
bit_vector_concatenate( &(CONCAT_u16_u32_205), &(CONCAT_u16_u32_208), &(CONCAT_u32_u64_209));\
bit_vector_cast_to_bit_vector(0, &(t_read_datal), &(CONCAT_u32_u64_209));\
}
;

#define simple_memory__accessMem_v_assign_stmt_215_c_macro_ if (has_undefined_bit(&read_write_bar)) {fprintf(stderr, "Error: variable read_write_bar has undefined value (%s) at test point.\n", to_string(&read_write_bar));assert(0);} \
if (!bit_vector_to_uint64(0, &read_write_bar)) {\
bit_vector_cast_to_bit_vector(0, &((mem_array[bit_vector_to_uint64(0, &addr)])), &(write_data));\
}
;

#define simple_memory__accessMem_v_assign_stmt_218_c_macro_ bit_vector_cast_to_bit_vector(0, &(read_write_bar_189_delayed_7_0), &(read_write_bar));\
;

#define simple_memory__accessMem_v_assign_stmt_224_c_macro_ __declare_static_bit_vector(konst_222,64);\
bit_vector_clear(&konst_222);\
__declare_static_bit_vector(MUX_223,64);\
if (has_undefined_bit(&read_write_bar_189_delayed_7_0)) {fprintf(stderr, "Error: variable read_write_bar_189_delayed_7_0 has undefined value (%s) at test point.\n", to_string(&read_write_bar_189_delayed_7_0));assert(0);} \
bit_vector_clear(&konst_222);\
if(bit_vector_to_uint64(0, &read_write_bar_189_delayed_7_0)){\
bit_vector_cast_to_bit_vector(0, &(MUX_223), &(t_read_datal));\
}\
else\
{\
bit_vector_cast_to_bit_vector(0, &(MUX_223), &(konst_222));\
}\
bit_vector_cast_to_bit_vector(0, &(read_datal), &(MUX_223));\
;

#define simple_memory__accessMem_v_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pread_datal)), &(read_datal));\
;

#define simple_memory__global_storage_initializer__inner_inarg_prep_macro__ 
#define simple_memory__global_storage_initializer__inner_outarg_prep_macro__ ;

#define simple_memory__global_storage_initializer__outer_arg_decl_macro__ ;

#define simple_memory__global_storage_initializer__outer_op_xfer_macro__ ;

#define simple_memory__initial_inner_inarg_prep_macro__ 
#define simple_memory__initial_assign_stmt_232_c_macro_ __declare_static_bit_vector(konst_231,12);\
bit_vector_clear(&konst_231);\
bit_vector_clear(&konst_231);\
bit_vector_cast_to_bit_vector(0, &(ZJ), &(konst_231));\
;

#define simple_memory__initial_branch_block_stmt_233_c_export_decl_macro_ __declare_static_bit_vector(Y,12);\
__declare_static_bit_vector(YI,12);\


#define simple_memory__initial_merge_stmt_234_c_preamble_macro_ uint8_t merge_stmt_234_entry_flag;\
merge_stmt_234_entry_flag = 1;\
uint8_t loopback_233_flag = 0;\
goto merge_stmt_234_run;\
loopback_233: loopback_233_flag = 1;\
goto merge_stmt_234_run;\
merge_stmt_234_run: ;\

#define simple_memory__initial_phi_stmt_235_c_macro_ __declare_static_bit_vector(konst_237,12);\
bit_vector_clear(&konst_237);\
__declare_static_bit_vector(type_cast_238,12);\
bit_vector_clear(&type_cast_238);\
if(loopback_233_flag) {\
bit_vector_cast_to_bit_vector(0, &(Y), &(YI));\
}\
else {\
__declare_static_bit_vector(konst_237,12);\
bit_vector_clear(&konst_237);\
__declare_static_bit_vector(type_cast_238,12);\
bit_vector_clear(&type_cast_238);\
bit_vector_clear(&konst_237);\
bit_vector_bitcast_to_bit_vector( &(type_cast_238), &(konst_237));\
bit_vector_cast_to_bit_vector(0, &(Y), &(type_cast_238));\
}\
;
;

#define simple_memory__initial_merge_stmt_234_c_postamble_macro_ loopback_233_flag = 0;\
merge_stmt_234_entry_flag = 0;

#define simple_memory__initial_assign_stmt_245_c_macro_ __declare_static_bit_vector(konst_243,12);\
bit_vector_clear(&konst_243);\
konst_243.val.byte_array[0] = 128;\
__declare_static_bit_vector(MUL_u12_u12_244,12);\
bit_vector_clear(&konst_243);\
konst_243.val.byte_array[0] = 128;\
bit_vector_mul( &(Y), &(konst_243), &(MUL_u12_u12_244));\
bit_vector_cast_to_bit_vector(0, &(ZJ), &(MUL_u12_u12_244));\
;

#define simple_memory__initial_branch_block_stmt_246_c_export_decl_macro_ __declare_static_bit_vector(I,12);\
__declare_static_bit_vector(wdata,16);\
__declare_static_bit_vector(I_230_delayed_4_0,12);\
__declare_static_bit_vector(addr,12);\
__declare_static_bit_vector(wdata_236_delayed_4_0,16);\
__declare_static_bit_vector(rdata,64);\
__declare_static_bit_vector(NI,12);\


#define simple_memory__initial_merge_stmt_248_c_preamble_macro_ uint8_t merge_stmt_248_entry_flag;\
merge_stmt_248_entry_flag = do_while_entry_flag;\
goto merge_stmt_248_run;\
merge_stmt_248_run: ;\

#define simple_memory__initial_phi_stmt_249_c_macro_ __declare_static_bit_vector(konst_251,12);\
bit_vector_clear(&konst_251);\
__declare_static_bit_vector(type_cast_252,12);\
bit_vector_clear(&type_cast_252);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(NI));\
}\
else {\
__declare_static_bit_vector(konst_251,12);\
bit_vector_clear(&konst_251);\
__declare_static_bit_vector(type_cast_252,12);\
bit_vector_clear(&type_cast_252);\
bit_vector_clear(&konst_251);\
bit_vector_bitcast_to_bit_vector( &(type_cast_252), &(konst_251));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_252));\
}\
;
;

#define simple_memory__initial_merge_stmt_248_c_postamble_macro_ merge_stmt_248_entry_flag = 0;

#define simple_memory__initial_assign_stmt_258_c_macro_ __declare_static_bit_vector(type_cast_257,16);\
bit_vector_cast_to_bit_vector(0, &(type_cast_257), &(I));\
bit_vector_cast_to_bit_vector(0, &(wdata), &(type_cast_257));\
;

#define simple_memory__initial_assign_stmt_261_c_macro_ bit_vector_cast_to_bit_vector(0, &(I_230_delayed_4_0), &(I));\
;

#define simple_memory__initial_assign_stmt_267_c_macro_ __declare_static_bit_vector(ADD_u12_u12_265,12);\
__declare_static_bit_vector(type_cast_266,12);\
bit_vector_plus( &(ZJ), &(I_230_delayed_4_0), &(ADD_u12_u12_265));\
bit_vector_cast_to_bit_vector(0, &(type_cast_266), &(ADD_u12_u12_265));\
bit_vector_cast_to_bit_vector(0, &(addr), &(type_cast_266));\
;

#define simple_memory__initial_assign_stmt_270_c_macro_ bit_vector_cast_to_bit_vector(0, &(wdata_236_delayed_4_0), &(wdata));\
;

#define simple_memory__initial_call_stmt_275_c_macro_ __declare_static_bit_vector(konst_271,1);\
bit_vector_clear(&konst_271);\
bit_vector_clear(&konst_271);\
_simple_memory_accessMem_( &(konst_271),  &(addr),  &(wdata_236_delayed_4_0), &(rdata));\
;

#define simple_memory__initial_assign_stmt_280_c_macro_ __declare_static_bit_vector(konst_278,12);\
bit_vector_clear(&konst_278);\
konst_278.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u12_u12_279,12);\
bit_vector_clear(&konst_278);\
konst_278.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_278), &(ADD_u12_u12_279));\
bit_vector_cast_to_bit_vector(0, &(NI), &(ADD_u12_u12_279));\
;
;

#define simple_memory__initial_branch_block_stmt_246_c_export_apply_macro_ ;

#define simple_memory__initial_assign_stmt_290_c_macro_ __declare_static_bit_vector(konst_288,12);\
bit_vector_clear(&konst_288);\
konst_288.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u12_u12_289,12);\
bit_vector_clear(&konst_288);\
konst_288.val.byte_array[0] = 1;\
bit_vector_plus( &(Y), &(konst_288), &(ADD_u12_u12_289));\
bit_vector_cast_to_bit_vector(0, &(YI), &(ADD_u12_u12_289));\
;
;

#define simple_memory__initial_branch_block_stmt_233_c_export_apply_macro_ ;

#define simple_memory__initial_assign_stmt_300_c_macro_ __declare_static_bit_vector(konst_299,12);\
bit_vector_clear(&konst_299);\
konst_299.val.byte_array[1] = 4;\
bit_vector_clear(&konst_299);\
konst_299.val.byte_array[1] = 4;\
bit_vector_cast_to_bit_vector(0, &(ZJ), &(konst_299));\
;

#define simple_memory__initial_branch_block_stmt_301_c_export_decl_macro_ __declare_static_bit_vector(M,12);\
__declare_static_bit_vector(wdata,16);\
__declare_static_bit_vector(M_279_delayed_4_0,12);\
__declare_static_bit_vector(addr,12);\
__declare_static_bit_vector(wdata_285_delayed_4_0,16);\
__declare_static_bit_vector(rdata,64);\
__declare_static_bit_vector(NM,12);\


#define simple_memory__initial_merge_stmt_303_c_preamble_macro_ uint8_t merge_stmt_303_entry_flag;\
merge_stmt_303_entry_flag = do_while_entry_flag;\
goto merge_stmt_303_run;\
merge_stmt_303_run: ;\

#define simple_memory__initial_phi_stmt_304_c_macro_ __declare_static_bit_vector(konst_306,12);\
bit_vector_clear(&konst_306);\
__declare_static_bit_vector(type_cast_307,12);\
bit_vector_clear(&type_cast_307);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(M), &(NM));\
}\
else {\
__declare_static_bit_vector(konst_306,12);\
bit_vector_clear(&konst_306);\
__declare_static_bit_vector(type_cast_307,12);\
bit_vector_clear(&type_cast_307);\
bit_vector_clear(&konst_306);\
bit_vector_bitcast_to_bit_vector( &(type_cast_307), &(konst_306));\
bit_vector_cast_to_bit_vector(0, &(M), &(type_cast_307));\
}\
;
;

#define simple_memory__initial_merge_stmt_303_c_postamble_macro_ merge_stmt_303_entry_flag = 0;

#define simple_memory__initial_assign_stmt_313_c_macro_ __declare_static_bit_vector(type_cast_312,16);\
bit_vector_cast_to_bit_vector(0, &(type_cast_312), &(M));\
bit_vector_cast_to_bit_vector(0, &(wdata), &(type_cast_312));\
;

#define simple_memory__initial_assign_stmt_316_c_macro_ bit_vector_cast_to_bit_vector(0, &(M_279_delayed_4_0), &(M));\
;

#define simple_memory__initial_assign_stmt_322_c_macro_ __declare_static_bit_vector(ADD_u12_u12_320,12);\
__declare_static_bit_vector(type_cast_321,12);\
bit_vector_plus( &(ZJ), &(M_279_delayed_4_0), &(ADD_u12_u12_320));\
bit_vector_cast_to_bit_vector(0, &(type_cast_321), &(ADD_u12_u12_320));\
bit_vector_cast_to_bit_vector(0, &(addr), &(type_cast_321));\
;

#define simple_memory__initial_assign_stmt_325_c_macro_ bit_vector_cast_to_bit_vector(0, &(wdata_285_delayed_4_0), &(wdata));\
;

#define simple_memory__initial_call_stmt_330_c_macro_ __declare_static_bit_vector(konst_326,1);\
bit_vector_clear(&konst_326);\
bit_vector_clear(&konst_326);\
_simple_memory_accessMem_( &(konst_326),  &(addr),  &(wdata_285_delayed_4_0), &(rdata));\
;

#define simple_memory__initial_assign_stmt_335_c_macro_ __declare_static_bit_vector(konst_333,12);\
bit_vector_clear(&konst_333);\
konst_333.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u12_u12_334,12);\
bit_vector_clear(&konst_333);\
konst_333.val.byte_array[0] = 1;\
bit_vector_plus( &(M), &(konst_333), &(ADD_u12_u12_334));\
bit_vector_cast_to_bit_vector(0, &(NM), &(ADD_u12_u12_334));\
;
;

#define simple_memory__initial_branch_block_stmt_301_c_export_apply_macro_ ;

#define simple_memory__initial_inner_outarg_prep_macro__ ;

#define simple_memory__initial_outer_arg_decl_macro__ ;

#define simple_memory__initial_outer_op_xfer_macro__ ;

#define simple_memory__try_inner_inarg_prep_macro__ __declare_static_bit_vector(star,16);\
__declare_static_bit_vector(rdatacom1,64);\

#define simple_memory__try_assign_stmt_754_c_macro_ __declare_static_bit_vector(konst_753,4);\
bit_vector_clear(&konst_753);\
bit_vector_clear(&konst_753);\
bit_vector_cast_to_bit_vector(0, &(zer), &(konst_753));\
;

#define simple_memory__try_assign_stmt_757_c_macro_ __declare_static_bit_vector(konst_756,1);\
bit_vector_clear(&konst_756);\
konst_756.val.byte_array[0] = 1;\
bit_vector_clear(&konst_756);\
konst_756.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(one), &(konst_756));\
;

#define simple_memory__try_call_stmt_758_c_macro_ _simple_memory_initial_();\
;

#define simple_memory__try_assign_stmt_761_c_macro_ __declare_static_bit_vector(RPIPE_start_760,16);\
read_bit_vector_from_pipe("start",&(RPIPE_start_760));\
bit_vector_cast_to_bit_vector(0, &(star), &(RPIPE_start_760));\
;

#define simple_memory__try_call_stmt_766_c_macro_ __declare_static_bit_vector(konst_762,1);\
bit_vector_clear(&konst_762);\
__declare_static_bit_vector(konst_763,12);\
bit_vector_clear(&konst_763);\
konst_763.val.byte_array[0] = 16;\
konst_763.val.byte_array[1] = 4;\
__declare_static_bit_vector(konst_764,16);\
bit_vector_clear(&konst_764);\
konst_764.val.byte_array[0] = 1;\
bit_vector_clear(&konst_762);\
bit_vector_clear(&konst_763);\
konst_763.val.byte_array[0] = 16;\
konst_763.val.byte_array[1] = 4;\
bit_vector_clear(&konst_764);\
konst_764.val.byte_array[0] = 1;\
_simple_memory_accessMem_( &(konst_762),  &(konst_763),  &(konst_764), &(rdatacom1));\
;

#define simple_memory__try_branch_block_stmt_767_c_export_decl_macro_ __declare_static_bit_vector(C,16);\
__declare_static_bit_vector(rdatacom,64);\
__declare_static_bit_vector(com0,16);\
__declare_static_bit_vector(wdatacom2,16);\
__declare_static_bit_vector(rdatacom2,64);\
__declare_static_bit_vector(NC,16);\


#define simple_memory__try_merge_stmt_769_c_preamble_macro_ uint8_t merge_stmt_769_entry_flag;\
merge_stmt_769_entry_flag = do_while_entry_flag;\
goto merge_stmt_769_run;\
merge_stmt_769_run: ;\

#define simple_memory__try_phi_stmt_770_c_macro_ __declare_static_bit_vector(konst_772,16);\
bit_vector_clear(&konst_772);\
__declare_static_bit_vector(type_cast_773,16);\
bit_vector_clear(&type_cast_773);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(C), &(NC));\
}\
else {\
__declare_static_bit_vector(konst_772,16);\
bit_vector_clear(&konst_772);\
__declare_static_bit_vector(type_cast_773,16);\
bit_vector_clear(&type_cast_773);\
bit_vector_clear(&konst_772);\
bit_vector_bitcast_to_bit_vector( &(type_cast_773), &(konst_772));\
bit_vector_cast_to_bit_vector(0, &(C), &(type_cast_773));\
}\
;
;

#define simple_memory__try_merge_stmt_769_c_postamble_macro_ merge_stmt_769_entry_flag = 0;

#define simple_memory__try_assign_stmt_778_c_macro_ __declare_static_bit_vector(konst_777,16);\
bit_vector_clear(&konst_777);\
bit_vector_clear(&konst_777);\
write_bit_vector_to_pipe("status",&(konst_777));\
;

#define simple_memory__try_call_stmt_779_c_macro_ _simple_memory_try1_();\
;

#define simple_memory__try_assign_stmt_782_c_macro_ __declare_static_bit_vector(konst_781,16);\
bit_vector_clear(&konst_781);\
konst_781.val.byte_array[0] = 1;\
bit_vector_clear(&konst_781);\
konst_781.val.byte_array[0] = 1;\
write_bit_vector_to_pipe("status",&(konst_781));\
;

#define simple_memory__try_call_stmt_787_c_macro_ __declare_static_bit_vector(konst_783,1);\
bit_vector_clear(&konst_783);\
konst_783.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_784,12);\
bit_vector_clear(&konst_784);\
konst_784.val.byte_array[0] = 16;\
konst_784.val.byte_array[1] = 4;\
__declare_static_bit_vector(konst_785,16);\
bit_vector_clear(&konst_785);\
bit_vector_clear(&konst_783);\
konst_783.val.byte_array[0] = 1;\
bit_vector_clear(&konst_784);\
konst_784.val.byte_array[0] = 16;\
konst_784.val.byte_array[1] = 4;\
bit_vector_clear(&konst_785);\
_simple_memory_accessMem_( &(konst_783),  &(konst_784),  &(konst_785), &(rdatacom));\
;

#define simple_memory__try_assign_stmt_791_c_macro_ __declare_static_bit_vector(slice_790,16);\
bit_vector_slice(&(rdatacom), &(slice_790), 0);\
bit_vector_cast_to_bit_vector(0, &(com0), &(slice_790));\
;

#define simple_memory__try_assign_stmt_796_c_macro_ __declare_static_bit_vector(konst_794,16);\
bit_vector_clear(&konst_794);\
konst_794.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_795,16);\
bit_vector_clear(&konst_794);\
konst_794.val.byte_array[0] = 1;\
bit_vector_minus( &(com0), &(konst_794), &(SUB_u16_u16_795));\
bit_vector_cast_to_bit_vector(0, &(wdatacom2), &(SUB_u16_u16_795));\
;

#define simple_memory__try_call_stmt_801_c_macro_ __declare_static_bit_vector(konst_797,1);\
bit_vector_clear(&konst_797);\
__declare_static_bit_vector(konst_798,12);\
bit_vector_clear(&konst_798);\
konst_798.val.byte_array[0] = 16;\
konst_798.val.byte_array[1] = 4;\
bit_vector_clear(&konst_797);\
bit_vector_clear(&konst_798);\
konst_798.val.byte_array[0] = 16;\
konst_798.val.byte_array[1] = 4;\
_simple_memory_accessMem_( &(konst_797),  &(konst_798),  &(wdatacom2), &(rdatacom2));\
;

#define simple_memory__try_assign_stmt_804_c_macro_ bit_vector_cast_to_bit_vector(0, &(NC), &(wdatacom2));\
;
;

#define simple_memory__try_branch_block_stmt_767_c_export_apply_macro_ ;

#define simple_memory__try_inner_outarg_prep_macro__ ;

#define simple_memory__try_outer_arg_decl_macro__ ;

#define simple_memory__try_outer_op_xfer_macro__ ;

#define simple_memory__try1_inner_inarg_prep_macro__ 
#define simple_memory__try1_branch_block_stmt_343_c_export_decl_macro_ __declare_static_bit_vector(T,12);\
__declare_static_bit_vector(T_310_delayed_4_0,12);\
__declare_static_bit_vector(NNNT,12);\
__declare_static_bit_vector(NTT,31);\
__declare_static_bit_vector(NNT,32);\
__declare_static_bit_vector(rdatalk,32);\
__declare_static_bit_vector(rdatahk,32);\
__declare_static_bit_vector(rdatak1,16);\
__declare_static_bit_vector(rdatak0,16);\
__declare_static_bit_vector(TT,12);\
__declare_static_bit_vector(T_341_delayed_12_0,12);\
__declare_static_bit_vector(TT_345_delayed_11_0,12);\
__declare_static_bit_vector(rdatak3,16);\
__declare_static_bit_vector(rdatak2,16);\
__declare_static_bit_vector(TTT,12);\
__declare_static_bit_vector(TTTT,12);\
__declare_static_bit_vector(TTT_367_delayed_11_0,12);\
__declare_static_bit_vector(TTTT_371_delayed_11_0,12);\
__declare_static_bit_vector(NT,12);\


#define simple_memory__try1_merge_stmt_345_c_preamble_macro_ uint8_t merge_stmt_345_entry_flag;\
merge_stmt_345_entry_flag = do_while_entry_flag;\
goto merge_stmt_345_run;\
merge_stmt_345_run: ;\

#define simple_memory__try1_phi_stmt_346_c_macro_ __declare_static_bit_vector(konst_348,12);\
bit_vector_clear(&konst_348);\
__declare_static_bit_vector(type_cast_349,12);\
bit_vector_clear(&type_cast_349);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(T), &(NT));\
}\
else {\
__declare_static_bit_vector(konst_348,12);\
bit_vector_clear(&konst_348);\
__declare_static_bit_vector(type_cast_349,12);\
bit_vector_clear(&type_cast_349);\
bit_vector_clear(&konst_348);\
bit_vector_bitcast_to_bit_vector( &(type_cast_349), &(konst_348));\
bit_vector_cast_to_bit_vector(0, &(T), &(type_cast_349));\
}\
;
;

#define simple_memory__try1_merge_stmt_345_c_postamble_macro_ merge_stmt_345_entry_flag = 0;

#define simple_memory__try1_assign_stmt_354_c_macro_ bit_vector_cast_to_bit_vector(0, &(T_310_delayed_4_0), &(T));\
;

#define simple_memory__try1_assign_stmt_359_c_macro_ __declare_static_bit_vector(ADD_u12_u12_358,12);\
bit_vector_plus( &(T_310_delayed_4_0), &(ZJ), &(ADD_u12_u12_358));\
bit_vector_cast_to_bit_vector(0, &(NNNT), &(ADD_u12_u12_358));\
;

#define simple_memory__try1_assign_stmt_364_c_macro_ __declare_static_bit_vector(type_cast_363,31);\
bit_vector_bitcast_to_bit_vector( &(type_cast_363), &(NNNT));\
bit_vector_cast_to_bit_vector(0, &(NTT), &(type_cast_363));\
;

#define simple_memory__try1_assign_stmt_369_c_macro_ __declare_static_bit_vector(CONCAT_u1_u32_368,32);\
bit_vector_concatenate( &(one), &(NTT), &(CONCAT_u1_u32_368));\
bit_vector_cast_to_bit_vector(0, &(NNT), &(CONCAT_u1_u32_368));\
;

#define simple_memory__try1_call_stmt_373_c_macro_ _simple_memory_accMemAccessDaemon_( &(NNT), &(rdatalk), &(rdatahk));\
;

#define simple_memory__try1_assign_stmt_377_c_macro_ __declare_static_bit_vector(slice_376,16);\
bit_vector_slice(&(rdatalk), &(slice_376), 16);\
bit_vector_cast_to_bit_vector(0, &(rdatak1), &(slice_376));\
;

#define simple_memory__try1_assign_stmt_381_c_macro_ __declare_static_bit_vector(slice_380,16);\
bit_vector_slice(&(rdatalk), &(slice_380), 0);\
bit_vector_cast_to_bit_vector(0, &(rdatak0), &(slice_380));\
;

#define simple_memory__try1_assign_stmt_386_c_macro_ __declare_static_bit_vector(konst_384,12);\
bit_vector_clear(&konst_384);\
konst_384.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u12_u12_385,12);\
bit_vector_clear(&konst_384);\
konst_384.val.byte_array[0] = 1;\
bit_vector_plus( &(T), &(konst_384), &(ADD_u12_u12_385));\
bit_vector_cast_to_bit_vector(0, &(TT), &(ADD_u12_u12_385));\
;

#define simple_memory__try1_assign_stmt_389_c_macro_ bit_vector_cast_to_bit_vector(0, &(T_341_delayed_12_0), &(T));\
;

#define simple_memory__try1_assign_stmt_393_c_macro_ bit_vector_cast_to_bit_vector(0, &((kernel[bit_vector_to_uint64(0, &T_341_delayed_12_0)])), &(rdatak0));\
;

#define simple_memory__try1_assign_stmt_396_c_macro_ bit_vector_cast_to_bit_vector(0, &(TT_345_delayed_11_0), &(TT));\
;

#define simple_memory__try1_assign_stmt_400_c_macro_ bit_vector_cast_to_bit_vector(0, &((kernel[bit_vector_to_uint64(0, &TT_345_delayed_11_0)])), &(rdatak1));\
;

#define simple_memory__try1_assign_stmt_404_c_macro_ __declare_static_bit_vector(slice_403,16);\
bit_vector_slice(&(rdatahk), &(slice_403), 16);\
bit_vector_cast_to_bit_vector(0, &(rdatak3), &(slice_403));\
;

#define simple_memory__try1_assign_stmt_408_c_macro_ __declare_static_bit_vector(slice_407,16);\
bit_vector_slice(&(rdatahk), &(slice_407), 0);\
bit_vector_cast_to_bit_vector(0, &(rdatak2), &(slice_407));\
;

#define simple_memory__try1_assign_stmt_413_c_macro_ __declare_static_bit_vector(konst_411,12);\
bit_vector_clear(&konst_411);\
konst_411.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u12_u12_412,12);\
bit_vector_clear(&konst_411);\
konst_411.val.byte_array[0] = 2;\
bit_vector_plus( &(T), &(konst_411), &(ADD_u12_u12_412));\
bit_vector_cast_to_bit_vector(0, &(TTT), &(ADD_u12_u12_412));\
;

#define simple_memory__try1_assign_stmt_418_c_macro_ __declare_static_bit_vector(konst_416,12);\
bit_vector_clear(&konst_416);\
konst_416.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u12_u12_417,12);\
bit_vector_clear(&konst_416);\
konst_416.val.byte_array[0] = 3;\
bit_vector_plus( &(T), &(konst_416), &(ADD_u12_u12_417));\
bit_vector_cast_to_bit_vector(0, &(TTTT), &(ADD_u12_u12_417));\
;

#define simple_memory__try1_assign_stmt_421_c_macro_ bit_vector_cast_to_bit_vector(0, &(TTT_367_delayed_11_0), &(TTT));\
;

#define simple_memory__try1_assign_stmt_425_c_macro_ bit_vector_cast_to_bit_vector(0, &((kernel[bit_vector_to_uint64(0, &TTT_367_delayed_11_0)])), &(rdatak2));\
;

#define simple_memory__try1_assign_stmt_428_c_macro_ bit_vector_cast_to_bit_vector(0, &(TTTT_371_delayed_11_0), &(TTTT));\
;

#define simple_memory__try1_assign_stmt_432_c_macro_ bit_vector_cast_to_bit_vector(0, &((kernel[bit_vector_to_uint64(0, &TTTT_371_delayed_11_0)])), &(rdatak3));\
;

#define simple_memory__try1_assign_stmt_437_c_macro_ __declare_static_bit_vector(konst_435,12);\
bit_vector_clear(&konst_435);\
konst_435.val.byte_array[0] = 4;\
__declare_static_bit_vector(ADD_u12_u12_436,12);\
bit_vector_clear(&konst_435);\
konst_435.val.byte_array[0] = 4;\
bit_vector_plus( &(T), &(konst_435), &(ADD_u12_u12_436));\
bit_vector_cast_to_bit_vector(0, &(NT), &(ADD_u12_u12_436));\
;
;

#define simple_memory__try1_branch_block_stmt_343_c_export_apply_macro_ ;

#define simple_memory__try1_branch_block_stmt_443_c_export_decl_macro_ __declare_static_bit_vector(G,12);\
__declare_static_bit_vector(NG,12);\


#define simple_memory__try1_merge_stmt_444_c_preamble_macro_ uint8_t merge_stmt_444_entry_flag;\
merge_stmt_444_entry_flag = 1;\
uint8_t loopback_443_flag = 0;\
goto merge_stmt_444_run;\
loopback_443: loopback_443_flag = 1;\
goto merge_stmt_444_run;\
merge_stmt_444_run: ;\

#define simple_memory__try1_phi_stmt_445_c_macro_ __declare_static_bit_vector(konst_447,12);\
bit_vector_clear(&konst_447);\
__declare_static_bit_vector(type_cast_448,12);\
bit_vector_clear(&type_cast_448);\
if(loopback_443_flag) {\
bit_vector_cast_to_bit_vector(0, &(G), &(NG));\
}\
else {\
__declare_static_bit_vector(konst_447,12);\
bit_vector_clear(&konst_447);\
__declare_static_bit_vector(type_cast_448,12);\
bit_vector_clear(&type_cast_448);\
bit_vector_clear(&konst_447);\
bit_vector_bitcast_to_bit_vector( &(type_cast_448), &(konst_447));\
bit_vector_cast_to_bit_vector(0, &(G), &(type_cast_448));\
}\
;
;

#define simple_memory__try1_merge_stmt_444_c_postamble_macro_ loopback_443_flag = 0;\
merge_stmt_444_entry_flag = 0;

#define simple_memory__try1_assign_stmt_453_c_macro_ __declare_static_bit_vector(konst_452,16);\
bit_vector_clear(&konst_452);\
bit_vector_clear(&konst_452);\
bit_vector_cast_to_bit_vector(0, &(PJ), &(konst_452));\
;

#define simple_memory__try1_branch_block_stmt_454_c_export_decl_macro_ __declare_static_bit_vector(J,12);\
__declare_static_bit_vector(NJJ,31);\
__declare_static_bit_vector(NGG,32);\
__declare_static_bit_vector(NJJ_415_delayed_2_0,31);\
__declare_static_bit_vector(NNG,32);\
__declare_static_bit_vector(NGG_420_delayed_4_0,32);\
__declare_static_bit_vector(NNJ,32);\
__declare_static_bit_vector(rdatal,32);\
__declare_static_bit_vector(rdatah,32);\
__declare_static_bit_vector(rdatai1,16);\
__declare_static_bit_vector(rdatai0,16);\
__declare_static_bit_vector(PPJ,16);\
__declare_static_bit_vector(PJ_440_delayed_7_0,16);\
__declare_static_bit_vector(PPJ_444_delayed_6_0,16);\
__declare_static_bit_vector(rdatai3,16);\
__declare_static_bit_vector(rdatai2,16);\
__declare_static_bit_vector(PPPJ,16);\
__declare_static_bit_vector(PPPPJ,16);\
__declare_static_bit_vector(PPPJ_466_delayed_6_0,16);\
__declare_static_bit_vector(PPPPJ_470_delayed_6_0,16);\
__declare_static_bit_vector(NJ,12);\


#define simple_memory__try1_merge_stmt_456_c_preamble_macro_ uint8_t merge_stmt_456_entry_flag;\
merge_stmt_456_entry_flag = do_while_entry_flag;\
goto merge_stmt_456_run;\
merge_stmt_456_run: ;\

#define simple_memory__try1_phi_stmt_457_c_macro_ __declare_static_bit_vector(konst_459,12);\
bit_vector_clear(&konst_459);\
__declare_static_bit_vector(type_cast_460,12);\
bit_vector_clear(&type_cast_460);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(NJ));\
}\
else {\
__declare_static_bit_vector(konst_459,12);\
bit_vector_clear(&konst_459);\
__declare_static_bit_vector(type_cast_460,12);\
bit_vector_clear(&type_cast_460);\
bit_vector_clear(&konst_459);\
bit_vector_bitcast_to_bit_vector( &(type_cast_460), &(konst_459));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_460));\
}\
;
;

#define simple_memory__try1_merge_stmt_456_c_postamble_macro_ merge_stmt_456_entry_flag = 0;

#define simple_memory__try1_assign_stmt_466_c_macro_ __declare_static_bit_vector(type_cast_465,31);\
bit_vector_bitcast_to_bit_vector( &(type_cast_465), &(J));\
bit_vector_cast_to_bit_vector(0, &(NJJ), &(type_cast_465));\
;

#define simple_memory__try1_assign_stmt_470_c_macro_ __declare_static_bit_vector(type_cast_469,32);\
bit_vector_bitcast_to_bit_vector( &(type_cast_469), &(G));\
bit_vector_cast_to_bit_vector(0, &(NGG), &(type_cast_469));\
;

#define simple_memory__try1_assign_stmt_473_c_macro_ bit_vector_cast_to_bit_vector(0, &(NJJ_415_delayed_2_0), &(NJJ));\
;

#define simple_memory__try1_assign_stmt_478_c_macro_ __declare_static_bit_vector(CONCAT_u1_u32_477,32);\
bit_vector_concatenate( &(one), &(NJJ_415_delayed_2_0), &(CONCAT_u1_u32_477));\
bit_vector_cast_to_bit_vector(0, &(NNG), &(CONCAT_u1_u32_477));\
;

#define simple_memory__try1_assign_stmt_481_c_macro_ bit_vector_cast_to_bit_vector(0, &(NGG_420_delayed_4_0), &(NGG));\
;

#define simple_memory__try1_assign_stmt_486_c_macro_ __declare_static_bit_vector(ADD_u32_u32_485,32);\
bit_vector_plus( &(NNG), &(NGG_420_delayed_4_0), &(ADD_u32_u32_485));\
bit_vector_cast_to_bit_vector(0, &(NNJ), &(ADD_u32_u32_485));\
;

#define simple_memory__try1_call_stmt_490_c_macro_ _simple_memory_accMemAccessDaemon_( &(NNJ), &(rdatal), &(rdatah));\
;

#define simple_memory__try1_assign_stmt_494_c_macro_ __declare_static_bit_vector(slice_493,16);\
bit_vector_slice(&(rdatal), &(slice_493), 16);\
bit_vector_cast_to_bit_vector(0, &(rdatai1), &(slice_493));\
;

#define simple_memory__try1_assign_stmt_498_c_macro_ __declare_static_bit_vector(slice_497,16);\
bit_vector_slice(&(rdatal), &(slice_497), 0);\
bit_vector_cast_to_bit_vector(0, &(rdatai0), &(slice_497));\
;

#define simple_memory__try1_assign_stmt_503_c_macro_ __declare_static_bit_vector(konst_501,16);\
bit_vector_clear(&konst_501);\
konst_501.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u16_u16_502,16);\
bit_vector_clear(&konst_501);\
konst_501.val.byte_array[0] = 1;\
bit_vector_plus( &(PJ), &(konst_501), &(ADD_u16_u16_502));\
bit_vector_cast_to_bit_vector(0, &(PPJ), &(ADD_u16_u16_502));\
;

#define simple_memory__try1_assign_stmt_506_c_macro_ bit_vector_cast_to_bit_vector(0, &(PJ_440_delayed_7_0), &(PJ));\
;

#define simple_memory__try1_assign_stmt_510_c_macro_ bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &PJ_440_delayed_7_0)])), &(rdatai0));\
;

#define simple_memory__try1_assign_stmt_513_c_macro_ bit_vector_cast_to_bit_vector(0, &(PPJ_444_delayed_6_0), &(PPJ));\
;

#define simple_memory__try1_assign_stmt_517_c_macro_ bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &PPJ_444_delayed_6_0)])), &(rdatai1));\
;

#define simple_memory__try1_assign_stmt_521_c_macro_ __declare_static_bit_vector(slice_520,16);\
bit_vector_slice(&(rdatah), &(slice_520), 16);\
bit_vector_cast_to_bit_vector(0, &(rdatai3), &(slice_520));\
;

#define simple_memory__try1_assign_stmt_525_c_macro_ __declare_static_bit_vector(slice_524,16);\
bit_vector_slice(&(rdatah), &(slice_524), 0);\
bit_vector_cast_to_bit_vector(0, &(rdatai2), &(slice_524));\
;

#define simple_memory__try1_assign_stmt_530_c_macro_ __declare_static_bit_vector(konst_528,16);\
bit_vector_clear(&konst_528);\
konst_528.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u16_u16_529,16);\
bit_vector_clear(&konst_528);\
konst_528.val.byte_array[0] = 2;\
bit_vector_plus( &(PJ), &(konst_528), &(ADD_u16_u16_529));\
bit_vector_cast_to_bit_vector(0, &(PPPJ), &(ADD_u16_u16_529));\
;

#define simple_memory__try1_assign_stmt_535_c_macro_ __declare_static_bit_vector(konst_533,16);\
bit_vector_clear(&konst_533);\
konst_533.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u16_u16_534,16);\
bit_vector_clear(&konst_533);\
konst_533.val.byte_array[0] = 3;\
bit_vector_plus( &(PJ), &(konst_533), &(ADD_u16_u16_534));\
bit_vector_cast_to_bit_vector(0, &(PPPPJ), &(ADD_u16_u16_534));\
;

#define simple_memory__try1_assign_stmt_538_c_macro_ bit_vector_cast_to_bit_vector(0, &(PPPJ_466_delayed_6_0), &(PPPJ));\
;

#define simple_memory__try1_assign_stmt_542_c_macro_ bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &PPPJ_466_delayed_6_0)])), &(rdatai2));\
;

#define simple_memory__try1_assign_stmt_545_c_macro_ bit_vector_cast_to_bit_vector(0, &(PPPPJ_470_delayed_6_0), &(PPPPJ));\
;

#define simple_memory__try1_assign_stmt_549_c_macro_ bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &PPPPJ_470_delayed_6_0)])), &(rdatai3));\
;

#define simple_memory__try1_assign_stmt_554_c_macro_ __declare_static_bit_vector(konst_552,12);\
bit_vector_clear(&konst_552);\
konst_552.val.byte_array[0] = 32;\
__declare_static_bit_vector(ADD_u12_u12_553,12);\
bit_vector_clear(&konst_552);\
konst_552.val.byte_array[0] = 32;\
bit_vector_plus( &(J), &(konst_552), &(ADD_u12_u12_553));\
bit_vector_cast_to_bit_vector(0, &(NJ), &(ADD_u12_u12_553));\
;

#define simple_memory__try1_assign_stmt_559_c_macro_ __declare_static_bit_vector(konst_557,16);\
bit_vector_clear(&konst_557);\
konst_557.val.byte_array[0] = 4;\
__declare_static_bit_vector(ADD_u16_u16_558,16);\
bit_vector_clear(&konst_557);\
konst_557.val.byte_array[0] = 4;\
bit_vector_plus( &(PJ), &(konst_557), &(ADD_u16_u16_558));\
bit_vector_cast_to_bit_vector(0, &(PJ), &(ADD_u16_u16_558));\
;
;

#define simple_memory__try1_branch_block_stmt_454_c_export_apply_macro_ ;

#define simple_memory__try1_branch_block_stmt_565_c_export_decl_macro_ __declare_static_bit_vector(L,12);\
__declare_static_bit_vector(rdata,64);\
__declare_static_bit_vector(f,16);\
__declare_static_bit_vector(rdatar,64);\
__declare_static_bit_vector(NL,12);\


#define simple_memory__try1_merge_stmt_566_c_preamble_macro_ uint8_t merge_stmt_566_entry_flag;\
merge_stmt_566_entry_flag = 1;\
uint8_t loopback_565_flag = 0;\
goto merge_stmt_566_run;\
loopback_565: loopback_565_flag = 1;\
goto merge_stmt_566_run;\
merge_stmt_566_run: ;\

#define simple_memory__try1_phi_stmt_567_c_macro_ __declare_static_bit_vector(konst_569,12);\
bit_vector_clear(&konst_569);\
__declare_static_bit_vector(type_cast_570,12);\
bit_vector_clear(&type_cast_570);\
if(loopback_565_flag) {\
bit_vector_cast_to_bit_vector(0, &(L), &(NL));\
}\
else {\
__declare_static_bit_vector(konst_569,12);\
bit_vector_clear(&konst_569);\
__declare_static_bit_vector(type_cast_570,12);\
bit_vector_clear(&type_cast_570);\
bit_vector_clear(&konst_569);\
bit_vector_bitcast_to_bit_vector( &(type_cast_570), &(konst_569));\
bit_vector_cast_to_bit_vector(0, &(L), &(type_cast_570));\
}\
;
;

#define simple_memory__try1_merge_stmt_566_c_postamble_macro_ loopback_565_flag = 0;\
merge_stmt_566_entry_flag = 0;

#define simple_memory__try1_assign_stmt_575_c_macro_ __declare_static_bit_vector(konst_574,16);\
bit_vector_clear(&konst_574);\
bit_vector_clear(&konst_574);\
bit_vector_cast_to_bit_vector(0, &(total), &(konst_574));\
;

#define simple_memory__try1_branch_block_stmt_576_c_export_decl_macro_ __declare_static_bit_vector(K,32);\
__declare_static_bit_vector(imag1,16);\
__declare_static_bit_vector(ker1,16);\
__declare_static_bit_vector(K_517_delayed_5_0,32);\
__declare_static_bit_vector(NK,32);\


#define simple_memory__try1_merge_stmt_578_c_preamble_macro_ uint8_t merge_stmt_578_entry_flag;\
merge_stmt_578_entry_flag = do_while_entry_flag;\
goto merge_stmt_578_run;\
merge_stmt_578_run: ;\

#define simple_memory__try1_phi_stmt_579_c_macro_ __declare_static_bit_vector(konst_581,32);\
bit_vector_clear(&konst_581);\
__declare_static_bit_vector(type_cast_582,32);\
bit_vector_clear(&type_cast_582);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(K), &(NK));\
}\
else {\
__declare_static_bit_vector(konst_581,32);\
bit_vector_clear(&konst_581);\
__declare_static_bit_vector(type_cast_582,32);\
bit_vector_clear(&type_cast_582);\
bit_vector_clear(&konst_581);\
bit_vector_bitcast_to_bit_vector( &(type_cast_582), &(konst_581));\
bit_vector_cast_to_bit_vector(0, &(K), &(type_cast_582));\
}\
;
;

#define simple_memory__try1_merge_stmt_578_c_postamble_macro_ merge_stmt_578_entry_flag = 0;

#define simple_memory__try1_assign_stmt_588_c_macro_ bit_vector_cast_to_bit_vector(0, &(imag1), &((image[bit_vector_to_uint64(0, &K)])));\
;

#define simple_memory__try1_assign_stmt_592_c_macro_ bit_vector_cast_to_bit_vector(0, &(ker1), &((kernel[bit_vector_to_uint64(0, &K)])));\
;

#define simple_memory__try1_assign_stmt_595_c_macro_ bit_vector_cast_to_bit_vector(0, &(K_517_delayed_5_0), &(K));\
;

#define simple_memory__try1_assign_stmt_601_c_macro_ __declare_static_bit_vector(MUL_u16_u16_600,16);\
bit_vector_mul( &(imag1), &(ker1), &(MUL_u16_u16_600));\
bit_vector_cast_to_bit_vector(0, &((a[bit_vector_to_uint64(0, &K_517_delayed_5_0)])), &(MUL_u16_u16_600));\
;

#define simple_memory__try1_assign_stmt_607_c_macro_ __declare_static_bit_vector(ADD_u16_u16_606,16);\
bit_vector_plus( &(total), &((a[bit_vector_to_uint64(0, &K)])), &(ADD_u16_u16_606));\
bit_vector_cast_to_bit_vector(0, &(total), &(ADD_u16_u16_606));\
;

#define simple_memory__try1_assign_stmt_612_c_macro_ __declare_static_bit_vector(konst_610,32);\
bit_vector_clear(&konst_610);\
konst_610.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u32_u32_611,32);\
bit_vector_clear(&konst_610);\
konst_610.val.byte_array[0] = 1;\
bit_vector_plus( &(K), &(konst_610), &(ADD_u32_u32_611));\
bit_vector_cast_to_bit_vector(0, &(NK), &(ADD_u32_u32_611));\
;
;

#define simple_memory__try1_branch_block_stmt_576_c_export_apply_macro_ ;

#define simple_memory__try1_call_stmt_624_c_macro_ __declare_static_bit_vector(konst_618,1);\
bit_vector_clear(&konst_618);\
__declare_static_bit_vector(ADD_u12_u12_621,12);\
bit_vector_clear(&konst_618);\
bit_vector_plus( &(L), &(G), &(ADD_u12_u12_621));\
_simple_memory_accessMem_( &(konst_618),  &(ADD_u12_u12_621),  &(total), &(rdata));\
;

#define simple_memory__try1_assign_stmt_631_c_macro_ __declare_static_bit_vector(ADD_u12_u12_629,12);\
__declare_static_bit_vector(CONCAT_u4_u16_630,16);\
bit_vector_plus( &(L), &(G), &(ADD_u12_u12_629));\
bit_vector_concatenate( &(zer), &(ADD_u12_u12_629), &(CONCAT_u4_u16_630));\
bit_vector_cast_to_bit_vector(0, &(f), &(CONCAT_u4_u16_630));\
;

#define simple_memory__try1_assign_stmt_634_c_macro_ write_bit_vector_to_pipe("acc_mem_add",&(f));\
;

#define simple_memory__try1_assign_stmt_638_c_macro_ write_bit_vector_to_pipe("acc_mem",&((mem_array[bit_vector_to_uint64(0, &f)])));\
;

#define simple_memory__try1_branch_block_stmt_639_c_export_decl_macro_ __declare_static_bit_vector(H,12);\
__declare_static_bit_vector(HH,12);\
__declare_static_bit_vector(H_574_delayed_5_0,12);\
__declare_static_bit_vector(HHH,12);\
__declare_static_bit_vector(HH_584_delayed_4_0,12);\
__declare_static_bit_vector(HHHH,12);\
__declare_static_bit_vector(HHH_594_delayed_4_0,12);\
__declare_static_bit_vector(NH,12);\


#define simple_memory__try1_merge_stmt_641_c_preamble_macro_ uint8_t merge_stmt_641_entry_flag;\
merge_stmt_641_entry_flag = do_while_entry_flag;\
goto merge_stmt_641_run;\
merge_stmt_641_run: ;\

#define simple_memory__try1_phi_stmt_642_c_macro_ __declare_static_bit_vector(konst_644,12);\
bit_vector_clear(&konst_644);\
__declare_static_bit_vector(type_cast_645,12);\
bit_vector_clear(&type_cast_645);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(H), &(NH));\
}\
else {\
__declare_static_bit_vector(konst_644,12);\
bit_vector_clear(&konst_644);\
__declare_static_bit_vector(type_cast_645,12);\
bit_vector_clear(&type_cast_645);\
bit_vector_clear(&konst_644);\
bit_vector_bitcast_to_bit_vector( &(type_cast_645), &(konst_644));\
bit_vector_cast_to_bit_vector(0, &(H), &(type_cast_645));\
}\
;
;

#define simple_memory__try1_merge_stmt_641_c_postamble_macro_ merge_stmt_641_entry_flag = 0;

#define simple_memory__try1_assign_stmt_652_c_macro_ __declare_static_bit_vector(konst_650,12);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u12_u12_651,12);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 1;\
bit_vector_plus( &(H), &(konst_650), &(ADD_u12_u12_651));\
bit_vector_cast_to_bit_vector(0, &(HH), &(ADD_u12_u12_651));\
;

#define simple_memory__try1_assign_stmt_655_c_macro_ bit_vector_cast_to_bit_vector(0, &(H_574_delayed_5_0), &(H));\
;

#define simple_memory__try1_assign_stmt_660_c_macro_ bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &H_574_delayed_5_0)])), &((image[bit_vector_to_uint64(0, &HH)])));\
;

#define simple_memory__try1_assign_stmt_665_c_macro_ __declare_static_bit_vector(konst_663,12);\
bit_vector_clear(&konst_663);\
konst_663.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u12_u12_664,12);\
bit_vector_clear(&konst_663);\
konst_663.val.byte_array[0] = 2;\
bit_vector_plus( &(H), &(konst_663), &(ADD_u12_u12_664));\
bit_vector_cast_to_bit_vector(0, &(HHH), &(ADD_u12_u12_664));\
;

#define simple_memory__try1_assign_stmt_668_c_macro_ bit_vector_cast_to_bit_vector(0, &(HH_584_delayed_4_0), &(HH));\
;

#define simple_memory__try1_assign_stmt_673_c_macro_ bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &HH_584_delayed_4_0)])), &((image[bit_vector_to_uint64(0, &HHH)])));\
;

#define simple_memory__try1_assign_stmt_678_c_macro_ __declare_static_bit_vector(konst_676,12);\
bit_vector_clear(&konst_676);\
konst_676.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u12_u12_677,12);\
bit_vector_clear(&konst_676);\
konst_676.val.byte_array[0] = 3;\
bit_vector_plus( &(H), &(konst_676), &(ADD_u12_u12_677));\
bit_vector_cast_to_bit_vector(0, &(HHHH), &(ADD_u12_u12_677));\
;

#define simple_memory__try1_assign_stmt_681_c_macro_ bit_vector_cast_to_bit_vector(0, &(HHH_594_delayed_4_0), &(HHH));\
;

#define simple_memory__try1_assign_stmt_686_c_macro_ bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &HHH_594_delayed_4_0)])), &((image[bit_vector_to_uint64(0, &HHHH)])));\
;

#define simple_memory__try1_assign_stmt_691_c_macro_ __declare_static_bit_vector(konst_689,12);\
bit_vector_clear(&konst_689);\
konst_689.val.byte_array[0] = 4;\
__declare_static_bit_vector(ADD_u12_u12_690,12);\
bit_vector_clear(&konst_689);\
konst_689.val.byte_array[0] = 4;\
bit_vector_plus( &(H), &(konst_689), &(ADD_u12_u12_690));\
bit_vector_cast_to_bit_vector(0, &(NH), &(ADD_u12_u12_690));\
;
;

#define simple_memory__try1_branch_block_stmt_639_c_export_apply_macro_ ;

#define simple_memory__try1_call_stmt_705_c_macro_ __declare_static_bit_vector(konst_697,1);\
bit_vector_clear(&konst_697);\
konst_697.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u12_u12_700,12);\
__declare_static_bit_vector(konst_701,12);\
bit_vector_clear(&konst_701);\
konst_701.val.byte_array[0] = 4;\
__declare_static_bit_vector(ADD_u12_u12_702,12);\
__declare_static_bit_vector(konst_703,16);\
bit_vector_clear(&konst_703);\
bit_vector_clear(&konst_697);\
konst_697.val.byte_array[0] = 1;\
bit_vector_plus( &(L), &(G), &(ADD_u12_u12_700));\
bit_vector_clear(&konst_701);\
konst_701.val.byte_array[0] = 4;\
bit_vector_plus( &(ADD_u12_u12_700), &(konst_701), &(ADD_u12_u12_702));\
bit_vector_clear(&konst_703);\
_simple_memory_accessMem_v_( &(konst_697),  &(ADD_u12_u12_702),  &(konst_703), &(rdatar));\
;

#define simple_memory__try1_assign_stmt_710_c_macro_ __declare_static_bit_vector(slice_709,16);\
bit_vector_slice(&(rdatar), &(slice_709), 48);\
__declare_static_bit_vector(konst_706,32);\
bit_vector_clear(&konst_706);\
konst_706.val.byte_array[0] = 15;\
bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &konst_706)])), &(slice_709));\
;

#define simple_memory__try1_assign_stmt_715_c_macro_ __declare_static_bit_vector(slice_714,16);\
bit_vector_slice(&(rdatar), &(slice_714), 32);\
__declare_static_bit_vector(konst_711,32);\
bit_vector_clear(&konst_711);\
konst_711.val.byte_array[0] = 11;\
bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &konst_711)])), &(slice_714));\
;

#define simple_memory__try1_assign_stmt_720_c_macro_ __declare_static_bit_vector(slice_719,16);\
bit_vector_slice(&(rdatar), &(slice_719), 16);\
__declare_static_bit_vector(konst_716,32);\
bit_vector_clear(&konst_716);\
konst_716.val.byte_array[0] = 7;\
bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &konst_716)])), &(slice_719));\
;

#define simple_memory__try1_assign_stmt_725_c_macro_ __declare_static_bit_vector(slice_724,16);\
bit_vector_slice(&(rdatar), &(slice_724), 0);\
__declare_static_bit_vector(konst_721,32);\
bit_vector_clear(&konst_721);\
konst_721.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &((image[bit_vector_to_uint64(0, &konst_721)])), &(slice_724));\
;

#define simple_memory__try1_assign_stmt_730_c_macro_ __declare_static_bit_vector(konst_728,12);\
bit_vector_clear(&konst_728);\
konst_728.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u12_u12_729,12);\
bit_vector_clear(&konst_728);\
konst_728.val.byte_array[0] = 1;\
bit_vector_plus( &(L), &(konst_728), &(ADD_u12_u12_729));\
bit_vector_cast_to_bit_vector(0, &(NL), &(ADD_u12_u12_729));\
;
;

#define simple_memory__try1_branch_block_stmt_565_c_export_apply_macro_ ;

#define simple_memory__try1_assign_stmt_742_c_macro_ __declare_static_bit_vector(konst_740,12);\
bit_vector_clear(&konst_740);\
konst_740.val.byte_array[0] = 32;\
__declare_static_bit_vector(ADD_u12_u12_741,12);\
bit_vector_clear(&konst_740);\
konst_740.val.byte_array[0] = 32;\
bit_vector_plus( &(G), &(konst_740), &(ADD_u12_u12_741));\
bit_vector_cast_to_bit_vector(0, &(NG), &(ADD_u12_u12_741));\
;
;

#define simple_memory__try1_branch_block_stmt_443_c_export_apply_macro_ ;

#define simple_memory__try1_inner_outarg_prep_macro__ ;

#define simple_memory__try1_outer_arg_decl_macro__ ;

#define simple_memory__try1_outer_op_xfer_macro__ ;
