/** @file */
#ifndef PP2_MACHINE_STACK_DETAIL_LOAD_TABLES_H
#define PP2_MACHINE_STACK_DETAIL_LOAD_TABLES_H

#define PP2_STACK_FRAME_LOAD_0_0(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_0(P,addr,tag,value) PP2_STACK_FRAME_LOAD_0_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_0
#define PP2_STACK_FRAME_LOAD_DN_0(P,addr,tag,value) PP2_STACK_FRAME_LOAD_0_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_0

#define PP2_STACK_FRAME_LOAD_1_1(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_1(P,addr,tag,value) PP2_STACK_FRAME_LOAD_1_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_1
#define PP2_STACK_FRAME_LOAD_DN_1(P,addr,tag,value) PP2_STACK_FRAME_LOAD_1_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_1

#define PP2_STACK_FRAME_LOAD_2_2(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_2(P,addr,tag,value) PP2_STACK_FRAME_LOAD_2_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_2
#define PP2_STACK_FRAME_LOAD_DN_2(P,addr,tag,value) PP2_STACK_FRAME_LOAD_2_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_2

#define PP2_STACK_FRAME_LOAD_3_3(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_3(P,addr,tag,value) PP2_STACK_FRAME_LOAD_3_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_3
#define PP2_STACK_FRAME_LOAD_DN_3(P,addr,tag,value) PP2_STACK_FRAME_LOAD_3_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_3

#define PP2_STACK_FRAME_LOAD_4_4(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_4(P,addr,tag,value) PP2_STACK_FRAME_LOAD_4_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_4
#define PP2_STACK_FRAME_LOAD_DN_4(P,addr,tag,value) PP2_STACK_FRAME_LOAD_4_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_4

#define PP2_STACK_FRAME_LOAD_5_5(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_5(P,addr,tag,value) PP2_STACK_FRAME_LOAD_5_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_5
#define PP2_STACK_FRAME_LOAD_DN_5(P,addr,tag,value) PP2_STACK_FRAME_LOAD_5_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_5

#define PP2_STACK_FRAME_LOAD_6_6(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_6(P,addr,tag,value) PP2_STACK_FRAME_LOAD_6_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_6
#define PP2_STACK_FRAME_LOAD_DN_6(P,addr,tag,value) PP2_STACK_FRAME_LOAD_6_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_6

#define PP2_STACK_FRAME_LOAD_7_7(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_7(P,addr,tag,value) PP2_STACK_FRAME_LOAD_7_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_7
#define PP2_STACK_FRAME_LOAD_DN_7(P,addr,tag,value) PP2_STACK_FRAME_LOAD_7_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_7

#define PP2_STACK_FRAME_LOAD_8_8(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_8(P,addr,tag,value) PP2_STACK_FRAME_LOAD_8_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_8
#define PP2_STACK_FRAME_LOAD_DN_8(P,addr,tag,value) PP2_STACK_FRAME_LOAD_8_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_8

#define PP2_STACK_FRAME_LOAD_9_9(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_9(P,addr,tag,value) PP2_STACK_FRAME_LOAD_9_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_9
#define PP2_STACK_FRAME_LOAD_DN_9(P,addr,tag,value) PP2_STACK_FRAME_LOAD_9_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_9

#define PP2_STACK_FRAME_LOAD_10_10(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_10(P,addr,tag,value) PP2_STACK_FRAME_LOAD_10_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_10
#define PP2_STACK_FRAME_LOAD_DN_10(P,addr,tag,value) PP2_STACK_FRAME_LOAD_10_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_10

#define PP2_STACK_FRAME_LOAD_11_11(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_11(P,addr,tag,value) PP2_STACK_FRAME_LOAD_11_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_11
#define PP2_STACK_FRAME_LOAD_DN_11(P,addr,tag,value) PP2_STACK_FRAME_LOAD_11_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_11

