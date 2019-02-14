// File: NWBTree/NWBTreeNumValuesVis.hpp

#ifndef NWBTREENUMVALUESVIS_HPP_
#define NWBTREENUMVALUESVIS_HPP_

#include <iostream>
#include "ANTreeVis.hpp"
using namespace std;

// ========= NWBTreeNumValuesVis =========
template<class T>
class NWBTreeNumValuesVis : public ANTreeVis<T> {
private:
    int _result; // Output result.

public:
    // ========= Constructor =========
    NWBTreeNumValuesVis() :
        _result(0) {
    }

    // ========= visit =========
    void caseAt(int size, NTree<T>& host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeNumValuesVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeNumValuesVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= visit const =========

    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeNumValuesVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeNumValuesVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: The number of data values in the tree is returned.

    int result() const {
        cerr << "NWBTreeNumValuesVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience

template<class T>
int numValues(NTree<T> const &tree) {
    cerr << "concat: Exercise for the student." << endl;
    throw -1;
}

#endif
