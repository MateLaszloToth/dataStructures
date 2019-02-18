//File: NWBTree/NWBTreeNumValuesVis.hpp

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
           break;
        }
        default:
        {
            _result += size;
            for (int i = 0; i <= size; i++) {
                host.getChild(i)->accept(*this);
            }
            break;
        }
        }
    }

    // ========= visit const =========

    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
            case 0:
            {
                break;
            }
            default:
            {
                _result += size;
                for (int i = 0; i <= size; i++) {
                    host.getChild(i)->accept(*this);
                }
                break;
            }
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: The number of data values in the tree is returned.

    int result() const {
        return _result;
    }
};

// Global function for convenience

template<class T>
int numValues(NTree<T> const &tree) {
    NWBTreeNumValuesVis<T> numValuesVis;
    tree.accept(numValuesVis);
    return numValuesVis.result();
}

#endif
