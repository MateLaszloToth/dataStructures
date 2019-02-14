// File: HashFunctions.hpp

#ifndef HASHFUNCTIONS_HPP
#define HASHFUNCTIONS_HPP

#include "CAMetrics.hpp"
typedef CAMetrics<string> CAMetricsStr;
typedef function<unsigned int(CAMetricsStr const &)> HashFunction;

inline unsigned int bernsteinHash(CAMetricsStr const &x) {
    string str = x.toT();
    cerr << "bernsteinHash: Exercise for the student." << endl;
    throw -1;
}

inline unsigned int knuthHash(CAMetricsStr const &x) {
    string str = x.toT();
    unsigned int result = static_cast<unsigned int> (str.size());
    cerr << "knuthHash: Exercise for the student." << endl;
    throw -1;
}

#endif  /* HASHFUNCTIONS_HPP */

