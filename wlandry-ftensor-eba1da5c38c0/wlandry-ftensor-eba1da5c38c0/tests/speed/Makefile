# CXX=/home/boo/compilers/ekopath-4.0.12.1/bin/pathCC
# CXXOPTIMIZE=-Ofast -OPT:alias=restrict
# CXXFLAGS=-Drestrict= $(CXXOPTIMIZE)

# CXX=/home/boo/compilers/open64-5.0-build/bin/openCC
# # CXXOPTIMIZE=-Ofast
# CXXOPTIMIZE=-Ofast -fb-create fbout
# # CXXOPTIMIZE=-Ofast -fb-opt fbout
# CXXFLAGS=-Wall -Werror -Drestrict= $(CXXOPTIMIZE)

# CXX=clang++
# CXXOPTIMIZE=-O3 -ffast-math
# CXXFLAGS=-Wall -Werror -ftemplate-depth-1000 -Drestrict= $(CXXOPTIMIZE)

CXX = g++
CXXOPTIMIZE=-Ofast
# CXXOPTIMIZE=-Ofast -flto -fprofile-generate
# CXXOPTIMIZE=-Ofast -flto -fprofile-use
CXXFLAGS=-Wall -Werror -ftemplate-depth-1000 -Drestrict= $(CXXOPTIMIZE)

# CXX = /home/boo/compilers/enzo-4.9.01/bin/pathCC
# CXXOPTIMIZE=-Ofast
# # CXXOPTIMIZE=-Ofast -fb-create fbout
# # CXXOPTIMIZE=-Ofast -fb-opt fbout
# CXXFLAGS=-Wall -Werror -Drestrict= $(CXXOPTIMIZE)

# CXX = icpc
# CXXFLAGS= -restrict -fast
# # CXXFLAGS= -restrict -fast -ipo -prof-gen
# # CXXFLAGS= -restrict -fast -ipo -prof-use

# CXX = pgcpp
# CXXFLAGS = -fast -Mipa=fast,inline --restrict -I/usr/include/x86_64-linux-gnu


% :: %,v

all: little littlefast example examplefast one_over one_over_fast
# all: little littlefast example examplefast speed_test one_over one_over_fast


one_over: one_over_1_minus_x1 one_over_1_minus_x2 one_over_1_minus_x3 one_over_1_minus_x4 one_over_1_minus_x5 one_over_1_minus_x6 one_over_1_minus_x7 one_over_1_minus_x8 one_over_1_minus_x9
one_over_fast: one_over_1_minus_x_fast1 one_over_1_minus_x_fast2 one_over_1_minus_x_fast3 one_over_1_minus_x_fast4 one_over_1_minus_x_fast5 one_over_1_minus_x_fast6 one_over_1_minus_x_fast7 one_over_1_minus_x_fast8 one_over_1_minus_x_fast9

algebra3: algebra3_test1 algebra3_test2 algebra3_test3 algebra3_test4 algebra3_test5 algebra3_test6 algebra3_test7 algebra3_test8 algebra3_test9


clean:
	rm -f *.o little littlefast example examplefast speed_test one_over_1_minus_x1 one_over_1_minus_x2 one_over_1_minus_x3 one_over_1_minus_x4 one_over_1_minus_x5 one_over_1_minus_x6 one_over_1_minus_x7 one_over_1_minus_x8 one_over_1_minus_x9 one_over_1_minus_x_fast1 one_over_1_minus_x_fast2 one_over_1_minus_x_fast3 one_over_1_minus_x_fast4 one_over_1_minus_x_fast5 one_over_1_minus_x_fast6 one_over_1_minus_x_fast7 one_over_1_minus_x_fast8 one_over_1_minus_x_fast9 algebra3_test1 algebra3_test2 algebra3_test3 algebra3_test4 algebra3_test5 algebra3_test6 algebra3_test7 algebra3_test8 algebra3_test9
