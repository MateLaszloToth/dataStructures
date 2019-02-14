// File: NWBTree/NWBTreeMaxVis.hpp

#ifndef NWBTREEMAXVIS_HPP_
#define NWBTREEMAXVIS_HPP_

#include <iostream>
#include "ANTreeVis.hpp"
#include "NWBTreeIsEmptyVis.hpp"
using namespace std;

// ========= NWBTreeMaxVis =========
template<class T>
class NWBTreeMaxVis : public ANTreeVis<T> {
private:
    T _result; // Output result.

public:
    // ========= Constructor =========
    NWBTreeMaxVis() {
    }

    // ========= visit =========
    void caseAt(int size, NTree<T> &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeMinVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeMinVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= visit const =========

    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeMinVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeMinVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Pre: The host tree is not empty.
    // Post: The maximum value of the tree is returned.

    T result() const {
        cerr << "NWBTreeMaxVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience

template<class T>
T max(NTree<T> const &tree) {
    cerr << "max: Exercise for the student." << endl;
    throw -1;
}

#endif
