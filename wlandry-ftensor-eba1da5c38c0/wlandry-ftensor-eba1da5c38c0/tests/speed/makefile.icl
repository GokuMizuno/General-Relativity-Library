CC=icl
CXX=icl
CPP=icl
CPPFLAGS=/Qrestrict /O3 /W3 /TP
CXXFLAGS=/Qrestrict /O3 /W3 /TP


all: little.exe littlefast.exe example.exe examplefast.exe speed_test.exe one_over one_over_fast


one_over: one_over_1_minus_x1.exe one_over_1_minus_x2.exe one_over_1_minus_x3.exe one_over_1_minus_x4.exe one_over_1_minus_x5.exe one_over_1_minus_x6.exe one_over_1_minus_x7.exe one_over_1_minus_x8.exe one_over_1_minus_x9.exe
one_over_fast: one_over_1_minus_x_fast1.exe one_over_1_minus_x_fast2.exe one_over_1_minus_x_fast3.exe one_over_1_minus_x_fast4.exe one_over_1_minus_x_fast5.exe one_over_1_minus_x_fast6.exe one_over_1_minus_x_fast7.exe one_over_1_minus_x_fast8.exe one_over_1_minus_x_fast9.exe

algebra3: algebra3_test1 algebra3_test2 algebra3_test3 algebra3_test4 algebra3_test5 algebra3_test6 algebra3_test7 algebra3_test8 algebra3_test9


clean:
	del *.exe *.obj