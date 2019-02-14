// File: BiTreeCSV/BiTCSVnumLeavesVis.hpp

#ifndef BITCSVNUMLEAVESVIS_HPP_
#define BITCSVNUMLEAVESVIS_HPP_

#include <iostream>
#include "BiTreeCSV.hpp"
#include "ABiTreeCSVVis.hpp"
#include "BiTCSVisEmptyVis.hpp"
using namespace std;

// ========= BiTCSVnumLeavesVis =========
template<class T>
class BiTCSVnumLeavesVis : public ABiTreeCSVVis<T> {
private:
    int _result; // Output result.

public:
    // ========= Constructor =========
    BiTCSVnumLeavesVis():
        _result(0) {
    }

    // ========= visit =========
    void emptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVnumLeavesVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVnumLeavesVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVnumLeavesVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVnumLeavesVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: The number of leaves of the host tree is returned.
    int result() const {
        cerr << "BiTCSVnumLeavesVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience
template<class T>
int numLeaves(BiTreeCSV<T> const &tree) {
    cerr << "concat: Exercise for the student." << endl;
    throw -1;
}

#endif
