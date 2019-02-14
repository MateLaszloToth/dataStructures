// File: NWBTree/NWBTreeContainsVis.hpp

#ifndef NWBTREECONTAINSVIS_HPP_
#define NWBTREECONTAINSVIS_HPP_

#include <iostream>
#include "ANTreeVis.hpp"
using namespace std;

// ========= NWBTreeContainsVis =========
template<class T>
class NWBTreeContainsVis : public ANTreeVis<T> {
private:
    T _val; // Input parameter.
    int _result; // Output result.

public:
    // ========= Constructor =========
    NWBTreeContainsVis(T val) :
        _val(val) {
    }

    // ========= visit =========
    void caseAt(int size, NTree<T> &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeContainsVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            int k = 0;
            while (k < size && host.getData(k) < _val) {
                k++;
            }
            cerr << "NWBTreeContainsVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= visit const =========
    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeContainsVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            int k = 0;
            while (k < size && host.getData(k) < _val) {
                k++;
            }
            cerr << "NWBTreeContainsVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: The position of val in its node is returned if val is contained in this tree;
    // otherwise, -1 is returned.

    int result() const {
        cerr << "BiTCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience

template<class T>
int contains(T key, NTree<T> const &tree) {
    cerr << "contains: Exercise for the student." << endl;
    throw -1;
}

#endif
