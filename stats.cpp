/*
Author: Phillip Chen
Course: 136
Instructor: Alex Vikolaev
Assignment: Lab 10 stats.cpp

This has the functions outside of main from program.cpp ( given by teacher )
*/
#include <vector>
#include <cassert>
#include <iostream>
#include "stats.h"

using namespace std;

Stats find_stats(vector<int> &v) {
    assert(v.size() > 0);
    int min = v[0];
    int max = v[0];
    double sum = 0.0;

    for(int i = 0; i < v.size(); i++) {
        if (v[i] < min) min = v[i];
        if (v[i] > max) max = v[i];
        sum += static_cast<double>(v[i]);
    }
    Stats s = { min, max, sum / v.size() };

    return s;
}

void print_stats (Stats &s) {
    cout << "Minimum = " << s.minimum << endl;
    cout << "Maximum = " << s.maximum << endl;
    cout << "Average = " << s.average << endl;
}
