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
     %v2uint = OpTypeVector %uint 2
     %v4uint = OpTypeVector %uint 4
        %int = OpTypeInt 32 1
      %v2int = OpTypeVector %int 2
      %v3int = OpTypeVector %int 3
       %bool = OpTypeBool
     %v3uint = OpTypeVector %uint 3
    %uint_24 = OpConstant %uint 24
 %uint_65280 = OpConstant %uint 65280
     %uint_8 = OpConstant %uint 8
   %uint_257 = OpConstant %uint 257
   %uint_255 = OpConstant %uint 255
%uint_16711680 = OpConstant %uint 16711680
     %uint_1 = OpConstant %uint 1
     %uint_2 = OpConstant %uint 2
%uint_16711935 = OpConstant %uint 16711935
%uint_4278255360 = OpConstant %uint 4278255360
     %uint_3 = OpConstant %uint 3
    %uint_16 = OpConstant %uint 16
     %uint_0 = OpConstant %uint 0
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
%int_268435455 = OpConstant %int 268435455
     %int_n2 = OpConstant %int -2
    %uint_32 = OpConstant %uint 32
%_struct_1161 = OpTypeStruct %uint %uint %uint %uint %v3uint %uint %uint %uint
%_ptr_Uniform__struct_1161 = OpTypePointer Uniform %_struct_1161
       %5245 = OpVariable %_ptr_Uniform__struct_1161 Uniform
      %int_0 = OpConstant %int 0
