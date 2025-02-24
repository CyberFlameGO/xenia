// Generated with `xb buildshaders`.
#if 0
; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 10
; Bound: 25179
; Schema: 0
               OpCapability Shader
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint GLCompute %5663 "main" %gl_GlobalInvocationID
               OpExecutionMode %5663 LocalSize 4 32 1
               OpMemberDecorate %_struct_1161 0 Offset 0
               OpMemberDecorate %_struct_1161 1 Offset 4
               OpMemberDecorate %_struct_1161 2 Offset 8
               OpMemberDecorate %_struct_1161 3 Offset 12
               OpMemberDecorate %_struct_1161 4 Offset 16
               OpMemberDecorate %_struct_1161 5 Offset 28
               OpMemberDecorate %_struct_1161 6 Offset 32
               OpMemberDecorate %_struct_1161 7 Offset 36
               OpDecorate %_struct_1161 Block
               OpDecorate %5245 DescriptorSet 2
               OpDecorate %5245 Binding 0
               OpDecorate %gl_GlobalInvocationID BuiltIn GlobalInvocationId
               OpDecorate %_runtimearr_v4uint ArrayStride 16
               OpMemberDecorate %_struct_1972 0 NonWritable
               OpMemberDecorate %_struct_1972 0 Offset 0
               OpDecorate %_struct_1972 BufferBlock
               OpDecorate %4218 DescriptorSet 1
               OpDecorate %4218 Binding 0
               OpDecorate %_runtimearr_v4uint_0 ArrayStride 16
               OpMemberDecorate %_struct_1973 0 NonReadable
               OpMemberDecorate %_struct_1973 0 Offset 0
               OpDecorate %_struct_1973 BufferBlock
               OpDecorate %5134 DescriptorSet 0
               OpDecorate %5134 Binding 0
               OpDecorate %gl_WorkGroupSize BuiltIn WorkgroupSize
       %void = OpTypeVoid
       %1282 = OpTypeFunction %void
       %uint = OpTypeInt 32 0
     %v4uint = OpTypeVector %uint 4
        %int = OpTypeInt 32 1
      %v2int = OpTypeVector %int 2
      %v3int = OpTypeVector %int 3
       %bool = OpTypeBool
     %v3uint = OpTypeVector %uint 3
     %v2uint = OpTypeVector %uint 2
%uint_1048575 = OpConstant %uint 1048575
    %uint_20 = OpConstant %uint 20
     %v4bool = OpTypeVector %bool 4
     %uint_0 = OpConstant %uint 0
       %2896 = OpConstantComposite %v4uint %uint_0 %uint_0 %uint_0 %uint_0
        %965 = OpConstantComposite %v4uint %uint_20 %uint_20 %uint_20 %uint_20
      %v4int = OpTypeVector %int 4
     %uint_1 = OpConstant %uint 1
   %uint_112 = OpConstant %uint 112
    %uint_23 = OpConstant %uint 23
     %uint_3 = OpConstant %uint 3
     %uint_2 = OpConstant %uint 2
%uint_16711935 = OpConstant %uint 16711935
     %uint_8 = OpConstant %uint 8
%uint_4278255360 = OpConstant %uint 4278255360
    %uint_16 = OpConstant %uint 16
      %int_5 = OpConstant %int 5
     %uint_5 = OpConstant %uint 5
      %int_7 = OpConstant %int 7
     %int_14 = OpConstant %int 14
      %int_2 = OpConstant %int 2
    %int_n16 = OpConstant %int -16
      %int_1 = OpConstant %int 1
     %int_15 = OpConstant %int 15
      %int_4 = OpConstant %int 4
   %int_n512 = OpConstant %int -512
      %int_3 = OpConstant %int 3
     %int_16 = OpConstant %int 16
    %int_448 = OpConstant %int 448
      %int_8 = OpConstant %int 8
      %int_6 = OpConstant %int 6
     %int_63 = OpConstant %int 63
     %uint_4 = OpConstant %uint 4
     %uint_6 = OpConstant %uint 6
%int_268435455 = OpConstant %int 268435455
     %int_n2 = OpConstant %int -2
    %uint_32 = OpConstant %uint 32
%_struct_1161 = OpTypeStruct %uint %uint %uint %uint %v3uint %uint %uint %uint
%_ptr_Uniform__struct_1161 = OpTypePointer Uniform %_struct_1161
       %5245 = OpVariable %_ptr_Uniform__struct_1161 Uniform
      %int_0 = OpConstant %int 0
%_ptr_Uniform_uint = OpTypePointer Uniform %uint
       %1915 = OpConstantComposite %v2uint %uint_4 %uint_6
%_ptr_Uniform_v3uint = OpTypePointer Uniform %v3uint
%_ptr_Input_v3uint = OpTypePointer Input %v3uint
%gl_GlobalInvocationID = OpVariable %_ptr_Input_v3uint Input
       %2603 = OpConstantComposite %v3uint %uint_3 %uint_0 %uint_0
     %v2bool = OpTypeVector %bool 2
%_runtimearr_v4uint = OpTypeRuntimeArray %v4uint
%_struct_1972 = OpTypeStruct %_runtimearr_v4uint
%_ptr_Uniform__struct_1972 = OpTypePointer Uniform %_struct_1972
       %4218 = OpVariable %_ptr_Uniform__struct_1972 Uniform
%_ptr_Uniform_v4uint = OpTypePointer Uniform %v4uint
%_runtimearr_v4uint_0 = OpTypeRuntimeArray %v4uint
%_struct_1973 = OpTypeStruct %_runtimearr_v4uint_0
%_ptr_Uniform__struct_1973 = OpTypePointer Uniform %_struct_1973
       %5134 = OpVariable %_ptr_Uniform__struct_1973 Uniform
%gl_WorkGroupSize = OpConstantComposite %v3uint %uint_4 %uint_32 %uint_1
       %1870 = OpConstantComposite %v2uint %uint_3 %uint_3
     %uint_9 = OpConstant %uint 9
       %2510 = OpConstantComposite %v4uint %uint_16711935 %uint_16711935 %uint_16711935 %uint_16711935
        %317 = OpConstantComposite %v4uint %uint_8 %uint_8 %uint_8 %uint_8
       %1838 = OpConstantComposite %v4uint %uint_4278255360 %uint_4278255360 %uint_4278255360 %uint_4278255360
        %749 = OpConstantComposite %v4uint %uint_16 %uint_16 %uint_16 %uint_16
       %1080 = OpConstantComposite %v4uint %uint_1048575 %uint_1048575 %uint_1048575 %uint_1048575
       %2922 = OpConstantComposite %v4uint %uint_112 %uint_112 %uint_112 %uint_112
       %1127 = OpConstantComposite %v4uint %uint_23 %uint_23 %uint_23 %uint_23
         %47 = OpConstantComposite %v4uint %uint_3 %uint_3 %uint_3 %uint_3