#define PP2_STACK_FRAME_LOAD_12_12(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_12(P,addr,tag,value) PP2_STACK_FRAME_LOAD_12_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_12
#define PP2_STACK_FRAME_LOAD_DN_12(P,addr,tag,value) PP2_STACK_FRAME_LOAD_12_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_12

#define PP2_STACK_FRAME_LOAD_13_13(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_13(P,addr,tag,value) PP2_STACK_FRAME_LOAD_13_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_13
#define PP2_STACK_FRAME_LOAD_DN_13(P,addr,tag,value) PP2_STACK_FRAME_LOAD_13_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_13

#define PP2_STACK_FRAME_LOAD_14_14(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_14(P,addr,tag,value) PP2_STACK_FRAME_LOAD_14_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_14
#define PP2_STACK_FRAME_LOAD_DN_14(P,addr,tag,value) PP2_STACK_FRAME_LOAD_14_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_14

#define PP2_STACK_FRAME_LOAD_15_15(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_15(P,addr,tag,value) PP2_STACK_FRAME_LOAD_15_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_15
#define PP2_STACK_FRAME_LOAD_DN_15(P,addr,tag,value) PP2_STACK_FRAME_LOAD_15_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_15

#define PP2_STACK_FRAME_LOAD_16_16(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_16(P,addr,tag,value) PP2_STACK_FRAME_LOAD_16_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_16
#define PP2_STACK_FRAME_LOAD_DN_16(P,addr,tag,value) PP2_STACK_FRAME_LOAD_16_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_16

#define PP2_STACK_FRAME_LOAD_17_17(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_17(P,addr,tag,value) PP2_STACK_FRAME_LOAD_17_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_17
#define PP2_STACK_FRAME_LOAD_DN_17(P,addr,tag,value) PP2_STACK_FRAME_LOAD_17_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_17

#define PP2_STACK_FRAME_LOAD_18_18(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_18(P,addr,tag,value) PP2_STACK_FRAME_LOAD_18_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_18
#define PP2_STACK_FRAME_LOAD_DN_18(P,addr,tag,value) PP2_STACK_FRAME_LOAD_18_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_18

#define PP2_STACK_FRAME_LOAD_19_19(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_19(P,addr,tag,value) PP2_STACK_FRAME_LOAD_19_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_19
#define PP2_STACK_FRAME_LOAD_DN_19(P,addr,tag,value) PP2_STACK_FRAME_LOAD_19_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_19

#define PP2_STACK_FRAME_LOAD_20_20(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_20(P,addr,tag,value) PP2_STACK_FRAME_LOAD_20_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_20
#define PP2_STACK_FRAME_LOAD_DN_20(P,addr,tag,value) PP2_STACK_FRAME_LOAD_20_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_20

#define PP2_STACK_FRAME_LOAD_21_21(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_21(P,addr,tag,value) PP2_STACK_FRAME_LOAD_21_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_21
#define PP2_STACK_FRAME_LOAD_DN_21(P,addr,tag,value) PP2_STACK_FRAME_LOAD_21_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_21

#define PP2_STACK_FRAME_LOAD_22_22(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_22(P,addr,tag,value) PP2_STACK_FRAME_LOAD_22_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_22
#define PP2_STACK_FRAME_LOAD_DN_22(P,addr,tag,value) PP2_STACK_FRAME_LOAD_22_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_22

#define PP2_STACK_FRAME_LOAD_23_23(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_23(P,addr,tag,value) PP2_STACK_FRAME_LOAD_23_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_23
#define PP2_STACK_FRAME_LOAD_DN_23(P,addr,tag,value) PP2_STACK_FRAME_LOAD_23_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_23

#define PP2_STACK_FRAME_LOAD_24_24(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_24(P,addr,tag,value) PP2_STACK_FRAME_LOAD_24_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_24
#define PP2_STACK_FRAME_LOAD_DN_24(P,addr,tag,value) PP2_STACK_FRAME_LOAD_24_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_24

#define PP2_STACK_FRAME_LOAD_25_25(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_25(P,addr,tag,value) PP2_STACK_FRAME_LOAD_25_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_25
#define PP2_STACK_FRAME_LOAD_DN_25(P,addr,tag,value) PP2_STACK_FRAME_LOAD_25_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_25

