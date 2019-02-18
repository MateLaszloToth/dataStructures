//File: NWBTree/NWBTreeMaxVis.hpp

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
            isEmpty(host);
        } break;
        default:
        {
            if (!isEmpty(*host.getChild(size))) {
                host.getChild(size)->accept(*this);
            } else {
                _result = host.getData(size-1);
            }
        } break;
        }
    }

    // ========= visit const =========

    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
        case 0:
        {
            isEmpty(host);
        } break;
        default:
        {
            if (!isEmpty(*host.getChild(size))) {
                host.getChild(size)->accept(*this);
            } else {
                _result = host.getData(size-1);
            }
        } break;
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Pre: The host tree is not empty.
    // Post: The maximum value of the tree is returned.

    T result() const {
        return _result;
    }
};

// Global function for convenience

template<class T>
T max(NTree<T> const &tree) {
    NWBTreeMaxVis<T> maxVis;
    tree.accept(maxVis);
    return maxVis.result();
}

#endif
