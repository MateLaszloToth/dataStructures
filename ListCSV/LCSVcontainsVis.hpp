// File: ListCSV/LCSVcontainsVis.hpp

#ifndef LCSVCONTAINSVIS_HPP_
#define LCSVCONTAINSVIS_HPP_

#include <iostream>
#include "ListCSV.hpp"
#include "AListCSVVis.hpp"
using namespace std;

// ========= LCSVcontainsVis =========
template<class T>
class LCSVcontainsVis : public AListCSVVis<T> {
private:
    T const &_data; // Input parameter.
    bool _result; // Output result.

public:
    // ========= Constructor =========
    LCSVcontainsVis(T const &data):
        _data(data) {
    }

    // ========= visit =========
    void emptyCase(ListCSV<T> &host) override {
        cerr << "LCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> &host) override {
        cerr << "LCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host list.
    // Post: true is returned if data is contained in the host list;
    // Otherwise, false is returned.
    bool result() const {
        cerr << "LCSVcontainsVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience.
// Post: true is returned if data is contained in list;
// Otherwise, false is returned.
template<class T>
bool contains(ListCSV<T> const &list, T const &data) {
    cerr << "append: Exercise for the student." << endl;
    throw -1;
}

#endif
