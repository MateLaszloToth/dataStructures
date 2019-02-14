// File: ListCSV/LCSVlengthVis.hpp

#ifndef LCSVLENGTHVIS_HPP_
#define LCSVLENGTHVIS_HPP_

#include <iostream>
#include "ListCSV.hpp"
#include "AListCSVVis.hpp"
using namespace std;

// ========= LCSVlengthVis =========
template<class T>
class LCSVlengthVis : public AListCSVVis<T> {
private:
    int _result; // Output result.

public:
    // ========= Constructor =========
    LCSVlengthVis():
        _result(0) {
    }

    // ========= visit =========
    void emptyCase(ListCSV<T> &host) override {
        cerr << "LCSVlengthVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> &host) override {
        cerr << "LCSVlengthVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVlengthVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVlengthVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host list.
    // Post: The length of the host list is returned.
    int result() const {
        cerr << "LCSVlengthVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience.
template<class T>
int length(ListCSV<T> const &list) {
    cerr << "length: Exercise for the student." << endl;
    throw -1;
}

#endif