%uint_4294967277 = OpConstant %uint 4294967277
       %1871 = OpConstantComposite %v4uint %uint_4294967277 %uint_4294967277 %uint_4294967277 %uint_4294967277
       %5663 = OpFunction %void None %1282
      %15110 = OpLabel
               OpSelectionMerge %19578 None
               OpSwitch %uint_0 %15137
      %15137 = OpLabel
      %12591 = OpLoad %v3uint %gl_GlobalInvocationID
      %10229 = OpShiftLeftLogical %v3uint %12591 %2603
      %25178 = OpAccessChain %_ptr_Uniform_v3uint %5245 %int_4
      %22965 = OpLoad %v3uint %25178
      %18835 = OpVectorShuffle %v2uint %10229 %10229 0 1
       %6626 = OpVectorShuffle %v2uint %22965 %22965 0 1
      %17032 = OpUGreaterThanEqual %v2bool %18835 %6626
      %24679 = OpAny %bool %17032
               OpSelectionMerge %6282 DontFlatten
               OpBranchConditional %24679 %21992 %6282
      %21992 = OpLabel
               OpBranch %19578
       %6282 = OpLabel
       %6795 = OpBitcast %v3int %10229
      %18792 = OpAccessChain %_ptr_Uniform_uint %5245 %int_6
       %9788 = OpLoad %uint %18792
      %20376 = OpCompositeExtract %uint %22965 1
      %14692 = OpCompositeExtract %int %6795 0
      %22810 = OpIMul %int %14692 %int_4
       %6362 = OpCompositeExtract %int %6795 2
      %14505 = OpBitcast %int %20376
      %11279 = OpIMul %int %6362 %14505
      %17598 = OpCompositeExtract %int %6795 1
      %22228 = OpIAdd %int %11279 %17598
      %22405 = OpBitcast %int %9788
      %24535 = OpIMul %int %22228 %22405
       %7061 = OpIAdd %int %22810 %24535
      %19270 = OpBitcast %uint %7061
      %19460 = OpAccessChain %_ptr_Uniform_uint %5245 %int_5
      %22875 = OpLoad %uint %19460
       %8517 = OpIAdd %uint %19270 %22875
      %21670 = OpShiftRightLogical %uint %8517 %uint_4
      %18404 = OpAccessChain %_ptr_Uniform_uint %5245 %int_1
      %23432 = OpLoad %uint %18404
      %22700 = OpAccessChain %_ptr_Uniform_uint %5245 %int_0
      %20387 = OpLoad %uint %22700
      %22279 = OpBitwiseAnd %uint %20387 %uint_2
      %19223 = OpINotEqual %bool %22279 %uint_0
      %17247 = OpCompositeConstruct %v2uint %20387 %20387
      %22947 = OpShiftRightLogical %v2uint %17247 %1915
       %6551 = OpBitwiseAnd %v2uint %22947 %1870
      %18732 = OpAccessChain %_ptr_Uniform_uint %5245 %int_2
      %24236 = OpLoad %uint %18732
      %20458 = OpAccessChain %_ptr_Uniform_uint %5245 %int_3
      %22167 = OpLoad %uint %20458
      %18929 = OpCompositeExtract %uint %10229 0
       %6638 = OpShiftRightLogical %uint %18929 %uint_2
       %9988 = OpCompositeExtract %uint %10229 1
      %23563 = OpCompositeConstruct %v2uint %6638 %9988
       %8041 = OpUDiv %v2uint %23563 %6551
      %13932 = OpCompositeExtract %uint %8041 0
      %19789 = OpShiftLeftLogical %uint %13932 %uint_2
      %20905 = OpCompositeExtract %uint %8041 1
      %23022 = OpCompositeExtract %uint %10229 2
       %9417 = OpCompositeConstruct %v3uint %19789 %20905 %23022
               OpSelectionMerge %21313 DontFlatten
               OpBranchConditional %19223 %21373 %11737
      %21373 = OpLabel
      %10608 = OpBitcast %v3int %9417
      %17090 = OpCompositeExtract %int %10608 1
       %9469 = OpShiftRightArithmetic %int %17090 %int_4
      %10055 = OpCompositeExtract %int %10608 2
      %16476 = OpShiftRightArithmetic %int %10055 %int_2
      %23373 = OpShiftRightLogical %uint %22167 %uint_4
       %6314 = OpBitcast %int %23373
      %21281 = OpIMul %int %16476 %6314
      %15143 = OpIAdd %int %9469 %21281
       %9032 = OpShiftRightLogical %uint %24236 %uint_5
      %12427 = OpBitcast %int %9032
      %10360 = OpIMul %int %15143 %12427
      %25154 = OpCompositeExtract %int %10608 0
      %20423 = OpShiftRightArithmetic %int %25154 %int_5
      %18940 = OpIAdd %int %20423 %10360
       %8797 = OpShiftLeftLogical %int %18940 %uint_8
      %11510 = OpBitwiseAnd %int %8797 %int_268435455
      %18938 = OpShiftLeftLogical %int %11510 %int_1
      %19768 = OpBitwiseAnd %int %25154 %int_7
      %12600 = OpBitwiseAnd %int %17090 %int_6
      %17741 = OpShiftLeftLogical %int %12600 %int_2
      %17227 = OpIAdd %int %19768 %17741
       %7048 = OpShiftLeftLogical %int %17227 %uint_8
      %24035 = OpShiftRightArithmetic %int %7048 %int_6
       %8725 = OpShiftRightArithmetic %int %17090 %int_3
      %13731 = OpIAdd %int %8725 %16476
      %23052 = OpBitwiseAnd %int %13731 %int_1
      %16658 = OpShiftRightArithmetic %int %25154 %int_3
      %18794 = OpShiftLeftLogical %int %23052 %int_1
      %13501 = OpIAdd %int %16658 %18794
      %19165 = OpBitwiseAnd %int %13501 %int_3
      %21578 = OpShiftLeftLogical %int %19165 %int_1
      %15435 = OpIAdd %int %23052 %21578
      %13150 = OpBitwiseAnd %int %24035 %int_n16
      %20336 = OpIAdd %int %18938 %13150
      %23345 = OpShiftLeftLogical %int %20336 %int_1
      %23274 = OpBitwiseAnd %int %24035 %int_15
      %10332 = OpIAdd %int %23345 %23274
      %18356 = OpBitwiseAnd %int %10055 %int_3
      %21579 = OpShiftLeftLogical %int %18356 %uint_8
      %16727 = OpIAdd %int %10332 %21579
      %19166 = OpBitwiseAnd %int %17090 %int_1
      %21580 = OpShiftLeftLogical %int %19166 %int_4
      %16728 = OpIAdd %int %16727 %21580
      %20438 = OpBitwiseAnd %int %15435 %int_1
       %9987 = OpShiftLeftLogical %int %20438 %int_3
      %13106 = OpShiftRightArithmetic %int %16728 %int_6
      %14038 = OpBitwiseAnd %int %13106 %int_7
      %13330 = OpIAdd %int %9987 %14038
      %23346 = OpShiftLeftLogical %int %13330 %int_3
      %23217 = OpBitwiseAnd %int %15435 %int_n2
      %10908 = OpIAdd %int %23346 %23217
      %23347 = OpShiftLeftLogical %int %10908 %int_2
      %23218 = OpBitwiseAnd %int %16728 %int_n512
      %10909 = OpIAdd %int %23347 %23218
      %23348 = OpShiftLeftLogical %int %10909 %int_3
      %21849 = OpBitwiseAnd %int %16728 %int_63
      %24314 = OpIAdd %int %23348 %21849
      %22127 = OpBitcast %uint %24314
               OpBranch %21313
      %11737 = OpLabel
       %9761 = OpVectorShuffle %v2uint %9417 %9417 0 1
      %22991 = OpBitcast %v2int %9761
       %6403 = OpCompositeExtract %int %22991 0
       %9470 = OpShiftRightArithmetic %int %6403 %int_5
      %10056 = OpCompositeExtract %int %22991 1
      %16477 = OpShiftRightArithmetic %int %10056 %int_5
      %23374 = OpShiftRightLogical %uint %24236 %uint_5
       %6315 = OpBitcast %int %23374
      %21319 = OpIMul %int %16477 %6315
      %16222 = OpIAdd %int %9470 %21319
      %19086 = OpShiftLeftLogical %int %16222 %uint_9
      %10934 = OpBitwiseAnd %int %6403 %int_7
      %12601 = OpBitwiseAnd %int %10056 %int_14
      %17742 = OpShiftLeftLogical %int %12601 %int_2
      %17303 = OpIAdd %int %10934 %17742
       %6375 = OpShiftLeftLogical %int %17303 %uint_2
      %10161 = OpBitwiseAnd %int %6375 %int_n16
      %12150 = OpShiftLeftLogical %int %10161 %int_1
      %15436 = OpIAdd %int %19086 %12150
      %13207 = OpBitwiseAnd %int %6375 %int_15
      %19760 = OpIAdd %int %15436 %13207
      %18357 = OpBitwiseAnd %int %10056 %int_1
      %21581 = OpShiftLeftLogical %int %18357 %int_4
      %16729 = OpIAdd %int %19760 %21581
      %20514 = OpBitwiseAnd %int %16729 %int_n512
       %9238 = OpShiftLeftLogical %int %20514 %int_3
      %18995 = OpBitwiseAnd %int %10056 %int_16
      %12151 = OpShiftLeftLogical %int %18995 %int_7
      %16730 = OpIAdd %int %9238 %12151
      %19167 = OpBitwiseAnd %int %16729 %int_448
      %21582 = OpShiftLeftLogical %int %19167 %int_2
      %16708 = OpIAdd %int %16730 %21582
      %20611 = OpBitwiseAnd %int %10056 %int_8
      %16831 = OpShiftRightArithmetic %int %20611 %int_2
       %7916 = OpShiftRightArithmetic %int %6403 %int_3
      %13750 = OpIAdd %int %16831 %7916
      %21587 = OpBitwiseAnd %int %13750 %int_3
      %21583 = OpShiftLeftLogical %int %21587 %int_6
      %15437 = OpIAdd %int %16708 %21583
      %11782 = OpBitwiseAnd %int %16729 %int_63
      %14671 = OpIAdd %int %15437 %11782
      %22128 = OpBitcast %uint %14671
               OpBranch %21313
      %21313 = OpLabel
       %9468 = OpPhi %uint %22127 %21373 %22128 %11737
      %16296 = OpIMul %v2uint %8041 %6551
      %15292 = OpISub %v2uint %23563 %16296
       %7303 = OpCompositeExtract %uint %6551 0
      %22882 = OpCompositeExtract %uint %6551 1
      %13170 = OpIMul %uint %7303 %22882
      %15520 = OpIMul %uint %9468 %13170
      %16084 = OpCompositeExtract %uint %15292 0
      %15890 = OpIMul %uint %16084 %22882
       %6886 = OpCompositeExtract %uint %15292 1
      %11045 = OpIAdd %uint %15890 %6886
      %24733 = OpShiftLeftLogical %uint %11045 %uint_2
      %23219 = OpBitwiseAnd %uint %18929 %uint_3
       %9559 = OpIAdd %uint %24733 %23219
      %16557 = OpShiftLeftLogical %uint %9559 %uint_2
      %20138 = OpIAdd %uint %15520 %16557
      %17724 = OpIAdd %uint %23432 %20138
      %14040 = OpShiftRightLogical %uint %17724 %uint_4
      %11766 = OpShiftRightLogical %uint %20387 %uint_2
       %8394 = OpBitwiseAnd %uint %11766 %uint_3
      %20727 = OpAccessChain %_ptr_Uniform_v4uint %4218 %int_0 %14040
       %8142 = OpLoad %v4uint %20727
      %13760 = OpIEqual %bool %8394 %uint_1
      %21366 = OpIEqual %bool %8394 %uint_2
      %22150 = OpLogicalOr %bool %13760 %21366
               OpSelectionMerge %13411 None
               OpBranchConditional %22150 %10583 %13411
      %10583 = OpLabel
      %18271 = OpBitwiseAnd %v4uint %8142 %2510
       %9425 = OpShiftLeftLogical %v4uint %18271 %317
      %20652 = OpBitwiseAnd %v4uint %8142 %1838
      %17549 = OpShiftRightLogical %v4uint %20652 %317
      %16376 = OpBitwiseOr %v4uint %9425 %17549
               OpBranch %13411
      %13411 = OpLabel
      %22649 = OpPhi %v4uint %8142 %21313 %16376 %10583
      %19638 = OpIEqual %bool %8394 %uint_3
      %15139 = OpLogicalOr %bool %21366 %19638
               OpSelectionMerge %13867 None
               OpBranchConditional %15139 %11064 %13867
      %11064 = OpLabel
      %24087 = OpShiftLeftLogical %v4uint %22649 %749
      %15335 = OpShiftRightLogical %v4uint %22649 %749
      %10728 = OpBitwiseOr %v4uint %24087 %15335
               OpBranch %13867
      %13867 = OpLabel
      %19124 = OpPhi %v4uint %22649 %13411 %10728 %11064
       %7000 = OpShiftRightLogical %v4uint %19124 %317
      %12837 = OpBitwiseAnd %v4uint %7000 %1080
      %22636 = OpShiftRightLogical %v4uint %7000 %965
      %16585 = OpIEqual %v4bool %22636 %2896
      %11339 = OpExtInst %v4int %1 FindUMsb %12837
      %10773 = OpBitcast %v4uint %11339
       %6266 = OpISub %v4uint %965 %10773
       %8720 = OpIAdd %v4uint %10773 %1871
      %10351 = OpSelect %v4uint %16585 %8720 %22636
      %23252 = OpShiftLeftLogical %v4uint %12837 %6266
      %18842 = OpBitwiseAnd %v4uint %23252 %1080
      %10910 = OpSelect %v4uint %16585 %18842 %12837
      %24569 = OpIAdd %v4uint %10351 %2922
      %20351 = OpShiftLeftLogical %v4uint %24569 %1127
      %16294 = OpShiftLeftLogical %v4uint %10910 %47
      %22396 = OpBitwiseOr %v4uint %20351 %16294
      %12703 = OpIEqual %v4bool %7000 %2896
      %24661 = OpSelect %v4uint %12703 %2896 %22396
       %8770 = OpAccessChain %_ptr_Uniform_v4uint %5134 %int_0 %21670
               OpStore %8770 %24661
      %15532 = OpIAdd %uint %21670 %int_1
       %6417 = OpUGreaterThan %bool %7303 %uint_1
               OpSelectionMerge %24764 DontFlatten
               OpBranchConditional %6417 %20612 %20628
      %20612 = OpLabel
      %13975 = OpUDiv %uint %6638 %7303
       %9086 = OpIMul %uint %13975 %7303
      %12657 = OpISub %uint %6638 %9086
       %9511 = OpIAdd %uint %12657 %uint_1
      %13375 = OpIEqual %bool %9511 %7303
               OpSelectionMerge %7917 None
               OpBranchConditional %13375 %22174 %8593
      %22174 = OpLabel
      %19289 = OpIMul %uint %uint_32 %7303
      %21519 = OpShiftLeftLogical %uint %12657 %uint_4
      %18756 = OpISub %uint %19289 %21519
               OpBranch %7917
       %8593 = OpLabel
               OpBranch %7917
       %7917 = OpLabel
      %10540 = OpPhi %uint %18756 %22174 %uint_16 %8593
               OpBranch %24764
      %20628 = OpLabel
               OpBranch %24764
      %24764 = OpLabel
      %10684 = OpPhi %uint %10540 %7917 %uint_32 %20628
      %18731 = OpIMul %uint %10684 %22882
      %16493 = OpShiftRightLogical %uint %18731 %uint_4
      %13163 = OpIAdd %uint %14040 %16493
      %22298 = OpAccessChain %_ptr_Uniform_v4uint %4218 %int_0 %13163
       %6578 = OpLoad %v4uint %22298
               OpSelectionMerge %14874 None
               OpBranchConditional %22150 %10584 %14874
      %10584 = OpLabel
      %18272 = OpBitwiseAnd %v4uint %6578 %2510
       %9426 = OpShiftLeftLogical %v4uint %18272 %317
      %20653 = OpBitwiseAnd %v4uint %6578 %1838
      %17550 = OpShiftRightLogical %v4uint %20653 %317
      %16377 = OpBitwiseOr %v4uint %9426 %17550
               OpBranch %14874
      %14874 = OpLabel
      %10924 = OpPhi %v4uint %6578 %24764 %16377 %10584
               OpSelectionMerge %13868 None
               OpBranchConditional %15139 %11065 %13868
      %11065 = OpLabel
      %24088 = OpShiftLeftLogical %v4uint %10924 %749
      %15336 = OpShiftRightLogical %v4uint %10924 %749
      %10729 = OpBitwiseOr %v4uint %24088 %15336
               OpBranch %13868
      %13868 = OpLabel
      %19125 = OpPhi %v4uint %10924 %14874 %10729 %11065
       %7001 = OpShiftRightLogical %v4uint %19125 %317
      %12838 = OpBitwiseAnd %v4uint %7001 %1080
      %22637 = OpShiftRightLogical %v4uint %7001 %965
      %16586 = OpIEqual %v4bool %22637 %2896
      %11340 = OpExtInst %v4int %1 FindUMsb %12838
      %10774 = OpBitcast %v4uint %11340
       %6267 = OpISub %v4uint %965 %10774
       %8721 = OpIAdd %v4uint %10774 %1871
      %10352 = OpSelect %v4uint %16586 %8721 %22637
      %23253 = OpShiftLeftLogical %v4uint %12838 %6267
      %18843 = OpBitwiseAnd %v4uint %23253 %1080
      %10911 = OpSelect %v4uint %16586 %18843 %12838
      %24570 = OpIAdd %v4uint %10352 %2922
      %20352 = OpShiftLeftLogical %v4uint %24570 %1127
      %16295 = OpShiftLeftLogical %v4uint %10911 %47
      %22397 = OpBitwiseOr %v4uint %20352 %16295
      %12704 = OpIEqual %v4bool %7001 %2896
      %24662 = OpSelect %v4uint %12704 %2896 %22397
      %11069 = OpAccessChain %_ptr_Uniform_v4uint %5134 %int_0 %15532
               OpStore %11069 %24662
               OpBranch %19578
      %19578 = OpLabel
               OpReturn
               OpFunctionEnd
