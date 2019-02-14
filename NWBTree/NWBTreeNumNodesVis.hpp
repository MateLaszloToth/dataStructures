// File: NWBTree/NWBTreeNumNodesVis.hpp

#ifndef NWBTREENUMNODESVIS_HPP_
#define NWBTREENUMNODESVIS_HPP_

#include <iostream>
#include "ANTreeVis.hpp"
using namespace std;

// ========= NWBTreeNumNodesVis =========
template<class T>
class NWBTreeNumNodesVis : public ANTreeVis<T> {
private:
    int _result; // Output result.

public:
    // ========= Constructor =========
    NWBTreeNumNodesVis() :
        _result(0) {
    }

    // ========= visit =========
    void caseAt(int size, NTree<T> &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeNumNodesVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeNumNodesVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= visit const =========

    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeNumNodesVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeNumNodesVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: The height of the tree is returned.

    int result() const {
        cerr << "NWBTreeNumNodesVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience

template<class T>
int numNodes(NTree<T> const &tree) {
    cerr << "numNodes: Exercise for the student." << endl;
    throw -1;
}

#endif