#define PP2_STACK_FRAME_LOAD_26_26(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_26(P,addr,tag,value) PP2_STACK_FRAME_LOAD_26_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_26
#define PP2_STACK_FRAME_LOAD_DN_26(P,addr,tag,value) PP2_STACK_FRAME_LOAD_26_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_26

#define PP2_STACK_FRAME_LOAD_27_27(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_27(P,addr,tag,value) PP2_STACK_FRAME_LOAD_27_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_27
#define PP2_STACK_FRAME_LOAD_DN_27(P,addr,tag,value) PP2_STACK_FRAME_LOAD_27_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_27

#define PP2_STACK_FRAME_LOAD_28_28(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_28(P,addr,tag,value) PP2_STACK_FRAME_LOAD_28_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_28
#define PP2_STACK_FRAME_LOAD_DN_28(P,addr,tag,value) PP2_STACK_FRAME_LOAD_28_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_28

#define PP2_STACK_FRAME_LOAD_29_29(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_29(P,addr,tag,value) PP2_STACK_FRAME_LOAD_29_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_29
#define PP2_STACK_FRAME_LOAD_DN_29(P,addr,tag,value) PP2_STACK_FRAME_LOAD_29_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_29

#define PP2_STACK_FRAME_LOAD_30_30(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_30(P,addr,tag,value) PP2_STACK_FRAME_LOAD_30_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_30
#define PP2_STACK_FRAME_LOAD_DN_30(P,addr,tag,value) PP2_STACK_FRAME_LOAD_30_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_30

#define PP2_STACK_FRAME_LOAD_31_31(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_31(P,addr,tag,value) PP2_STACK_FRAME_LOAD_31_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_31
#define PP2_STACK_FRAME_LOAD_DN_31(P,addr,tag,value) PP2_STACK_FRAME_LOAD_31_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_31

#define PP2_STACK_FRAME_LOAD_32_32(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_32(P,addr,tag,value) PP2_STACK_FRAME_LOAD_32_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_32
#define PP2_STACK_FRAME_LOAD_DN_32(P,addr,tag,value) PP2_STACK_FRAME_LOAD_32_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_32

#define PP2_STACK_FRAME_LOAD_33_33(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_33(P,addr,tag,value) PP2_STACK_FRAME_LOAD_33_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_33
#define PP2_STACK_FRAME_LOAD_DN_33(P,addr,tag,value) PP2_STACK_FRAME_LOAD_33_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_33

#define PP2_STACK_FRAME_LOAD_34_34(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_34(P,addr,tag,value) PP2_STACK_FRAME_LOAD_34_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_34
#define PP2_STACK_FRAME_LOAD_DN_34(P,addr,tag,value) PP2_STACK_FRAME_LOAD_34_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_34

#define PP2_STACK_FRAME_LOAD_35_35(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_35(P,addr,tag,value) PP2_STACK_FRAME_LOAD_35_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_35
#define PP2_STACK_FRAME_LOAD_DN_35(P,addr,tag,value) PP2_STACK_FRAME_LOAD_35_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_35

#define PP2_STACK_FRAME_LOAD_36_36(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_36(P,addr,tag,value) PP2_STACK_FRAME_LOAD_36_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_36
#define PP2_STACK_FRAME_LOAD_DN_36(P,addr,tag,value) PP2_STACK_FRAME_LOAD_36_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_36

#define PP2_STACK_FRAME_LOAD_37_37(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_37(P,addr,tag,value) PP2_STACK_FRAME_LOAD_37_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_37
#define PP2_STACK_FRAME_LOAD_DN_37(P,addr,tag,value) PP2_STACK_FRAME_LOAD_37_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_37

#define PP2_STACK_FRAME_LOAD_38_38(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_38(P,addr,tag,value) PP2_STACK_FRAME_LOAD_38_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_38
#define PP2_STACK_FRAME_LOAD_DN_38(P,addr,tag,value) PP2_STACK_FRAME_LOAD_38_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_38

