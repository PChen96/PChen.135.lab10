
#include <cassert>
#include <vector>
#include <iostream>

using namespace std;


// Statistics data structure
struct Stats {
    int minimum;
    int maximum;
    double average;
};

// compute statistics
Stats find_stats(vector<int> &v);
// prints out statistics
void print_stats (Stats &s);



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