%_ptr_Uniform_uint = OpTypePointer Uniform %uint
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
     %uint_9 = OpConstant %uint 9
       %2510 = OpConstantComposite %v4uint %uint_16711935 %uint_16711935 %uint_16711935 %uint_16711935
        %317 = OpConstantComposite %v4uint %uint_8 %uint_8 %uint_8 %uint_8
       %1838 = OpConstantComposite %v4uint %uint_4278255360 %uint_4278255360 %uint_4278255360 %uint_4278255360
        %749 = OpConstantComposite %v4uint %uint_16 %uint_16 %uint_16 %uint_16
       %2311 = OpConstantComposite %v2uint %uint_24 %uint_24
       %2682 = OpConstantComposite %v2uint %uint_65280 %uint_65280
       %1975 = OpConstantComposite %v2uint %uint_8 %uint_8
       %1182 = OpConstantComposite %v2uint %uint_257 %uint_257
       %1140 = OpConstantComposite %v2uint %uint_255 %uint_255
       %2993 = OpConstantComposite %v2uint %uint_16711680 %uint_16711680
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
      %22810 = OpIMul %int %14692 %int_8
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
      %20950 = OpAccessChain %_ptr_Uniform_uint %5245 %int_0
      %21411 = OpLoad %uint %20950
       %6381 = OpBitwiseAnd %uint %21411 %uint_1
      %10467 = OpINotEqual %bool %6381 %uint_0
               OpSelectionMerge %23266 DontFlatten
               OpBranchConditional %10467 %10108 %10765
      %10108 = OpLabel
      %23508 = OpBitwiseAnd %uint %21411 %uint_2
      %16300 = OpINotEqual %bool %23508 %uint_0
               OpSelectionMerge %7691 DontFlatten
               OpBranchConditional %16300 %12129 %25128
      %12129 = OpLabel
      %18210 = OpAccessChain %_ptr_Uniform_uint %5245 %int_2
      %15627 = OpLoad %uint %18210
      %22624 = OpAccessChain %_ptr_Uniform_uint %5245 %int_3
      %21535 = OpLoad %uint %22624
      %14923 = OpShiftRightArithmetic %int %17598 %int_4
      %18773 = OpShiftRightArithmetic %int %6362 %int_2
      %18759 = OpShiftRightLogical %uint %21535 %uint_4
       %6314 = OpBitcast %int %18759
      %21281 = OpIMul %int %18773 %6314
      %15143 = OpIAdd %int %14923 %21281
       %9032 = OpShiftRightLogical %uint %15627 %uint_5
      %14593 = OpBitcast %int %9032
       %8436 = OpIMul %int %15143 %14593
      %12986 = OpShiftRightArithmetic %int %14692 %int_5
      %24558 = OpIAdd %int %12986 %8436
       %8797 = OpShiftLeftLogical %int %24558 %uint_8
      %11510 = OpBitwiseAnd %int %8797 %int_268435455
      %18938 = OpShiftLeftLogical %int %11510 %int_1
      %19768 = OpBitwiseAnd %int %14692 %int_7
      %12600 = OpBitwiseAnd %int %17598 %int_6
      %17741 = OpShiftLeftLogical %int %12600 %int_2
      %17227 = OpIAdd %int %19768 %17741
       %7048 = OpShiftLeftLogical %int %17227 %uint_8
      %24035 = OpShiftRightArithmetic %int %7048 %int_6
       %8725 = OpShiftRightArithmetic %int %17598 %int_3
      %13731 = OpIAdd %int %8725 %18773
      %23052 = OpBitwiseAnd %int %13731 %int_1
      %16658 = OpShiftRightArithmetic %int %14692 %int_3
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
      %18356 = OpBitwiseAnd %int %6362 %int_3
      %21579 = OpShiftLeftLogical %int %18356 %uint_8
      %16727 = OpIAdd %int %10332 %21579
      %19166 = OpBitwiseAnd %int %17598 %int_1
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
      %24224 = OpBitwiseAnd %int %16728 %int_63
      %21741 = OpIAdd %int %23348 %24224
               OpBranch %7691
      %25128 = OpLabel
       %6796 = OpBitcast %v2int %18835
      %18793 = OpAccessChain %_ptr_Uniform_uint %5245 %int_2
      %11954 = OpLoad %uint %18793
      %18756 = OpCompositeExtract %int %6796 0
      %19701 = OpShiftRightArithmetic %int %18756 %int_5
      %10055 = OpCompositeExtract %int %6796 1
      %16476 = OpShiftRightArithmetic %int %10055 %int_5
      %23373 = OpShiftRightLogical %uint %11954 %uint_5
       %6315 = OpBitcast %int %23373
      %21319 = OpIMul %int %16476 %6315
      %16222 = OpIAdd %int %19701 %21319
      %19086 = OpShiftLeftLogical %int %16222 %uint_9
      %10934 = OpBitwiseAnd %int %18756 %int_7
      %12601 = OpBitwiseAnd %int %10055 %int_14
      %17742 = OpShiftLeftLogical %int %12601 %int_2
      %17303 = OpIAdd %int %10934 %17742
       %6375 = OpShiftLeftLogical %int %17303 %uint_2
      %10161 = OpBitwiseAnd %int %6375 %int_n16
      %12150 = OpShiftLeftLogical %int %10161 %int_1
      %15436 = OpIAdd %int %19086 %12150
      %13207 = OpBitwiseAnd %int %6375 %int_15
      %19760 = OpIAdd %int %15436 %13207
      %18357 = OpBitwiseAnd %int %10055 %int_1
      %21581 = OpShiftLeftLogical %int %18357 %int_4
      %16729 = OpIAdd %int %19760 %21581
      %20514 = OpBitwiseAnd %int %16729 %int_n512
       %9238 = OpShiftLeftLogical %int %20514 %int_3
      %18995 = OpBitwiseAnd %int %10055 %int_16
      %12151 = OpShiftLeftLogical %int %18995 %int_7
      %16730 = OpIAdd %int %9238 %12151
      %19167 = OpBitwiseAnd %int %16729 %int_448
      %21582 = OpShiftLeftLogical %int %19167 %int_2
      %16708 = OpIAdd %int %16730 %21582
      %20611 = OpBitwiseAnd %int %10055 %int_8
      %16831 = OpShiftRightArithmetic %int %20611 %int_2
       %7916 = OpShiftRightArithmetic %int %18756 %int_3
      %13750 = OpIAdd %int %16831 %7916
      %21587 = OpBitwiseAnd %int %13750 %int_3
      %21583 = OpShiftLeftLogical %int %21587 %int_6
      %15437 = OpIAdd %int %16708 %21583
      %14157 = OpBitwiseAnd %int %16729 %int_63
      %12098 = OpIAdd %int %15437 %14157
               OpBranch %7691
       %7691 = OpLabel
      %10540 = OpPhi %int %21741 %12129 %12098 %25128
               OpBranch %23266
      %10765 = OpLabel
      %20632 = OpAccessChain %_ptr_Uniform_uint %5245 %int_2
      %15628 = OpLoad %uint %20632
      %21427 = OpAccessChain %_ptr_Uniform_uint %5245 %int_3
      %12014 = OpLoad %uint %21427
       %8199 = OpIMul %int %14692 %int_4
      %11736 = OpBitcast %int %12014
       %8690 = OpIMul %int %6362 %11736
       %8334 = OpIAdd %int %8690 %17598
       %8952 = OpBitcast %int %15628
       %7839 = OpIMul %int %8334 %8952
       %7984 = OpIAdd %int %8199 %7839
               OpBranch %23266
      %23266 = OpLabel
      %19748 = OpPhi %int %10540 %7691 %7984 %10765
      %24922 = OpAccessChain %_ptr_Uniform_uint %5245 %int_1
       %7502 = OpLoad %uint %24922
      %15686 = OpBitcast %int %7502
      %15579 = OpIAdd %int %15686 %19748
      %18556 = OpBitcast %uint %15579
      %21493 = OpShiftRightLogical %uint %18556 %uint_4
      %14997 = OpShiftRightLogical %uint %21411 %uint_2
       %8394 = OpBitwiseAnd %uint %14997 %uint_3
      %20727 = OpAccessChain %_ptr_Uniform_v4uint %4218 %int_0 %21493
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
      %22649 = OpPhi %v4uint %8142 %23266 %16376 %10583
      %19638 = OpIEqual %bool %8394 %uint_3
      %15139 = OpLogicalOr %bool %21366 %19638
               OpSelectionMerge %11682 None
               OpBranchConditional %15139 %11064 %11682
      %11064 = OpLabel
      %24087 = OpShiftLeftLogical %v4uint %22649 %749
      %15335 = OpShiftRightLogical %v4uint %22649 %749
      %10728 = OpBitwiseOr %v4uint %24087 %15335
               OpBranch %11682
      %11682 = OpLabel
      %19853 = OpPhi %v4uint %22649 %13411 %10728 %11064
      %22133 = OpVectorShuffle %v2uint %19853 %19853 0 1
      %14639 = OpShiftRightLogical %v2uint %22133 %2311
       %6730 = OpBitwiseAnd %v2uint %22133 %2682
      %16264 = OpShiftLeftLogical %v2uint %6730 %1975
      %22500 = OpIMul %v2uint %16264 %1182
       %9800 = OpBitwiseOr %v2uint %14639 %22500
       %8030 = OpBitwiseAnd %v2uint %22133 %1140
      %22878 = OpShiftLeftLogical %v2uint %8030 %1975
      %18448 = OpBitwiseAnd %v2uint %22133 %2993
      %15354 = OpShiftRightLogical %v2uint %18448 %1975
       %7420 = OpCompositeExtract %uint %22878 0
      %24539 = OpCompositeExtract %uint %22878 1
       %7641 = OpCompositeExtract %uint %15354 0
       %7795 = OpCompositeExtract %uint %15354 1
      %16161 = OpCompositeConstruct %v4uint %7420 %24539 %7641 %7795
       %7774 = OpVectorShuffle %v4uint %16161 %16161 0 2 1 3
       %6860 = OpVectorShuffle %v4uint %9800 %9800 0 0 1 1
      %24814 = OpBitwiseOr %v4uint %6860 %7774
      %18141 = OpVectorShuffle %v2uint %19853 %19853 2 3
       %8212 = OpShiftRightLogical %v2uint %18141 %2311
       %6731 = OpBitwiseAnd %v2uint %18141 %2682
      %16265 = OpShiftLeftLogical %v2uint %6731 %1975
      %22501 = OpIMul %v2uint %16265 %1182
       %9801 = OpBitwiseOr %v2uint %8212 %22501
       %8031 = OpBitwiseAnd %v2uint %18141 %1140
      %22879 = OpShiftLeftLogical %v2uint %8031 %1975
      %18449 = OpBitwiseAnd %v2uint %18141 %2993
      %15355 = OpShiftRightLogical %v2uint %18449 %1975
       %7421 = OpCompositeExtract %uint %22879 0
      %24540 = OpCompositeExtract %uint %22879 1
       %7642 = OpCompositeExtract %uint %15355 0
       %7796 = OpCompositeExtract %uint %15355 1
      %16162 = OpCompositeConstruct %v4uint %7421 %24540 %7642 %7796
       %7775 = OpVectorShuffle %v4uint %16162 %16162 0 2 1 3
       %6594 = OpVectorShuffle %v4uint %9801 %9801 0 0 1 1
      %24728 = OpBitwiseOr %v4uint %6594 %7775
       %8219 = OpAccessChain %_ptr_Uniform_v4uint %5134 %int_0 %21670
               OpStore %8219 %24814
      %11457 = OpIAdd %uint %21670 %uint_1
      %23654 = OpAccessChain %_ptr_Uniform_v4uint %5134 %int_0 %11457
               OpStore %23654 %24728
      %16830 = OpSelect %uint %10467 %uint_32 %uint_16
      %22844 = OpShiftRightLogical %uint %16830 %uint_4
      %13947 = OpIAdd %uint %21493 %22844
      %22298 = OpAccessChain %_ptr_Uniform_v4uint %4218 %int_0 %13947
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
      %10924 = OpPhi %v4uint %6578 %11682 %16377 %10584
               OpSelectionMerge %11683 None
               OpBranchConditional %15139 %11065 %11683
      %11065 = OpLabel
      %24088 = OpShiftLeftLogical %v4uint %10924 %749
      %15336 = OpShiftRightLogical %v4uint %10924 %749
      %10729 = OpBitwiseOr %v4uint %24088 %15336
               OpBranch %11683
      %11683 = OpLabel
      %19854 = OpPhi %v4uint %10924 %14874 %10729 %11065
      %22134 = OpVectorShuffle %v2uint %19854 %19854 0 1
      %14640 = OpShiftRightLogical %v2uint %22134 %2311
       %6732 = OpBitwiseAnd %v2uint %22134 %2682
      %16266 = OpShiftLeftLogical %v2uint %6732 %1975
      %22502 = OpIMul %v2uint %16266 %1182
       %9802 = OpBitwiseOr %v2uint %14640 %22502
       %8032 = OpBitwiseAnd %v2uint %22134 %1140
      %22880 = OpShiftLeftLogical %v2uint %8032 %1975
      %18450 = OpBitwiseAnd %v2uint %22134 %2993
      %15356 = OpShiftRightLogical %v2uint %18450 %1975
       %7422 = OpCompositeExtract %uint %22880 0
      %24541 = OpCompositeExtract %uint %22880 1
       %7643 = OpCompositeExtract %uint %15356 0
       %7797 = OpCompositeExtract %uint %15356 1
      %16163 = OpCompositeConstruct %v4uint %7422 %24541 %7643 %7797
       %7776 = OpVectorShuffle %v4uint %16163 %16163 0 2 1 3
       %6861 = OpVectorShuffle %v4uint %9802 %9802 0 0 1 1
      %24815 = OpBitwiseOr %v4uint %6861 %7776
      %18142 = OpVectorShuffle %v2uint %19854 %19854 2 3
       %8213 = OpShiftRightLogical %v2uint %18142 %2311
       %6733 = OpBitwiseAnd %v2uint %18142 %2682
      %16267 = OpShiftLeftLogical %v2uint %6733 %1975
      %22503 = OpIMul %v2uint %16267 %1182
       %9803 = OpBitwiseOr %v2uint %8213 %22503
       %8033 = OpBitwiseAnd %v2uint %18142 %1140
      %22881 = OpShiftLeftLogical %v2uint %8033 %1975
      %18451 = OpBitwiseAnd %v2uint %18142 %2993
      %15357 = OpShiftRightLogical %v2uint %18451 %1975
       %7423 = OpCompositeExtract %uint %22881 0
      %24542 = OpCompositeExtract %uint %22881 1
       %7644 = OpCompositeExtract %uint %15357 0
       %7798 = OpCompositeExtract %uint %15357 1
      %16164 = OpCompositeConstruct %v4uint %7423 %24542 %7644 %7798
       %7777 = OpVectorShuffle %v4uint %16164 %16164 0 2 1 3
       %7791 = OpVectorShuffle %v4uint %9803 %9803 0 0 1 1
      %13886 = OpBitwiseOr %v4uint %7791 %7777
      %17818 = OpIAdd %uint %21670 %uint_2
       %6441 = OpAccessChain %_ptr_Uniform_v4uint %5134 %int_0 %17818
               OpStore %6441 %24815
      %11458 = OpIAdd %uint %21670 %uint_3
      %25174 = OpAccessChain %_ptr_Uniform_v4uint %5134 %int_0 %11458
               OpStore %25174 %13886
               OpBranch %19578
      %19578 = OpLabel
               OpReturn
               OpFunctionEnd