#define PP2_STACK_FRAME_LOAD_39_39(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_39(P,addr,tag,value) PP2_STACK_FRAME_LOAD_39_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_39
#define PP2_STACK_FRAME_LOAD_DN_39(P,addr,tag,value) PP2_STACK_FRAME_LOAD_39_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_39

#define PP2_STACK_FRAME_LOAD_40_40(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_40(P,addr,tag,value) PP2_STACK_FRAME_LOAD_40_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_40
#define PP2_STACK_FRAME_LOAD_DN_40(P,addr,tag,value) PP2_STACK_FRAME_LOAD_40_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_40

#define PP2_STACK_FRAME_LOAD_41_41(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_41(P,addr,tag,value) PP2_STACK_FRAME_LOAD_41_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_41
#define PP2_STACK_FRAME_LOAD_DN_41(P,addr,tag,value) PP2_STACK_FRAME_LOAD_41_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_41

#define PP2_STACK_FRAME_LOAD_42_42(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_42(P,addr,tag,value) PP2_STACK_FRAME_LOAD_42_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_42
#define PP2_STACK_FRAME_LOAD_DN_42(P,addr,tag,value) PP2_STACK_FRAME_LOAD_42_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_42

#define PP2_STACK_FRAME_LOAD_43_43(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_43(P,addr,tag,value) PP2_STACK_FRAME_LOAD_43_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_43
#define PP2_STACK_FRAME_LOAD_DN_43(P,addr,tag,value) PP2_STACK_FRAME_LOAD_43_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_43

#define PP2_STACK_FRAME_LOAD_44_44(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_44(P,addr,tag,value) PP2_STACK_FRAME_LOAD_44_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_44
#define PP2_STACK_FRAME_LOAD_DN_44(P,addr,tag,value) PP2_STACK_FRAME_LOAD_44_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_44

#define PP2_STACK_FRAME_LOAD_45_45(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_45(P,addr,tag,value) PP2_STACK_FRAME_LOAD_45_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_45
#define PP2_STACK_FRAME_LOAD_DN_45(P,addr,tag,value) PP2_STACK_FRAME_LOAD_45_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_45

#define PP2_STACK_FRAME_LOAD_46_46(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_46(P,addr,tag,value) PP2_STACK_FRAME_LOAD_46_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_46
#define PP2_STACK_FRAME_LOAD_DN_46(P,addr,tag,value) PP2_STACK_FRAME_LOAD_46_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_46

#define PP2_STACK_FRAME_LOAD_47_47(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_47(P,addr,tag,value) PP2_STACK_FRAME_LOAD_47_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_47
#define PP2_STACK_FRAME_LOAD_DN_47(P,addr,tag,value) PP2_STACK_FRAME_LOAD_47_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_47

#define PP2_STACK_FRAME_LOAD_48_48(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_48(P,addr,tag,value) PP2_STACK_FRAME_LOAD_48_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_48
#define PP2_STACK_FRAME_LOAD_DN_48(P,addr,tag,value) PP2_STACK_FRAME_LOAD_48_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_48

#define PP2_STACK_FRAME_LOAD_49_49(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_49(P,addr,tag,value) PP2_STACK_FRAME_LOAD_49_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_49
#define PP2_STACK_FRAME_LOAD_DN_49(P,addr,tag,value) PP2_STACK_FRAME_LOAD_49_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_49

#define PP2_STACK_FRAME_LOAD_50_50(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_50(P,addr,tag,value) PP2_STACK_FRAME_LOAD_50_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_50
#define PP2_STACK_FRAME_LOAD_DN_50(P,addr,tag,value) PP2_STACK_FRAME_LOAD_50_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_50

#define PP2_STACK_FRAME_LOAD_51_51(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_51(P,addr,tag,value) PP2_STACK_FRAME_LOAD_51_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_51
#define PP2_STACK_FRAME_LOAD_DN_51(P,addr,tag,value) PP2_STACK_FRAME_LOAD_51_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_51

