/*
Author: Phillip Chen
Course: 136
Instructor: Alex Vikolaev
Assignment: Lab 10 stats.h

This has the header of the functions outside of main from program.cpp ( given by teacher )
*/
#ifndef STATS_H 
#define STATS_H

#include <vector>
//the ifndef comples the program before main gets executed
//you can use this file multiple times if you use ifndef,define,endif
// Statistics data structure
struct Stats {
    int minimum;
    int maximum;
    double average;
};

// compute statistics
Stats find_stats(std::vector<int> &v);
// prints out statistics
void print_stats (Stats &s);

#endif
