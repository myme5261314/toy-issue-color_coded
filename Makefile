#
# Makefile
# Peng Liu, 2015-11-20 15:38
#

all: main.o
	@echo "Makefile needs your attention"
	clang++ main.cpp -lopencv_core -lopencv_highgui -o toy

# vim:ft=make
#
