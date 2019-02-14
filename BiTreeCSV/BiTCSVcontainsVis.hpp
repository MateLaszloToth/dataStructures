// File: BiTreeCSV/BiTCSVcontainsVis.hpp

#ifndef BITCSVCONTAINSVIS_HPP_
#define BITCSVCONTAINSVIS_HPP_

#include <iostream>
#include "BiTreeCSV.hpp"
#include "ABiTreeCSVVis.hpp"
using namespace std;

// ========= BiTCSVcontainsVis =========
template<class T>
class BiTCSVcontainsVis : public ABiTreeCSVVis<T> {
private:
    T _data; // Input parameter.
    bool _result; // Output result.

public:
    // ========= Constructor =========
    BiTCSVcontainsVis(T data):
        _data(data) {
    }

    // ========= visit =========
    void emptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: true is returned if val is contained in this tree;
    // otherwise, false is returned.
    bool result() const {
        cerr << "BiTCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience
template<class T>
bool contains(T data, BiTreeCSV<T> const &tree) {
    cerr << "concat: Exercise for the student." << endl;
    throw -1;
}

#endif
