// File: BiTreeCSV/BiTCSVcontainsVis.hpp

#ifndef BITCSVCONTAINSVIS_HPP_
#define BITCSVCONTAINSVIS_HPP_

#include <iostream>
#include "BiTreeCSV.hpp"
#include "ABiTreeCSVVis.hpp"
using namespace std;

// ========= BiTCSVcontainsVis =========
template<class T>
class BiTCSVcontainsVis : public ABiTreeCSVVis<T> {
private:
    T _data; // Input parameter.
    bool _result; // Output result.

public:
    // ========= Constructor =========
    BiTCSVcontainsVis(T data):
        _data(data) {
    }

    // ========= visit =========
    void emptyCase(BiTreeCSV<T> &host) override {
        _result = false;
    }

    void nonEmptyCase(BiTreeCSV<T> &host) override {
        if (host.root() == _data) {
            _result = true;
        } 
            host.left().accept(*this);
            host.right().accept(*this);
     }

    // ========= visit const =========
    void emptyCase(BiTreeCSV<T> const &host) override {
        _result = false;
    }

    void nonEmptyCase(BiTreeCSV<T> const &host) override {
        if (host.root() == _data) {
            _result = true;
        } else {
            if (!isEmpty(host.left())) {
                host.left().accept(*this);
            }
            if (!isEmpty(host.right())) {
                host.right().accept(*this);
            }
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: true is returned if val is contained in this tree;
    // otherwise, false is returned.
    bool result() const {
        return _result;
    }
};

// Global function for convenience
template<class T>
bool contains(T data, BiTreeCSV<T> const &tree) {
    BiTCSVcontainsVis<T> containsVis(data);
    tree.accept(containsVis);
    return containsVis.result();
}

#endif