#define PP2_STACK_FRAME_LOAD_52_52(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_52(P,addr,tag,value) PP2_STACK_FRAME_LOAD_52_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_52
#define PP2_STACK_FRAME_LOAD_DN_52(P,addr,tag,value) PP2_STACK_FRAME_LOAD_52_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_52

#define PP2_STACK_FRAME_LOAD_53_53(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_53(P,addr,tag,value) PP2_STACK_FRAME_LOAD_53_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_53
#define PP2_STACK_FRAME_LOAD_DN_53(P,addr,tag,value) PP2_STACK_FRAME_LOAD_53_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_53

#define PP2_STACK_FRAME_LOAD_54_54(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_54(P,addr,tag,value) PP2_STACK_FRAME_LOAD_54_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_54
#define PP2_STACK_FRAME_LOAD_DN_54(P,addr,tag,value) PP2_STACK_FRAME_LOAD_54_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_54

#define PP2_STACK_FRAME_LOAD_55_55(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_55(P,addr,tag,value) PP2_STACK_FRAME_LOAD_55_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_55
#define PP2_STACK_FRAME_LOAD_DN_55(P,addr,tag,value) PP2_STACK_FRAME_LOAD_55_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_55

#define PP2_STACK_FRAME_LOAD_56_56(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_56(P,addr,tag,value) PP2_STACK_FRAME_LOAD_56_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_56
#define PP2_STACK_FRAME_LOAD_DN_56(P,addr,tag,value) PP2_STACK_FRAME_LOAD_56_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_56

#define PP2_STACK_FRAME_LOAD_57_57(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_57(P,addr,tag,value) PP2_STACK_FRAME_LOAD_57_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_57
#define PP2_STACK_FRAME_LOAD_DN_57(P,addr,tag,value) PP2_STACK_FRAME_LOAD_57_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_57

#define PP2_STACK_FRAME_LOAD_58_58(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_58(P,addr,tag,value) PP2_STACK_FRAME_LOAD_58_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_58
#define PP2_STACK_FRAME_LOAD_DN_58(P,addr,tag,value) PP2_STACK_FRAME_LOAD_58_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_58

#define PP2_STACK_FRAME_LOAD_59_59(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_59(P,addr,tag,value) PP2_STACK_FRAME_LOAD_59_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_59
#define PP2_STACK_FRAME_LOAD_DN_59(P,addr,tag,value) PP2_STACK_FRAME_LOAD_59_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_59

#define PP2_STACK_FRAME_LOAD_60_60(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_60(P,addr,tag,value) PP2_STACK_FRAME_LOAD_60_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_60
#define PP2_STACK_FRAME_LOAD_DN_60(P,addr,tag,value) PP2_STACK_FRAME_LOAD_60_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_60

#define PP2_STACK_FRAME_LOAD_61_61(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_61(P,addr,tag,value) PP2_STACK_FRAME_LOAD_61_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_61
#define PP2_STACK_FRAME_LOAD_DN_61(P,addr,tag,value) PP2_STACK_FRAME_LOAD_61_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_61

#define PP2_STACK_FRAME_LOAD_62_62(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_62(P,addr,tag,value) PP2_STACK_FRAME_LOAD_62_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_62
#define PP2_STACK_FRAME_LOAD_DN_62(P,addr,tag,value) PP2_STACK_FRAME_LOAD_62_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_62

#define PP2_STACK_FRAME_LOAD_63_63(P,value) ,P##value,
#define PP2_STACK_FRAME_LOAD_UP_63(P,addr,tag,value) PP2_STACK_FRAME_LOAD_63_##addr(,P##value) PP2_STACK_FRAME_LOAD_DN_63
#define PP2_STACK_FRAME_LOAD_DN_63(P,addr,tag,value) PP2_STACK_FRAME_LOAD_63_##addr(,P##value) PP2_STACK_FRAME_LOAD_UP_63

#endif