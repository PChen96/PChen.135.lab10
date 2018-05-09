/*
Author: Phillip Chen
Course: 136
Instructor: Alex Vikolaev
Assignment: Lab 10 main.cpp

This is the main function from program.cpp ( given by teacher )
*/
#include <vector>
#include <cassert>
#include <iostream>
#include "stats.h"

using namespace std;

int main() {
    int n = 15;
    // make a vector of all squares 1^2, 2^2, ... n^2
    vector<int> v;
    for (int i = 1; i < n; i++) {
        v.push_back(i*i);
    }

    // print it out
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    Stats s = find_stats(v);
    print_stats(s);
}
