#Author: Phillip Chen
#Course: 136
#Instructor: Alex Vikolaev
#Assignment: Lab 10 Makefile
#
#helps records commands for terminal to make object files
#if there are spaces instead of tabs it gives a terminal error
# CFLAGS improves the efficency of the make file making it a higher piority

all:program
CFLAGS += -O2

program:stats.o main.o
	g++ $(CFLAGS) -o program stats.o main.o
stats.o:stats.cpp stats.h
	g++ $(CFLAGS) -c stats.cpp
main.o:main.cpp stats.h
	g++ $(CFLAGS) -c main.cpp
clean:
	rm *.o program
