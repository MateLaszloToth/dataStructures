#ifndef NTREEINORDERVIS_HPP_
#define NTREEINORDERVIS_HPP_

#include <iostream>
#include "ANTreeVis.hpp"
#include "NTree.hpp"
using namespace std;

// ========= NTreeInOrderVis =========

template<class T>
class NTreeInOrderVis : public ANTreeVis<T> {
private:
    ostream &_os; // Input paramter.

public:
    // ========= Constructor =========

    NTreeInOrderVis(ostream &os) :
        _os(os) {
    }

    // ========= visit =========

    void caseAt(int size, NTree<T>& host) override {
        switch (size) {
        case 0:
        {
            cerr << "NTreeInOrderVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NTreeInOrderVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= visit const =========

    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NTreeInOrderVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NTreeInOrderVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }
};

// Global function for convenience
template<class T>
void inOrder(ostream &os, NTree<T> const &tree) {
    cerr << "inOrder: Exercise for the student." << endl;
    throw -1;
}

#endif