#endif

const uint32_t texture_load_depth_float_scaled_cs[] = {
    0x07230203, 0x00010000, 0x0008000A, 0x0000625B, 0x00000000, 0x00020011,
    0x00000001, 0x0006000B, 0x00000001, 0x4C534C47, 0x6474732E, 0x3035342E,
    0x00000000, 0x0003000E, 0x00000000, 0x00000001, 0x0006000F, 0x00000005,
    0x0000161F, 0x6E69616D, 0x00000000, 0x00000F48, 0x00060010, 0x0000161F,
    0x00000011, 0x00000004, 0x00000020, 0x00000001, 0x00050048, 0x00000489,
    0x00000000, 0x00000023, 0x00000000, 0x00050048, 0x00000489, 0x00000001,
    0x00000023, 0x00000004, 0x00050048, 0x00000489, 0x00000002, 0x00000023,
    0x00000008, 0x00050048, 0x00000489, 0x00000003, 0x00000023, 0x0000000C,
    0x00050048, 0x00000489, 0x00000004, 0x00000023, 0x00000010, 0x00050048,
    0x00000489, 0x00000005, 0x00000023, 0x0000001C, 0x00050048, 0x00000489,
    0x00000006, 0x00000023, 0x00000020, 0x00050048, 0x00000489, 0x00000007,
    0x00000023, 0x00000024, 0x00030047, 0x00000489, 0x00000002, 0x00040047,
    0x0000147D, 0x00000022, 0x00000002, 0x00040047, 0x0000147D, 0x00000021,
    0x00000000, 0x00040047, 0x00000F48, 0x0000000B, 0x0000001C, 0x00040047,
    0x000007DC, 0x00000006, 0x00000010, 0x00040048, 0x000007B4, 0x00000000,
    0x00000018, 0x00050048, 0x000007B4, 0x00000000, 0x00000023, 0x00000000,
    0x00030047, 0x000007B4, 0x00000003, 0x00040047, 0x0000107A, 0x00000022,
    0x00000001, 0x00040047, 0x0000107A, 0x00000021, 0x00000000, 0x00040047,
    0x000007DD, 0x00000006, 0x00000010, 0x00040048, 0x000007B5, 0x00000000,
    0x00000019, 0x00050048, 0x000007B5, 0x00000000, 0x00000023, 0x00000000,
    0x00030047, 0x000007B5, 0x00000003, 0x00040047, 0x0000140E, 0x00000022,
    0x00000000, 0x00040047, 0x0000140E, 0x00000021, 0x00000000, 0x00040047,
    0x00000BC3, 0x0000000B, 0x00000019, 0x00020013, 0x00000008, 0x00030021,
    0x00000502, 0x00000008, 0x00040015, 0x0000000B, 0x00000020, 0x00000000,
    0x00040017, 0x00000017, 0x0000000B, 0x00000004, 0x00040015, 0x0000000C,
    0x00000020, 0x00000001, 0x00040017, 0x00000012, 0x0000000C, 0x00000002,
    0x00040017, 0x00000016, 0x0000000C, 0x00000003, 0x00020014, 0x00000009,
    0x00040017, 0x00000014, 0x0000000B, 0x00000003, 0x00040017, 0x00000011,
    0x0000000B, 0x00000002, 0x0004002B, 0x0000000B, 0x00000708, 0x000FFFFF,
    0x0004002B, 0x0000000B, 0x00000A46, 0x00000014, 0x00040017, 0x00000013,
    0x00000009, 0x00000004, 0x0004002B, 0x0000000B, 0x00000A0A, 0x00000000,
    0x0007002C, 0x00000017, 0x00000B50, 0x00000A0A, 0x00000A0A, 0x00000A0A,
    0x00000A0A, 0x0007002C, 0x00000017, 0x000003C5, 0x00000A46, 0x00000A46,
    0x00000A46, 0x00000A46, 0x00040017, 0x0000001A, 0x0000000C, 0x00000004,
    0x0004002B, 0x0000000B, 0x00000A0D, 0x00000001, 0x0004002B, 0x0000000B,
    0x00000B5A, 0x00000070, 0x0004002B, 0x0000000B, 0x00000A4F, 0x00000017,
    0x0004002B, 0x0000000B, 0x00000A13, 0x00000003, 0x0004002B, 0x0000000B,
    0x00000A10, 0x00000002, 0x0004002B, 0x0000000B, 0x000008A6, 0x00FF00FF,
    0x0004002B, 0x0000000B, 0x00000A22, 0x00000008, 0x0004002B, 0x0000000B,
    0x000005FD, 0xFF00FF00, 0x0004002B, 0x0000000B, 0x00000A3A, 0x00000010,
    0x0004002B, 0x0000000C, 0x00000A1A, 0x00000005, 0x0004002B, 0x0000000B,
    0x00000A19, 0x00000005, 0x0004002B, 0x0000000C, 0x00000A20, 0x00000007,
    0x0004002B, 0x0000000C, 0x00000A35, 0x0000000E, 0x0004002B, 0x0000000C,
    0x00000A11, 0x00000002, 0x0004002B, 0x0000000C, 0x000009DB, 0xFFFFFFF0,
    0x0004002B, 0x0000000C, 0x00000A0E, 0x00000001, 0x0004002B, 0x0000000C,
    0x00000A38, 0x0000000F, 0x0004002B, 0x0000000C, 0x00000A17, 0x00000004,
    0x0004002B, 0x0000000C, 0x0000040B, 0xFFFFFE00, 0x0004002B, 0x0000000C,
    0x00000A14, 0x00000003, 0x0004002B, 0x0000000C, 0x00000A3B, 0x00000010,
    0x0004002B, 0x0000000C, 0x00000388, 0x000001C0, 0x0004002B, 0x0000000C,
    0x00000A23, 0x00000008, 0x0004002B, 0x0000000C, 0x00000A1D, 0x00000006,
    0x0004002B, 0x0000000C, 0x00000AC8, 0x0000003F, 0x0004002B, 0x0000000B,
    0x00000A16, 0x00000004, 0x0004002B, 0x0000000B, 0x00000A1C, 0x00000006,
    0x0004002B, 0x0000000C, 0x0000078B, 0x0FFFFFFF, 0x0004002B, 0x0000000C,
    0x00000A05, 0xFFFFFFFE, 0x0004002B, 0x0000000B, 0x00000A6A, 0x00000020,
    0x000A001E, 0x00000489, 0x0000000B, 0x0000000B, 0x0000000B, 0x0000000B,
    0x00000014, 0x0000000B, 0x0000000B, 0x0000000B, 0x00040020, 0x00000706,
    0x00000002, 0x00000489, 0x0004003B, 0x00000706, 0x0000147D, 0x00000002,
    0x0004002B, 0x0000000C, 0x00000A0B, 0x00000000, 0x00040020, 0x00000288,
    0x00000002, 0x0000000B, 0x0005002C, 0x00000011, 0x0000077B, 0x00000A16,
    0x00000A1C, 0x00040020, 0x00000291, 0x00000002, 0x00000014, 0x00040020,
    0x00000292, 0x00000001, 0x00000014, 0x0004003B, 0x00000292, 0x00000F48,
    0x00000001, 0x0006002C, 0x00000014, 0x00000A2B, 0x00000A13, 0x00000A0A,
    0x00000A0A, 0x00040017, 0x0000000F, 0x00000009, 0x00000002, 0x0003001D,
    0x000007DC, 0x00000017, 0x0003001E, 0x000007B4, 0x000007DC, 0x00040020,
    0x00000A31, 0x00000002, 0x000007B4, 0x0004003B, 0x00000A31, 0x0000107A,
    0x00000002, 0x00040020, 0x00000294, 0x00000002, 0x00000017, 0x0003001D,
    0x000007DD, 0x00000017, 0x0003001E, 0x000007B5, 0x000007DD, 0x00040020,
    0x00000A32, 0x00000002, 0x000007B5, 0x0004003B, 0x00000A32, 0x0000140E,
    0x00000002, 0x0006002C, 0x00000014, 0x00000BC3, 0x00000A16, 0x00000A6A,
    0x00000A0D, 0x0005002C, 0x00000011, 0x0000074E, 0x00000A13, 0x00000A13,
    0x0004002B, 0x0000000B, 0x00000A25, 0x00000009, 0x0007002C, 0x00000017,
    0x000009CE, 0x000008A6, 0x000008A6, 0x000008A6, 0x000008A6, 0x0007002C,
    0x00000017, 0x0000013D, 0x00000A22, 0x00000A22, 0x00000A22, 0x00000A22,
    0x0007002C, 0x00000017, 0x0000072E, 0x000005FD, 0x000005FD, 0x000005FD,
    0x000005FD, 0x0007002C, 0x00000017, 0x000002ED, 0x00000A3A, 0x00000A3A,
    0x00000A3A, 0x00000A3A, 0x0007002C, 0x00000017, 0x00000438, 0x00000708,
    0x00000708, 0x00000708, 0x00000708, 0x0007002C, 0x00000017, 0x00000B6A,
    0x00000B5A, 0x00000B5A, 0x00000B5A, 0x00000B5A, 0x0007002C, 0x00000017,
    0x00000467, 0x00000A4F, 0x00000A4F, 0x00000A4F, 0x00000A4F, 0x0007002C,
    0x00000017, 0x0000002F, 0x00000A13, 0x00000A13, 0x00000A13, 0x00000A13,
    0x0004002B, 0x0000000B, 0x000009D1, 0xFFFFFFED, 0x0007002C, 0x00000017,
    0x0000074F, 0x000009D1, 0x000009D1, 0x000009D1, 0x000009D1, 0x00050036,
    0x00000008, 0x0000161F, 0x00000000, 0x00000502, 0x000200F8, 0x00003B06,
    0x000300F7, 0x00004C7A, 0x00000000, 0x000300FB, 0x00000A0A, 0x00003B21,
    0x000200F8, 0x00003B21, 0x0004003D, 0x00000014, 0x0000312F, 0x00000F48,
    0x000500C4, 0x00000014, 0x000027F5, 0x0000312F, 0x00000A2B, 0x00050041,
    0x00000291, 0x0000625A, 0x0000147D, 0x00000A17, 0x0004003D, 0x00000014,
    0x000059B5, 0x0000625A, 0x0007004F, 0x00000011, 0x00004993, 0x000027F5,
    0x000027F5, 0x00000000, 0x00000001, 0x0007004F, 0x00000011, 0x000019E2,
    0x000059B5, 0x000059B5, 0x00000000, 0x00000001, 0x000500AE, 0x0000000F,
    0x00004288, 0x00004993, 0x000019E2, 0x0004009A, 0x00000009, 0x00006067,
    0x00004288, 0x000300F7, 0x0000188A, 0x00000002, 0x000400FA, 0x00006067,
    0x000055E8, 0x0000188A, 0x000200F8, 0x000055E8, 0x000200F9, 0x00004C7A,
    0x000200F8, 0x0000188A, 0x0004007C, 0x00000016, 0x00001A8B, 0x000027F5,
    0x00050041, 0x00000288, 0x00004968, 0x0000147D, 0x00000A1D, 0x0004003D,
    0x0000000B, 0x0000263C, 0x00004968, 0x00050051, 0x0000000B, 0x00004F98,
    0x000059B5, 0x00000001, 0x00050051, 0x0000000C, 0x00003964, 0x00001A8B,
    0x00000000, 0x00050084, 0x0000000C, 0x0000591A, 0x00003964, 0x00000A17,
    0x00050051, 0x0000000C, 0x000018DA, 0x00001A8B, 0x00000002, 0x0004007C,
    0x0000000C, 0x000038A9, 0x00004F98, 0x00050084, 0x0000000C, 0x00002C0F,
    0x000018DA, 0x000038A9, 0x00050051, 0x0000000C, 0x000044BE, 0x00001A8B,
    0x00000001, 0x00050080, 0x0000000C, 0x000056D4, 0x00002C0F, 0x000044BE,
    0x0004007C, 0x0000000C, 0x00005785, 0x0000263C, 0x00050084, 0x0000000C,
    0x00005FD7, 0x000056D4, 0x00005785, 0x00050080, 0x0000000C, 0x00001B95,
    0x0000591A, 0x00005FD7, 0x0004007C, 0x0000000B, 0x00004B46, 0x00001B95,
    0x00050041, 0x00000288, 0x00004C04, 0x0000147D, 0x00000A1A, 0x0004003D,
    0x0000000B, 0x0000595B, 0x00004C04, 0x00050080, 0x0000000B, 0x00002145,
    0x00004B46, 0x0000595B, 0x000500C2, 0x0000000B, 0x000054A6, 0x00002145,
    0x00000A16, 0x00050041, 0x00000288, 0x000047E4, 0x0000147D, 0x00000A0E,
    0x0004003D, 0x0000000B, 0x00005B88, 0x000047E4, 0x00050041, 0x00000288,
    0x000058AC, 0x0000147D, 0x00000A0B, 0x0004003D, 0x0000000B, 0x00004FA3,
    0x000058AC, 0x000500C7, 0x0000000B, 0x00005707, 0x00004FA3, 0x00000A10,
    0x000500AB, 0x00000009, 0x00004B17, 0x00005707, 0x00000A0A, 0x00050050,
    0x00000011, 0x0000435F, 0x00004FA3, 0x00004FA3, 0x000500C2, 0x00000011,
    0x000059A3, 0x0000435F, 0x0000077B, 0x000500C7, 0x00000011, 0x00001997,
    0x000059A3, 0x0000074E, 0x00050041, 0x00000288, 0x0000492C, 0x0000147D,
    0x00000A11, 0x0004003D, 0x0000000B, 0x00005EAC, 0x0000492C, 0x00050041,
    0x00000288, 0x00004FEA, 0x0000147D, 0x00000A14, 0x0004003D, 0x0000000B,
    0x00005697, 0x00004FEA, 0x00050051, 0x0000000B, 0x000049F1, 0x000027F5,
    0x00000000, 0x000500C2, 0x0000000B, 0x000019EE, 0x000049F1, 0x00000A10,
    0x00050051, 0x0000000B, 0x00002704, 0x000027F5, 0x00000001, 0x00050050,
    0x00000011, 0x00005C0B, 0x000019EE, 0x00002704, 0x00050086, 0x00000011,
    0x00001F69, 0x00005C0B, 0x00001997, 0x00050051, 0x0000000B, 0x0000366C,
    0x00001F69, 0x00000000, 0x000500C4, 0x0000000B, 0x00004D4D, 0x0000366C,
    0x00000A10, 0x00050051, 0x0000000B, 0x000051A9, 0x00001F69, 0x00000001,
    0x00050051, 0x0000000B, 0x000059EE, 0x000027F5, 0x00000002, 0x00060050,
    0x00000014, 0x000024C9, 0x00004D4D, 0x000051A9, 0x000059EE, 0x000300F7,
    0x00005341, 0x00000002, 0x000400FA, 0x00004B17, 0x0000537D, 0x00002DD9,
    0x000200F8, 0x0000537D, 0x0004007C, 0x00000016, 0x00002970, 0x000024C9,
    0x00050051, 0x0000000C, 0x000042C2, 0x00002970, 0x00000001, 0x000500C3,
    0x0000000C, 0x000024FD, 0x000042C2, 0x00000A17, 0x00050051, 0x0000000C,
    0x00002747, 0x00002970, 0x00000002, 0x000500C3, 0x0000000C, 0x0000405C,
    0x00002747, 0x00000A11, 0x000500C2, 0x0000000B, 0x00005B4D, 0x00005697,
    0x00000A16, 0x0004007C, 0x0000000C, 0x000018AA, 0x00005B4D, 0x00050084,
    0x0000000C, 0x00005321, 0x0000405C, 0x000018AA, 0x00050080, 0x0000000C,
    0x00003B27, 0x000024FD, 0x00005321, 0x000500C2, 0x0000000B, 0x00002348,
    0x00005EAC, 0x00000A19, 0x0004007C, 0x0000000C, 0x0000308B, 0x00002348,
    0x00050084, 0x0000000C, 0x00002878, 0x00003B27, 0x0000308B, 0x00050051,
    0x0000000C, 0x00006242, 0x00002970, 0x00000000, 0x000500C3, 0x0000000C,
    0x00004FC7, 0x00006242, 0x00000A1A, 0x00050080, 0x0000000C, 0x000049FC,
    0x00004FC7, 0x00002878, 0x000500C4, 0x0000000C, 0x0000225D, 0x000049FC,
    0x00000A22, 0x000500C7, 0x0000000C, 0x00002CF6, 0x0000225D, 0x0000078B,
    0x000500C4, 0x0000000C, 0x000049FA, 0x00002CF6, 0x00000A0E, 0x000500C7,
    0x0000000C, 0x00004D38, 0x00006242, 0x00000A20, 0x000500C7, 0x0000000C,
    0x00003138, 0x000042C2, 0x00000A1D, 0x000500C4, 0x0000000C, 0x0000454D,
    0x00003138, 0x00000A11, 0x00050080, 0x0000000C, 0x0000434B, 0x00004D38,
    0x0000454D, 0x000500C4, 0x0000000C, 0x00001B88, 0x0000434B, 0x00000A22,
    0x000500C3, 0x0000000C, 0x00005DE3, 0x00001B88, 0x00000A1D, 0x000500C3,
    0x0000000C, 0x00002215, 0x000042C2, 0x00000A14, 0x00050080, 0x0000000C,
    0x000035A3, 0x00002215, 0x0000405C, 0x000500C7, 0x0000000C, 0x00005A0C,
    0x000035A3, 0x00000A0E, 0x000500C3, 0x0000000C, 0x00004112, 0x00006242,
    0x00000A14, 0x000500C4, 0x0000000C, 0x0000496A, 0x00005A0C, 0x00000A0E,
    0x00050080, 0x0000000C, 0x000034BD, 0x00004112, 0x0000496A, 0x000500C7,
    0x0000000C, 0x00004ADD, 0x000034BD, 0x00000A14, 0x000500C4, 0x0000000C,
    0x0000544A, 0x00004ADD, 0x00000A0E, 0x00050080, 0x0000000C, 0x00003C4B,
    0x00005A0C, 0x0000544A, 0x000500C7, 0x0000000C, 0x0000335E, 0x00005DE3,
    0x000009DB, 0x00050080, 0x0000000C, 0x00004F70, 0x000049FA, 0x0000335E,
    0x000500C4, 0x0000000C, 0x00005B31, 0x00004F70, 0x00000A0E, 0x000500C7,
    0x0000000C, 0x00005AEA, 0x00005DE3, 0x00000A38, 0x00050080, 0x0000000C,
    0x0000285C, 0x00005B31, 0x00005AEA, 0x000500C7, 0x0000000C, 0x000047B4,
    0x00002747, 0x00000A14, 0x000500C4, 0x0000000C, 0x0000544B, 0x000047B4,
    0x00000A22, 0x00050080, 0x0000000C, 0x00004157, 0x0000285C, 0x0000544B,
    0x000500C7, 0x0000000C, 0x00004ADE, 0x000042C2, 0x00000A0E, 0x000500C4,
    0x0000000C, 0x0000544C, 0x00004ADE, 0x00000A17, 0x00050080, 0x0000000C,
    0x00004158, 0x00004157, 0x0000544C, 0x000500C7, 0x0000000C, 0x00004FD6,
    0x00003C4B, 0x00000A0E, 0x000500C4, 0x0000000C, 0x00002703, 0x00004FD6,
    0x00000A14, 0x000500C3, 0x0000000C, 0x00003332, 0x00004158, 0x00000A1D,
    0x000500C7, 0x0000000C, 0x000036D6, 0x00003332, 0x00000A20, 0x00050080,
    0x0000000C, 0x00003412, 0x00002703, 0x000036D6, 0x000500C4, 0x0000000C,
    0x00005B32, 0x00003412, 0x00000A14, 0x000500C7, 0x0000000C, 0x00005AB1,
    0x00003C4B, 0x00000A05, 0x00050080, 0x0000000C, 0x00002A9C, 0x00005B32,
    0x00005AB1, 0x000500C4, 0x0000000C, 0x00005B33, 0x00002A9C, 0x00000A11,
    0x000500C7, 0x0000000C, 0x00005AB2, 0x00004158, 0x0000040B, 0x00050080,
    0x0000000C, 0x00002A9D, 0x00005B33, 0x00005AB2, 0x000500C4, 0x0000000C,
    0x00005B34, 0x00002A9D, 0x00000A14, 0x000500C7, 0x0000000C, 0x00005559,
    0x00004158, 0x00000AC8, 0x00050080, 0x0000000C, 0x00005EFA, 0x00005B34,
    0x00005559, 0x0004007C, 0x0000000B, 0x0000566F, 0x00005EFA, 0x000200F9,
    0x00005341, 0x000200F8, 0x00002DD9, 0x0007004F, 0x00000011, 0x00002621,
    0x000024C9, 0x000024C9, 0x00000000, 0x00000001, 0x0004007C, 0x00000012,
    0x000059CF, 0x00002621, 0x00050051, 0x0000000C, 0x00001903, 0x000059CF,
    0x00000000, 0x000500C3, 0x0000000C, 0x000024FE, 0x00001903, 0x00000A1A,
    0x00050051, 0x0000000C, 0x00002748, 0x000059CF, 0x00000001, 0x000500C3,
    0x0000000C, 0x0000405D, 0x00002748, 0x00000A1A, 0x000500C2, 0x0000000B,
    0x00005B4E, 0x00005EAC, 0x00000A19, 0x0004007C, 0x0000000C, 0x000018AB,
    0x00005B4E, 0x00050084, 0x0000000C, 0x00005347, 0x0000405D, 0x000018AB,
    0x00050080, 0x0000000C, 0x00003F5E, 0x000024FE, 0x00005347, 0x000500C4,
    0x0000000C, 0x00004A8E, 0x00003F5E, 0x00000A25, 0x000500C7, 0x0000000C,
    0x00002AB6, 0x00001903, 0x00000A20, 0x000500C7, 0x0000000C, 0x00003139,
    0x00002748, 0x00000A35, 0x000500C4, 0x0000000C, 0x0000454E, 0x00003139,
    0x00000A11, 0x00050080, 0x0000000C, 0x00004397, 0x00002AB6, 0x0000454E,
    0x000500C4, 0x0000000C, 0x000018E7, 0x00004397, 0x00000A10, 0x000500C7,
    0x0000000C, 0x000027B1, 0x000018E7, 0x000009DB, 0x000500C4, 0x0000000C,
    0x00002F76, 0x000027B1, 0x00000A0E, 0x00050080, 0x0000000C, 0x00003C4C,
    0x00004A8E, 0x00002F76, 0x000500C7, 0x0000000C, 0x00003397, 0x000018E7,
    0x00000A38, 0x00050080, 0x0000000C, 0x00004D30, 0x00003C4C, 0x00003397,
    0x000500C7, 0x0000000C, 0x000047B5, 0x00002748, 0x00000A0E, 0x000500C4,
    0x0000000C, 0x0000544D, 0x000047B5, 0x00000A17, 0x00050080, 0x0000000C,
    0x00004159, 0x00004D30, 0x0000544D, 0x000500C7, 0x0000000C, 0x00005022,
    0x00004159, 0x0000040B, 0x000500C4, 0x0000000C, 0x00002416, 0x00005022,
    0x00000A14, 0x000500C7, 0x0000000C, 0x00004A33, 0x00002748, 0x00000A3B,
    0x000500C4, 0x0000000C, 0x00002F77, 0x00004A33, 0x00000A20, 0x00050080,
    0x0000000C, 0x0000415A, 0x00002416, 0x00002F77, 0x000500C7, 0x0000000C,
    0x00004ADF, 0x00004159, 0x00000388, 0x000500C4, 0x0000000C, 0x0000544E,
    0x00004ADF, 0x00000A11, 0x00050080, 0x0000000C, 0x00004144, 0x0000415A,
    0x0000544E, 0x000500C7, 0x0000000C, 0x00005083, 0x00002748, 0x00000A23,
    0x000500C3, 0x0000000C, 0x000041BF, 0x00005083, 0x00000A11, 0x000500C3,
    0x0000000C, 0x00001EEC, 0x00001903, 0x00000A14, 0x00050080, 0x0000000C,
    0x000035B6, 0x000041BF, 0x00001EEC, 0x000500C7, 0x0000000C, 0x00005453,
    0x000035B6, 0x00000A14, 0x000500C4, 0x0000000C, 0x0000544F, 0x00005453,
    0x00000A1D, 0x00050080, 0x0000000C, 0x00003C4D, 0x00004144, 0x0000544F,
    0x000500C7, 0x0000000C, 0x00002E06, 0x00004159, 0x00000AC8, 0x00050080,
    0x0000000C, 0x0000394F, 0x00003C4D, 0x00002E06, 0x0004007C, 0x0000000B,
    0x00005670, 0x0000394F, 0x000200F9, 0x00005341, 0x000200F8, 0x00005341,
    0x000700F5, 0x0000000B, 0x000024FC, 0x0000566F, 0x0000537D, 0x00005670,
    0x00002DD9, 0x00050084, 0x00000011, 0x00003FA8, 0x00001F69, 0x00001997,
    0x00050082, 0x00000011, 0x00003BBC, 0x00005C0B, 0x00003FA8, 0x00050051,
    0x0000000B, 0x00001C87, 0x00001997, 0x00000000, 0x00050051, 0x0000000B,
    0x00005962, 0x00001997, 0x00000001, 0x00050084, 0x0000000B, 0x00003372,
    0x00001C87, 0x00005962, 0x00050084, 0x0000000B, 0x00003CA0, 0x000024FC,
    0x00003372, 0x00050051, 0x0000000B, 0x00003ED4, 0x00003BBC, 0x00000000,
    0x00050084, 0x0000000B, 0x00003E12, 0x00003ED4, 0x00005962, 0x00050051,
    0x0000000B, 0x00001AE6, 0x00003BBC, 0x00000001, 0x00050080, 0x0000000B,
    0x00002B25, 0x00003E12, 0x00001AE6, 0x000500C4, 0x0000000B, 0x0000609D,
    0x00002B25, 0x00000A10, 0x000500C7, 0x0000000B, 0x00005AB3, 0x000049F1,
    0x00000A13, 0x00050080, 0x0000000B, 0x00002557, 0x0000609D, 0x00005AB3,
    0x000500C4, 0x0000000B, 0x000040AD, 0x00002557, 0x00000A10, 0x00050080,
    0x0000000B, 0x00004EAA, 0x00003CA0, 0x000040AD, 0x00050080, 0x0000000B,
    0x0000453C, 0x00005B88, 0x00004EAA, 0x000500C2, 0x0000000B, 0x000036D8,
    0x0000453C, 0x00000A16, 0x000500C2, 0x0000000B, 0x00002DF6, 0x00004FA3,
    0x00000A10, 0x000500C7, 0x0000000B, 0x000020CA, 0x00002DF6, 0x00000A13,
    0x00060041, 0x00000294, 0x000050F7, 0x0000107A, 0x00000A0B, 0x000036D8,
    0x0004003D, 0x00000017, 0x00001FCE, 0x000050F7, 0x000500AA, 0x00000009,
    0x000035C0, 0x000020CA, 0x00000A0D, 0x000500AA, 0x00000009, 0x00005376,
    0x000020CA, 0x00000A10, 0x000500A6, 0x00000009, 0x00005686, 0x000035C0,
    0x00005376, 0x000300F7, 0x00003463, 0x00000000, 0x000400FA, 0x00005686,
    0x00002957, 0x00003463, 0x000200F8, 0x00002957, 0x000500C7, 0x00000017,
    0x0000475F, 0x00001FCE, 0x000009CE, 0x000500C4, 0x00000017, 0x000024D1,
    0x0000475F, 0x0000013D, 0x000500C7, 0x00000017, 0x000050AC, 0x00001FCE,
    0x0000072E, 0x000500C2, 0x00000017, 0x0000448D, 0x000050AC, 0x0000013D,
    0x000500C5, 0x00000017, 0x00003FF8, 0x000024D1, 0x0000448D, 0x000200F9,
    0x00003463, 0x000200F8, 0x00003463, 0x000700F5, 0x00000017, 0x00005879,
    0x00001FCE, 0x00005341, 0x00003FF8, 0x00002957, 0x000500AA, 0x00000009,
    0x00004CB6, 0x000020CA, 0x00000A13, 0x000500A6, 0x00000009, 0x00003B23,
    0x00005376, 0x00004CB6, 0x000300F7, 0x0000362B, 0x00000000, 0x000400FA,
    0x00003B23, 0x00002B38, 0x0000362B, 0x000200F8, 0x00002B38, 0x000500C4,
    0x00000017, 0x00005E17, 0x00005879, 0x000002ED, 0x000500C2, 0x00000017,
    0x00003BE7, 0x00005879, 0x000002ED, 0x000500C5, 0x00000017, 0x000029E8,
    0x00005E17, 0x00003BE7, 0x000200F9, 0x0000362B, 0x000200F8, 0x0000362B,
    0x000700F5, 0x00000017, 0x00004AB4, 0x00005879, 0x00003463, 0x000029E8,
    0x00002B38, 0x000500C2, 0x00000017, 0x00001B58, 0x00004AB4, 0x0000013D,
    0x000500C7, 0x00000017, 0x00003225, 0x00001B58, 0x00000438, 0x000500C2,
    0x00000017, 0x0000586C, 0x00001B58, 0x000003C5, 0x000500AA, 0x00000013,
    0x000040C9, 0x0000586C, 0x00000B50, 0x0006000C, 0x0000001A, 0x00002C4B,
    0x00000001, 0x0000004B, 0x00003225, 0x0004007C, 0x00000017, 0x00002A15,
    0x00002C4B, 0x00050082, 0x00000017, 0x0000187A, 0x000003C5, 0x00002A15,
    0x00050080, 0x00000017, 0x00002210, 0x00002A15, 0x0000074F, 0x000600A9,
    0x00000017, 0x0000286F, 0x000040C9, 0x00002210, 0x0000586C, 0x000500C4,
    0x00000017, 0x00005AD4, 0x00003225, 0x0000187A, 0x000500C7, 0x00000017,
    0x0000499A, 0x00005AD4, 0x00000438, 0x000600A9, 0x00000017, 0x00002A9E,
    0x000040C9, 0x0000499A, 0x00003225, 0x00050080, 0x00000017, 0x00005FF9,
    0x0000286F, 0x00000B6A, 0x000500C4, 0x00000017, 0x00004F7F, 0x00005FF9,
    0x00000467, 0x000500C4, 0x00000017, 0x00003FA6, 0x00002A9E, 0x0000002F,
    0x000500C5, 0x00000017, 0x0000577C, 0x00004F7F, 0x00003FA6, 0x000500AA,
    0x00000013, 0x0000319F, 0x00001B58, 0x00000B50, 0x000600A9, 0x00000017,
    0x00006055, 0x0000319F, 0x00000B50, 0x0000577C, 0x00060041, 0x00000294,
    0x00002242, 0x0000140E, 0x00000A0B, 0x000054A6, 0x0003003E, 0x00002242,
    0x00006055, 0x00050080, 0x0000000B, 0x00003CAC, 0x000054A6, 0x00000A0E,
    0x000500AC, 0x00000009, 0x00001911, 0x00001C87, 0x00000A0D, 0x000300F7,
    0x000060BC, 0x00000002, 0x000400FA, 0x00001911, 0x00005084, 0x00005094,
    0x000200F8, 0x00005084, 0x00050086, 0x0000000B, 0x00003697, 0x000019EE,
    0x00001C87, 0x00050084, 0x0000000B, 0x0000237E, 0x00003697, 0x00001C87,
    0x00050082, 0x0000000B, 0x00003171, 0x000019EE, 0x0000237E, 0x00050080,
    0x0000000B, 0x00002527, 0x00003171, 0x00000A0D, 0x000500AA, 0x00000009,
    0x0000343F, 0x00002527, 0x00001C87, 0x000300F7, 0x00001EED, 0x00000000,
    0x000400FA, 0x0000343F, 0x0000569E, 0x00002191, 0x000200F8, 0x0000569E,
    0x00050084, 0x0000000B, 0x00004B59, 0x00000A6A, 0x00001C87, 0x000500C4,
    0x0000000B, 0x0000540F, 0x00003171, 0x00000A16, 0x00050082, 0x0000000B,
    0x00004944, 0x00004B59, 0x0000540F, 0x000200F9, 0x00001EED, 0x000200F8,
    0x00002191, 0x000200F9, 0x00001EED, 0x000200F8, 0x00001EED, 0x000700F5,
    0x0000000B, 0x0000292C, 0x00004944, 0x0000569E, 0x00000A3A, 0x00002191,
    0x000200F9, 0x000060BC, 0x000200F8, 0x00005094, 0x000200F9, 0x000060BC,
    0x000200F8, 0x000060BC, 0x000700F5, 0x0000000B, 0x000029BC, 0x0000292C,
    0x00001EED, 0x00000A6A, 0x00005094, 0x00050084, 0x0000000B, 0x0000492B,
    0x000029BC, 0x00005962, 0x000500C2, 0x0000000B, 0x0000406D, 0x0000492B,
    0x00000A16, 0x00050080, 0x0000000B, 0x0000336B, 0x000036D8, 0x0000406D,
    0x00060041, 0x00000294, 0x0000571A, 0x0000107A, 0x00000A0B, 0x0000336B,
    0x0004003D, 0x00000017, 0x000019B2, 0x0000571A, 0x000300F7, 0x00003A1A,
    0x00000000, 0x000400FA, 0x00005686, 0x00002958, 0x00003A1A, 0x000200F8,
    0x00002958, 0x000500C7, 0x00000017, 0x00004760, 0x000019B2, 0x000009CE,
    0x000500C4, 0x00000017, 0x000024D2, 0x00004760, 0x0000013D, 0x000500C7,
    0x00000017, 0x000050AD, 0x000019B2, 0x0000072E, 0x000500C2, 0x00000017,
    0x0000448E, 0x000050AD, 0x0000013D, 0x000500C5, 0x00000017, 0x00003FF9,
    0x000024D2, 0x0000448E, 0x000200F9, 0x00003A1A, 0x000200F8, 0x00003A1A,
    0x000700F5, 0x00000017, 0x00002AAC, 0x000019B2, 0x000060BC, 0x00003FF9,
    0x00002958, 0x000300F7, 0x0000362C, 0x00000000, 0x000400FA, 0x00003B23,
    0x00002B39, 0x0000362C, 0x000200F8, 0x00002B39, 0x000500C4, 0x00000017,
    0x00005E18, 0x00002AAC, 0x000002ED, 0x000500C2, 0x00000017, 0x00003BE8,
    0x00002AAC, 0x000002ED, 0x000500C5, 0x00000017, 0x000029E9, 0x00005E18,
    0x00003BE8, 0x000200F9, 0x0000362C, 0x000200F8, 0x0000362C, 0x000700F5,
    0x00000017, 0x00004AB5, 0x00002AAC, 0x00003A1A, 0x000029E9, 0x00002B39,
    0x000500C2, 0x00000017, 0x00001B59, 0x00004AB5, 0x0000013D, 0x000500C7,
    0x00000017, 0x00003226, 0x00001B59, 0x00000438, 0x000500C2, 0x00000017,
    0x0000586D, 0x00001B59, 0x000003C5, 0x000500AA, 0x00000013, 0x000040CA,
    0x0000586D, 0x00000B50, 0x0006000C, 0x0000001A, 0x00002C4C, 0x00000001,
    0x0000004B, 0x00003226, 0x0004007C, 0x00000017, 0x00002A16, 0x00002C4C,
    0x00050082, 0x00000017, 0x0000187B, 0x000003C5, 0x00002A16, 0x00050080,
    0x00000017, 0x00002211, 0x00002A16, 0x0000074F, 0x000600A9, 0x00000017,
    0x00002870, 0x000040CA, 0x00002211, 0x0000586D, 0x000500C4, 0x00000017,
    0x00005AD5, 0x00003226, 0x0000187B, 0x000500C7, 0x00000017, 0x0000499B,
    0x00005AD5, 0x00000438, 0x000600A9, 0x00000017, 0x00002A9F, 0x000040CA,
    0x0000499B, 0x00003226, 0x00050080, 0x00000017, 0x00005FFA, 0x00002870,
    0x00000B6A, 0x000500C4, 0x00000017, 0x00004F80, 0x00005FFA, 0x00000467,
    0x000500C4, 0x00000017, 0x00003FA7, 0x00002A9F, 0x0000002F, 0x000500C5,
    0x00000017, 0x0000577D, 0x00004F80, 0x00003FA7, 0x000500AA, 0x00000013,
    0x000031A0, 0x00001B59, 0x00000B50, 0x000600A9, 0x00000017, 0x00006056,
    0x000031A0, 0x00000B50, 0x0000577D, 0x00060041, 0x00000294, 0x00002B3D,
    0x0000140E, 0x00000A0B, 0x00003CAC, 0x0003003E, 0x00002B3D, 0x00006056,
    0x000200F9, 0x00004C7A, 0x000200F8, 0x00004C7A, 0x000100FD, 0x00010038,
};
