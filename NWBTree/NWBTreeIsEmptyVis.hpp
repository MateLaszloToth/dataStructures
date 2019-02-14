// File: NWBTree/NWBTreeIsEmptyVis.hpp

#ifndef NWBTREEISEMPTYVIS_HPP_
#define NWBTREEISEMPTYVIS_HPP_

#include <iostream>
#include "ANTreeVis.hpp"
using namespace std;

// ========= NWBTreeIsEmptyVis =========
template<class T>
class NWBTreeIsEmptyVis : public ANTreeVis<T> {
private:
    bool _result; // Output result.

public:
    // ========= Constructor =========
    NWBTreeIsEmptyVis() {
    }

    // ========= visit =========
    void caseAt(int size, NTree<T> &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeIsEmptyVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeIsEmptyVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= visit const =========
    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeIsEmptyVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeIsEmptyVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: true is returned if the host tree is empty;
    // otherwise, false is returned.

    bool result() const {
        cerr << "NWBTreeIsEmptyVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience

template<class T>
bool isEmpty(NTree<T> const &tree) {
    cerr << "isEmpty: Exercise for the student." << endl;
    throw -1;
}

#endif
