// File: BiTreeCSV/BiTCSVheightVis.hpp

#ifndef BITCSVHEIGHTVIS_HPP_
#define BITCSVHEIGHTVIS_HPP_

#include <iostream>
#include "BiTreeCSV.hpp"
#include "ABiTreeCSVVis.hpp"
using namespace std;

// ========= BiTCSVheightVis =========
template<class T>
class BiTCSVheightVis : public ABiTreeCSVVis<T> {
private:
    int _result; // Output result.

public:
    // ========= Constructor =========
    BiTCSVheightVis() {
    }

    // ========= visit =========
    void emptyCase(BiTreeCSV<T> &host) override {
        _result = 0;
    }

    void nonEmptyCase(BiTreeCSV<T> &host) override {
        BiTCSVheightVis<T> LheightVis;
        BiTCSVheightVis<T> RheightVis;
        host.left().accept(LheightVis);
        host.right().accept(RheightVis);
        if (LheightVis.result() < RheightVis.result()) {
            _result = RheightVis.result() + 1;
        } else {
            _result = LheightVis.result() + 1;
        }
    }

    // ========= visit const =========
    void emptyCase(BiTreeCSV<T> const &host) override {
        _result = 0;
    }

    void nonEmptyCase(BiTreeCSV<T> const &host) override {
        BiTCSVheightVis<T> LheightVis;
        BiTCSVheightVis<T> RheightVis;
        host.left().accept(LheightVis);
        host.right().accept(RheightVis);
        if (LheightVis.result() < RheightVis.result()) {
            _result = RheightVis.result() + 1;
        } else {
            _result = LheightVis.result() + 1;
        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: The height of the host tree is returned.
    int result() const {
        return _result;
    }
};

// Global function for convenience
template<class T>
int height(BiTreeCSV<T> const &tree) {
    BiTCSVheightVis<T> heightVis;
    tree.accept(heightVis);
    return heightVis.result();
}

#endif