#endif

const uint32_t texture_load_gbgr8_rgb8_cs[] = {
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
    0x00040017, 0x00000011, 0x0000000B, 0x00000002, 0x00040017, 0x00000017,
    0x0000000B, 0x00000004, 0x00040015, 0x0000000C, 0x00000020, 0x00000001,
    0x00040017, 0x00000012, 0x0000000C, 0x00000002, 0x00040017, 0x00000016,
    0x0000000C, 0x00000003, 0x00020014, 0x00000009, 0x00040017, 0x00000014,
    0x0000000B, 0x00000003, 0x0004002B, 0x0000000B, 0x00000A52, 0x00000018,
    0x0004002B, 0x0000000B, 0x00000A87, 0x0000FF00, 0x0004002B, 0x0000000B,
    0x00000A22, 0x00000008, 0x0004002B, 0x0000000B, 0x0000014A, 0x00000101,
    0x0004002B, 0x0000000B, 0x00000144, 0x000000FF, 0x0004002B, 0x0000000B,
    0x000005A9, 0x00FF0000, 0x0004002B, 0x0000000B, 0x00000A0D, 0x00000001,
    0x0004002B, 0x0000000B, 0x00000A10, 0x00000002, 0x0004002B, 0x0000000B,
    0x000008A6, 0x00FF00FF, 0x0004002B, 0x0000000B, 0x000005FD, 0xFF00FF00,
    0x0004002B, 0x0000000B, 0x00000A13, 0x00000003, 0x0004002B, 0x0000000B,
    0x00000A3A, 0x00000010, 0x0004002B, 0x0000000B, 0x00000A0A, 0x00000000,
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
    0x00000A16, 0x00000004, 0x0004002B, 0x0000000C, 0x0000078B, 0x0FFFFFFF,
    0x0004002B, 0x0000000C, 0x00000A05, 0xFFFFFFFE, 0x0004002B, 0x0000000B,
    0x00000A6A, 0x00000020, 0x000A001E, 0x00000489, 0x0000000B, 0x0000000B,
    0x0000000B, 0x0000000B, 0x00000014, 0x0000000B, 0x0000000B, 0x0000000B,
    0x00040020, 0x00000706, 0x00000002, 0x00000489, 0x0004003B, 0x00000706,
    0x0000147D, 0x00000002, 0x0004002B, 0x0000000C, 0x00000A0B, 0x00000000,
    0x00040020, 0x00000288, 0x00000002, 0x0000000B, 0x00040020, 0x00000291,
    0x00000002, 0x00000014, 0x00040020, 0x00000292, 0x00000001, 0x00000014,
    0x0004003B, 0x00000292, 0x00000F48, 0x00000001, 0x0006002C, 0x00000014,
    0x00000A2B, 0x00000A13, 0x00000A0A, 0x00000A0A, 0x00040017, 0x0000000F,
    0x00000009, 0x00000002, 0x0003001D, 0x000007DC, 0x00000017, 0x0003001E,
    0x000007B4, 0x000007DC, 0x00040020, 0x00000A31, 0x00000002, 0x000007B4,
    0x0004003B, 0x00000A31, 0x0000107A, 0x00000002, 0x00040020, 0x00000294,
    0x00000002, 0x00000017, 0x0003001D, 0x000007DD, 0x00000017, 0x0003001E,
    0x000007B5, 0x000007DD, 0x00040020, 0x00000A32, 0x00000002, 0x000007B5,
    0x0004003B, 0x00000A32, 0x0000140E, 0x00000002, 0x0006002C, 0x00000014,
    0x00000BC3, 0x00000A16, 0x00000A6A, 0x00000A0D, 0x0004002B, 0x0000000B,
    0x00000A25, 0x00000009, 0x0007002C, 0x00000017, 0x000009CE, 0x000008A6,
    0x000008A6, 0x000008A6, 0x000008A6, 0x0007002C, 0x00000017, 0x0000013D,
    0x00000A22, 0x00000A22, 0x00000A22, 0x00000A22, 0x0007002C, 0x00000017,
    0x0000072E, 0x000005FD, 0x000005FD, 0x000005FD, 0x000005FD, 0x0007002C,
    0x00000017, 0x000002ED, 0x00000A3A, 0x00000A3A, 0x00000A3A, 0x00000A3A,
    0x0005002C, 0x00000011, 0x00000907, 0x00000A52, 0x00000A52, 0x0005002C,
    0x00000011, 0x00000A7A, 0x00000A87, 0x00000A87, 0x0005002C, 0x00000011,
    0x000007B7, 0x00000A22, 0x00000A22, 0x0005002C, 0x00000011, 0x0000049E,
    0x0000014A, 0x0000014A, 0x0005002C, 0x00000011, 0x00000474, 0x00000144,
    0x00000144, 0x0005002C, 0x00000011, 0x00000BB1, 0x000005A9, 0x000005A9,
    0x00050036, 0x00000008, 0x0000161F, 0x00000000, 0x00000502, 0x000200F8,
    0x00003B06, 0x000300F7, 0x00004C7A, 0x00000000, 0x000300FB, 0x00000A0A,
    0x00003B21, 0x000200F8, 0x00003B21, 0x0004003D, 0x00000014, 0x0000312F,
    0x00000F48, 0x000500C4, 0x00000014, 0x000027F5, 0x0000312F, 0x00000A2B,
    0x00050041, 0x00000291, 0x0000625A, 0x0000147D, 0x00000A17, 0x0004003D,
    0x00000014, 0x000059B5, 0x0000625A, 0x0007004F, 0x00000011, 0x00004993,
    0x000027F5, 0x000027F5, 0x00000000, 0x00000001, 0x0007004F, 0x00000011,
    0x000019E2, 0x000059B5, 0x000059B5, 0x00000000, 0x00000001, 0x000500AE,
    0x0000000F, 0x00004288, 0x00004993, 0x000019E2, 0x0004009A, 0x00000009,
    0x00006067, 0x00004288, 0x000300F7, 0x0000188A, 0x00000002, 0x000400FA,
    0x00006067, 0x000055E8, 0x0000188A, 0x000200F8, 0x000055E8, 0x000200F9,
    0x00004C7A, 0x000200F8, 0x0000188A, 0x0004007C, 0x00000016, 0x00001A8B,
    0x000027F5, 0x00050041, 0x00000288, 0x00004968, 0x0000147D, 0x00000A1D,
    0x0004003D, 0x0000000B, 0x0000263C, 0x00004968, 0x00050051, 0x0000000B,
    0x00004F98, 0x000059B5, 0x00000001, 0x00050051, 0x0000000C, 0x00003964,
    0x00001A8B, 0x00000000, 0x00050084, 0x0000000C, 0x0000591A, 0x00003964,
    0x00000A23, 0x00050051, 0x0000000C, 0x000018DA, 0x00001A8B, 0x00000002,
    0x0004007C, 0x0000000C, 0x000038A9, 0x00004F98, 0x00050084, 0x0000000C,
    0x00002C0F, 0x000018DA, 0x000038A9, 0x00050051, 0x0000000C, 0x000044BE,
    0x00001A8B, 0x00000001, 0x00050080, 0x0000000C, 0x000056D4, 0x00002C0F,
    0x000044BE, 0x0004007C, 0x0000000C, 0x00005785, 0x0000263C, 0x00050084,
    0x0000000C, 0x00005FD7, 0x000056D4, 0x00005785, 0x00050080, 0x0000000C,
    0x00001B95, 0x0000591A, 0x00005FD7, 0x0004007C, 0x0000000B, 0x00004B46,
    0x00001B95, 0x00050041, 0x00000288, 0x00004C04, 0x0000147D, 0x00000A1A,
    0x0004003D, 0x0000000B, 0x0000595B, 0x00004C04, 0x00050080, 0x0000000B,
    0x00002145, 0x00004B46, 0x0000595B, 0x000500C2, 0x0000000B, 0x000054A6,
    0x00002145, 0x00000A16, 0x00050041, 0x00000288, 0x000051D6, 0x0000147D,
    0x00000A0B, 0x0004003D, 0x0000000B, 0x000053A3, 0x000051D6, 0x000500C7,
    0x0000000B, 0x000018ED, 0x000053A3, 0x00000A0D, 0x000500AB, 0x00000009,
    0x000028E3, 0x000018ED, 0x00000A0A, 0x000300F7, 0x00005AE2, 0x00000002,
    0x000400FA, 0x000028E3, 0x0000277C, 0x00002A0D, 0x000200F8, 0x0000277C,
    0x000500C7, 0x0000000B, 0x00005BD4, 0x000053A3, 0x00000A10, 0x000500AB,
    0x00000009, 0x00003FAC, 0x00005BD4, 0x00000A0A, 0x000300F7, 0x00001E0B,
    0x00000002, 0x000400FA, 0x00003FAC, 0x00002F61, 0x00006228, 0x000200F8,
    0x00002F61, 0x00050041, 0x00000288, 0x00004722, 0x0000147D, 0x00000A11,
    0x0004003D, 0x0000000B, 0x00003D0B, 0x00004722, 0x00050041, 0x00000288,
    0x00005860, 0x0000147D, 0x00000A14, 0x0004003D, 0x0000000B, 0x0000541F,
    0x00005860, 0x000500C3, 0x0000000C, 0x00003A4B, 0x000044BE, 0x00000A17,
    0x000500C3, 0x0000000C, 0x00004955, 0x000018DA, 0x00000A11, 0x000500C2,
    0x0000000B, 0x00004947, 0x0000541F, 0x00000A16, 0x0004007C, 0x0000000C,
    0x000018AA, 0x00004947, 0x00050084, 0x0000000C, 0x00005321, 0x00004955,
    0x000018AA, 0x00050080, 0x0000000C, 0x00003B27, 0x00003A4B, 0x00005321,
    0x000500C2, 0x0000000B, 0x00002348, 0x00003D0B, 0x00000A19, 0x0004007C,
    0x0000000C, 0x00003901, 0x00002348, 0x00050084, 0x0000000C, 0x000020F4,
    0x00003B27, 0x00003901, 0x000500C3, 0x0000000C, 0x000032BA, 0x00003964,
    0x00000A1A, 0x00050080, 0x0000000C, 0x00005FEE, 0x000032BA, 0x000020F4,
    0x000500C4, 0x0000000C, 0x0000225D, 0x00005FEE, 0x00000A22, 0x000500C7,
    0x0000000C, 0x00002CF6, 0x0000225D, 0x0000078B, 0x000500C4, 0x0000000C,
    0x000049FA, 0x00002CF6, 0x00000A0E, 0x000500C7, 0x0000000C, 0x00004D38,
    0x00003964, 0x00000A20, 0x000500C7, 0x0000000C, 0x00003138, 0x000044BE,
    0x00000A1D, 0x000500C4, 0x0000000C, 0x0000454D, 0x00003138, 0x00000A11,
    0x00050080, 0x0000000C, 0x0000434B, 0x00004D38, 0x0000454D, 0x000500C4,
    0x0000000C, 0x00001B88, 0x0000434B, 0x00000A22, 0x000500C3, 0x0000000C,
    0x00005DE3, 0x00001B88, 0x00000A1D, 0x000500C3, 0x0000000C, 0x00002215,
    0x000044BE, 0x00000A14, 0x00050080, 0x0000000C, 0x000035A3, 0x00002215,
    0x00004955, 0x000500C7, 0x0000000C, 0x00005A0C, 0x000035A3, 0x00000A0E,
    0x000500C3, 0x0000000C, 0x00004112, 0x00003964, 0x00000A14, 0x000500C4,
    0x0000000C, 0x0000496A, 0x00005A0C, 0x00000A0E, 0x00050080, 0x0000000C,
    0x000034BD, 0x00004112, 0x0000496A, 0x000500C7, 0x0000000C, 0x00004ADD,
    0x000034BD, 0x00000A14, 0x000500C4, 0x0000000C, 0x0000544A, 0x00004ADD,
    0x00000A0E, 0x00050080, 0x0000000C, 0x00003C4B, 0x00005A0C, 0x0000544A,
    0x000500C7, 0x0000000C, 0x0000335E, 0x00005DE3, 0x000009DB, 0x00050080,
    0x0000000C, 0x00004F70, 0x000049FA, 0x0000335E, 0x000500C4, 0x0000000C,
    0x00005B31, 0x00004F70, 0x00000A0E, 0x000500C7, 0x0000000C, 0x00005AEA,
    0x00005DE3, 0x00000A38, 0x00050080, 0x0000000C, 0x0000285C, 0x00005B31,
    0x00005AEA, 0x000500C7, 0x0000000C, 0x000047B4, 0x000018DA, 0x00000A14,
    0x000500C4, 0x0000000C, 0x0000544B, 0x000047B4, 0x00000A22, 0x00050080,
    0x0000000C, 0x00004157, 0x0000285C, 0x0000544B, 0x000500C7, 0x0000000C,
    0x00004ADE, 0x000044BE, 0x00000A0E, 0x000500C4, 0x0000000C, 0x0000544C,
    0x00004ADE, 0x00000A17, 0x00050080, 0x0000000C, 0x00004158, 0x00004157,
    0x0000544C, 0x000500C7, 0x0000000C, 0x00004FD6, 0x00003C4B, 0x00000A0E,
    0x000500C4, 0x0000000C, 0x00002703, 0x00004FD6, 0x00000A14, 0x000500C3,
    0x0000000C, 0x00003332, 0x00004158, 0x00000A1D, 0x000500C7, 0x0000000C,
    0x000036D6, 0x00003332, 0x00000A20, 0x00050080, 0x0000000C, 0x00003412,
    0x00002703, 0x000036D6, 0x000500C4, 0x0000000C, 0x00005B32, 0x00003412,
    0x00000A14, 0x000500C7, 0x0000000C, 0x00005AB1, 0x00003C4B, 0x00000A05,
    0x00050080, 0x0000000C, 0x00002A9C, 0x00005B32, 0x00005AB1, 0x000500C4,
    0x0000000C, 0x00005B33, 0x00002A9C, 0x00000A11, 0x000500C7, 0x0000000C,
    0x00005AB2, 0x00004158, 0x0000040B, 0x00050080, 0x0000000C, 0x00002A9D,
    0x00005B33, 0x00005AB2, 0x000500C4, 0x0000000C, 0x00005B34, 0x00002A9D,
    0x00000A14, 0x000500C7, 0x0000000C, 0x00005EA0, 0x00004158, 0x00000AC8,
    0x00050080, 0x0000000C, 0x000054ED, 0x00005B34, 0x00005EA0, 0x000200F9,
    0x00001E0B, 0x000200F8, 0x00006228, 0x0004007C, 0x00000012, 0x00001A8C,
    0x00004993, 0x00050041, 0x00000288, 0x00004969, 0x0000147D, 0x00000A11,
    0x0004003D, 0x0000000B, 0x00002EB2, 0x00004969, 0x00050051, 0x0000000C,
    0x00004944, 0x00001A8C, 0x00000000, 0x000500C3, 0x0000000C, 0x00004CF5,
    0x00004944, 0x00000A1A, 0x00050051, 0x0000000C, 0x00002747, 0x00001A8C,
    0x00000001, 0x000500C3, 0x0000000C, 0x0000405C, 0x00002747, 0x00000A1A,
    0x000500C2, 0x0000000B, 0x00005B4D, 0x00002EB2, 0x00000A19, 0x0004007C,
    0x0000000C, 0x000018AB, 0x00005B4D, 0x00050084, 0x0000000C, 0x00005347,
    0x0000405C, 0x000018AB, 0x00050080, 0x0000000C, 0x00003F5E, 0x00004CF5,
    0x00005347, 0x000500C4, 0x0000000C, 0x00004A8E, 0x00003F5E, 0x00000A25,
    0x000500C7, 0x0000000C, 0x00002AB6, 0x00004944, 0x00000A20, 0x000500C7,
    0x0000000C, 0x00003139, 0x00002747, 0x00000A35, 0x000500C4, 0x0000000C,
    0x0000454E, 0x00003139, 0x00000A11, 0x00050080, 0x0000000C, 0x00004397,
    0x00002AB6, 0x0000454E, 0x000500C4, 0x0000000C, 0x000018E7, 0x00004397,
    0x00000A10, 0x000500C7, 0x0000000C, 0x000027B1, 0x000018E7, 0x000009DB,
    0x000500C4, 0x0000000C, 0x00002F76, 0x000027B1, 0x00000A0E, 0x00050080,
    0x0000000C, 0x00003C4C, 0x00004A8E, 0x00002F76, 0x000500C7, 0x0000000C,
    0x00003397, 0x000018E7, 0x00000A38, 0x00050080, 0x0000000C, 0x00004D30,
    0x00003C4C, 0x00003397, 0x000500C7, 0x0000000C, 0x000047B5, 0x00002747,
    0x00000A0E, 0x000500C4, 0x0000000C, 0x0000544D, 0x000047B5, 0x00000A17,
    0x00050080, 0x0000000C, 0x00004159, 0x00004D30, 0x0000544D, 0x000500C7,
    0x0000000C, 0x00005022, 0x00004159, 0x0000040B, 0x000500C4, 0x0000000C,
    0x00002416, 0x00005022, 0x00000A14, 0x000500C7, 0x0000000C, 0x00004A33,
    0x00002747, 0x00000A3B, 0x000500C4, 0x0000000C, 0x00002F77, 0x00004A33,
    0x00000A20, 0x00050080, 0x0000000C, 0x0000415A, 0x00002416, 0x00002F77,
    0x000500C7, 0x0000000C, 0x00004ADF, 0x00004159, 0x00000388, 0x000500C4,
    0x0000000C, 0x0000544E, 0x00004ADF, 0x00000A11, 0x00050080, 0x0000000C,
    0x00004144, 0x0000415A, 0x0000544E, 0x000500C7, 0x0000000C, 0x00005083,
    0x00002747, 0x00000A23, 0x000500C3, 0x0000000C, 0x000041BF, 0x00005083,
    0x00000A11, 0x000500C3, 0x0000000C, 0x00001EEC, 0x00004944, 0x00000A14,
    0x00050080, 0x0000000C, 0x000035B6, 0x000041BF, 0x00001EEC, 0x000500C7,
    0x0000000C, 0x00005453, 0x000035B6, 0x00000A14, 0x000500C4, 0x0000000C,
    0x0000544F, 0x00005453, 0x00000A1D, 0x00050080, 0x0000000C, 0x00003C4D,
    0x00004144, 0x0000544F, 0x000500C7, 0x0000000C, 0x0000374D, 0x00004159,
    0x00000AC8, 0x00050080, 0x0000000C, 0x00002F42, 0x00003C4D, 0x0000374D,
    0x000200F9, 0x00001E0B, 0x000200F8, 0x00001E0B, 0x000700F5, 0x0000000C,
    0x0000292C, 0x000054ED, 0x00002F61, 0x00002F42, 0x00006228, 0x000200F9,
    0x00005AE2, 0x000200F8, 0x00002A0D, 0x00050041, 0x00000288, 0x00005098,
    0x0000147D, 0x00000A11, 0x0004003D, 0x0000000B, 0x00003D0C, 0x00005098,
    0x00050041, 0x00000288, 0x000053B3, 0x0000147D, 0x00000A14, 0x0004003D,
    0x0000000B, 0x00002EEE, 0x000053B3, 0x00050084, 0x0000000C, 0x00002007,
    0x00003964, 0x00000A17, 0x0004007C, 0x0000000C, 0x00002DD8, 0x00002EEE,
    0x00050084, 0x0000000C, 0x000021F2, 0x000018DA, 0x00002DD8, 0x00050080,
    0x0000000C, 0x0000208E, 0x000021F2, 0x000044BE, 0x0004007C, 0x0000000C,
    0x000022F8, 0x00003D0C, 0x00050084, 0x0000000C, 0x00001E9F, 0x0000208E,
    0x000022F8, 0x00050080, 0x0000000C, 0x00001F30, 0x00002007, 0x00001E9F,
    0x000200F9, 0x00005AE2, 0x000200F8, 0x00005AE2, 0x000700F5, 0x0000000C,
    0x00004D24, 0x0000292C, 0x00001E0B, 0x00001F30, 0x00002A0D, 0x00050041,
    0x00000288, 0x0000615A, 0x0000147D, 0x00000A0E, 0x0004003D, 0x0000000B,
    0x00001D4E, 0x0000615A, 0x0004007C, 0x0000000C, 0x00003D46, 0x00001D4E,
    0x00050080, 0x0000000C, 0x00003CDB, 0x00003D46, 0x00004D24, 0x0004007C,
    0x0000000B, 0x0000487C, 0x00003CDB, 0x000500C2, 0x0000000B, 0x000053F5,
    0x0000487C, 0x00000A16, 0x000500C2, 0x0000000B, 0x00003A95, 0x000053A3,
    0x00000A10, 0x000500C7, 0x0000000B, 0x000020CA, 0x00003A95, 0x00000A13,
    0x00060041, 0x00000294, 0x000050F7, 0x0000107A, 0x00000A0B, 0x000053F5,
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
    0x00001FCE, 0x00005AE2, 0x00003FF8, 0x00002957, 0x000500AA, 0x00000009,
    0x00004CB6, 0x000020CA, 0x00000A13, 0x000500A6, 0x00000009, 0x00003B23,
    0x00005376, 0x00004CB6, 0x000300F7, 0x00002DA2, 0x00000000, 0x000400FA,
    0x00003B23, 0x00002B38, 0x00002DA2, 0x000200F8, 0x00002B38, 0x000500C4,
    0x00000017, 0x00005E17, 0x00005879, 0x000002ED, 0x000500C2, 0x00000017,
    0x00003BE7, 0x00005879, 0x000002ED, 0x000500C5, 0x00000017, 0x000029E8,
    0x00005E17, 0x00003BE7, 0x000200F9, 0x00002DA2, 0x000200F8, 0x00002DA2,
    0x000700F5, 0x00000017, 0x00004D8D, 0x00005879, 0x00003463, 0x000029E8,
    0x00002B38, 0x0007004F, 0x00000011, 0x00005675, 0x00004D8D, 0x00004D8D,
    0x00000000, 0x00000001, 0x000500C2, 0x00000011, 0x0000392F, 0x00005675,
    0x00000907, 0x000500C7, 0x00000011, 0x00001A4A, 0x00005675, 0x00000A7A,
    0x000500C4, 0x00000011, 0x00003F88, 0x00001A4A, 0x000007B7, 0x00050084,
    0x00000011, 0x000057E4, 0x00003F88, 0x0000049E, 0x000500C5, 0x00000011,
    0x00002648, 0x0000392F, 0x000057E4, 0x000500C7, 0x00000011, 0x00001F5E,
    0x00005675, 0x00000474, 0x000500C4, 0x00000011, 0x0000595E, 0x00001F5E,
    0x000007B7, 0x000500C7, 0x00000011, 0x00004810, 0x00005675, 0x00000BB1,
    0x000500C2, 0x00000011, 0x00003BFA, 0x00004810, 0x000007B7, 0x00050051,
    0x0000000B, 0x00001CFC, 0x0000595E, 0x00000000, 0x00050051, 0x0000000B,
    0x00005FDB, 0x0000595E, 0x00000001, 0x00050051, 0x0000000B, 0x00001DD9,
    0x00003BFA, 0x00000000, 0x00050051, 0x0000000B, 0x00001E73, 0x00003BFA,
    0x00000001, 0x00070050, 0x00000017, 0x00003F21, 0x00001CFC, 0x00005FDB,
    0x00001DD9, 0x00001E73, 0x0009004F, 0x00000017, 0x00001E5E, 0x00003F21,
    0x00003F21, 0x00000000, 0x00000002, 0x00000001, 0x00000003, 0x0009004F,
    0x00000017, 0x00001ACC, 0x00002648, 0x00002648, 0x00000000, 0x00000000,
    0x00000001, 0x00000001, 0x000500C5, 0x00000017, 0x000060EE, 0x00001ACC,
    0x00001E5E, 0x0007004F, 0x00000011, 0x000046DD, 0x00004D8D, 0x00004D8D,
    0x00000002, 0x00000003, 0x000500C2, 0x00000011, 0x00002014, 0x000046DD,
    0x00000907, 0x000500C7, 0x00000011, 0x00001A4B, 0x000046DD, 0x00000A7A,
    0x000500C4, 0x00000011, 0x00003F89, 0x00001A4B, 0x000007B7, 0x00050084,
    0x00000011, 0x000057E5, 0x00003F89, 0x0000049E, 0x000500C5, 0x00000011,
    0x00002649, 0x00002014, 0x000057E5, 0x000500C7, 0x00000011, 0x00001F5F,
    0x000046DD, 0x00000474, 0x000500C4, 0x00000011, 0x0000595F, 0x00001F5F,
    0x000007B7, 0x000500C7, 0x00000011, 0x00004811, 0x000046DD, 0x00000BB1,
    0x000500C2, 0x00000011, 0x00003BFB, 0x00004811, 0x000007B7, 0x00050051,
    0x0000000B, 0x00001CFD, 0x0000595F, 0x00000000, 0x00050051, 0x0000000B,
    0x00005FDC, 0x0000595F, 0x00000001, 0x00050051, 0x0000000B, 0x00001DDA,
    0x00003BFB, 0x00000000, 0x00050051, 0x0000000B, 0x00001E74, 0x00003BFB,
    0x00000001, 0x00070050, 0x00000017, 0x00003F22, 0x00001CFD, 0x00005FDC,
    0x00001DDA, 0x00001E74, 0x0009004F, 0x00000017, 0x00001E5F, 0x00003F22,
    0x00003F22, 0x00000000, 0x00000002, 0x00000001, 0x00000003, 0x0009004F,
    0x00000017, 0x000019C2, 0x00002649, 0x00002649, 0x00000000, 0x00000000,
    0x00000001, 0x00000001, 0x000500C5, 0x00000017, 0x00006098, 0x000019C2,
    0x00001E5F, 0x00060041, 0x00000294, 0x0000201B, 0x0000140E, 0x00000A0B,
    0x000054A6, 0x0003003E, 0x0000201B, 0x000060EE, 0x00050080, 0x0000000B,
    0x00002CC1, 0x000054A6, 0x00000A0D, 0x00060041, 0x00000294, 0x00005C66,
    0x0000140E, 0x00000A0B, 0x00002CC1, 0x0003003E, 0x00005C66, 0x00006098,
    0x000600A9, 0x0000000B, 0x000041BE, 0x000028E3, 0x00000A6A, 0x00000A3A,
    0x000500C2, 0x0000000B, 0x0000593C, 0x000041BE, 0x00000A16, 0x00050080,
    0x0000000B, 0x0000367B, 0x000053F5, 0x0000593C, 0x00060041, 0x00000294,
    0x0000571A, 0x0000107A, 0x00000A0B, 0x0000367B, 0x0004003D, 0x00000017,
    0x000019B2, 0x0000571A, 0x000300F7, 0x00003A1A, 0x00000000, 0x000400FA,
    0x00005686, 0x00002958, 0x00003A1A, 0x000200F8, 0x00002958, 0x000500C7,
    0x00000017, 0x00004760, 0x000019B2, 0x000009CE, 0x000500C4, 0x00000017,
    0x000024D2, 0x00004760, 0x0000013D, 0x000500C7, 0x00000017, 0x000050AD,
    0x000019B2, 0x0000072E, 0x000500C2, 0x00000017, 0x0000448E, 0x000050AD,
    0x0000013D, 0x000500C5, 0x00000017, 0x00003FF9, 0x000024D2, 0x0000448E,
    0x000200F9, 0x00003A1A, 0x000200F8, 0x00003A1A, 0x000700F5, 0x00000017,
    0x00002AAC, 0x000019B2, 0x00002DA2, 0x00003FF9, 0x00002958, 0x000300F7,
    0x00002DA3, 0x00000000, 0x000400FA, 0x00003B23, 0x00002B39, 0x00002DA3,
    0x000200F8, 0x00002B39, 0x000500C4, 0x00000017, 0x00005E18, 0x00002AAC,
    0x000002ED, 0x000500C2, 0x00000017, 0x00003BE8, 0x00002AAC, 0x000002ED,
    0x000500C5, 0x00000017, 0x000029E9, 0x00005E18, 0x00003BE8, 0x000200F9,
    0x00002DA3, 0x000200F8, 0x00002DA3, 0x000700F5, 0x00000017, 0x00004D8E,
    0x00002AAC, 0x00003A1A, 0x000029E9, 0x00002B39, 0x0007004F, 0x00000011,
    0x00005676, 0x00004D8E, 0x00004D8E, 0x00000000, 0x00000001, 0x000500C2,
    0x00000011, 0x00003930, 0x00005676, 0x00000907, 0x000500C7, 0x00000011,
    0x00001A4C, 0x00005676, 0x00000A7A, 0x000500C4, 0x00000011, 0x00003F8A,
    0x00001A4C, 0x000007B7, 0x00050084, 0x00000011, 0x000057E6, 0x00003F8A,
    0x0000049E, 0x000500C5, 0x00000011, 0x0000264A, 0x00003930, 0x000057E6,
    0x000500C7, 0x00000011, 0x00001F60, 0x00005676, 0x00000474, 0x000500C4,
    0x00000011, 0x00005960, 0x00001F60, 0x000007B7, 0x000500C7, 0x00000011,
    0x00004812, 0x00005676, 0x00000BB1, 0x000500C2, 0x00000011, 0x00003BFC,
    0x00004812, 0x000007B7, 0x00050051, 0x0000000B, 0x00001CFE, 0x00005960,
    0x00000000, 0x00050051, 0x0000000B, 0x00005FDD, 0x00005960, 0x00000001,
    0x00050051, 0x0000000B, 0x00001DDB, 0x00003BFC, 0x00000000, 0x00050051,
    0x0000000B, 0x00001E75, 0x00003BFC, 0x00000001, 0x00070050, 0x00000017,
    0x00003F23, 0x00001CFE, 0x00005FDD, 0x00001DDB, 0x00001E75, 0x0009004F,
    0x00000017, 0x00001E60, 0x00003F23, 0x00003F23, 0x00000000, 0x00000002,
    0x00000001, 0x00000003, 0x0009004F, 0x00000017, 0x00001ACD, 0x0000264A,
    0x0000264A, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x000500C5,
    0x00000017, 0x000060EF, 0x00001ACD, 0x00001E60, 0x0007004F, 0x00000011,
    0x000046DE, 0x00004D8E, 0x00004D8E, 0x00000002, 0x00000003, 0x000500C2,
    0x00000011, 0x00002015, 0x000046DE, 0x00000907, 0x000500C7, 0x00000011,
    0x00001A4D, 0x000046DE, 0x00000A7A, 0x000500C4, 0x00000011, 0x00003F8B,
    0x00001A4D, 0x000007B7, 0x00050084, 0x00000011, 0x000057E7, 0x00003F8B,
    0x0000049E, 0x000500C5, 0x00000011, 0x0000264B, 0x00002015, 0x000057E7,
    0x000500C7, 0x00000011, 0x00001F61, 0x000046DE, 0x00000474, 0x000500C4,
    0x00000011, 0x00005961, 0x00001F61, 0x000007B7, 0x000500C7, 0x00000011,
    0x00004813, 0x000046DE, 0x00000BB1, 0x000500C2, 0x00000011, 0x00003BFD,
    0x00004813, 0x000007B7, 0x00050051, 0x0000000B, 0x00001CFF, 0x00005961,
    0x00000000, 0x00050051, 0x0000000B, 0x00005FDE, 0x00005961, 0x00000001,
    0x00050051, 0x0000000B, 0x00001DDC, 0x00003BFD, 0x00000000, 0x00050051,
    0x0000000B, 0x00001E76, 0x00003BFD, 0x00000001, 0x00070050, 0x00000017,
    0x00003F24, 0x00001CFF, 0x00005FDE, 0x00001DDC, 0x00001E76, 0x0009004F,
    0x00000017, 0x00001E61, 0x00003F24, 0x00003F24, 0x00000000, 0x00000002,
    0x00000001, 0x00000003, 0x0009004F, 0x00000017, 0x00001E6F, 0x0000264B,
    0x0000264B, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x000500C5,
    0x00000017, 0x0000363E, 0x00001E6F, 0x00001E61, 0x00050080, 0x0000000B,
    0x0000459A, 0x000054A6, 0x00000A10, 0x00060041, 0x00000294, 0x00001929,
    0x0000140E, 0x00000A0B, 0x0000459A, 0x0003003E, 0x00001929, 0x000060EF,
    0x00050080, 0x0000000B, 0x00002CC2, 0x000054A6, 0x00000A13, 0x00060041,
    0x00000294, 0x00006256, 0x0000140E, 0x00000A0B, 0x00002CC2, 0x0003003E,
    0x00006256, 0x0000363E, 0x000200F9, 0x00004C7A, 0x000200F8, 0x00004C7A,
    0x000100FD, 0x00010038,
};
