// File: BiTreeCSV/BiTCSVremLeaves.hpp

#ifndef BITCSVREMLEAVESVIS_HPP_
#define BITCSVREMLEAVESVIS_HPP_

#include <iostream>
#include "BiTreeCSV.hpp"
#include "ABiTreeCSVVis.hpp"
#include "BiTCSVisEmptyVis.hpp"
using namespace std;

// ========= BiTCSVremLeavesVis =========
template<class T>
class BiTCSVremLeavesVis : public ABiTreeCSVVis<T> {
public:
    // ========= Constructor =========
    BiTCSVremLeavesVis() {
    }

    // ========= visit =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: The leaves are removed from the host tree.
    void emptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVremLeavesVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVremLeavesVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVremLeavesVis precondition violated: "
             << "Cannot remove leaves from a const tree." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVremLeavesVis precondition violated: "
             << "Cannot remove leaves from a const tree." << endl;
        throw -1;
    }
};

// Global function for convenience
template<class T>
void remLeaves(BiTreeCSV<T> &tree) {
    cerr << "remLeaves: Exercise for the student." << endl;
    throw -1;
}

template<class T>
void remLeaves(BiTreeCSV<T> const &tree) {
    cerr << "remLeaves: Exercise for the student." << endl;
    throw -1;
}

#endif
