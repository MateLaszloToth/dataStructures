// File: ListCSV/LCSVreverseVis.hpp

#ifndef LCSVREVERSEVIS_HPP_
#define LCSVREVERSEVIS_HPP_

#include <iostream>
#include "ListCSV.hpp"
#include "AListCSVVis.hpp"
using namespace std;

template<class T> class LCSVreverseHelperVis; // Forward declaration.

// ========= LCSVreverseVis =========
template<class T>
class LCSVreverseVis : public AListCSVVis<T> {

public:
    // ========= Constructor =========
    LCSVreverseVis() {
    }

    // ========= visit =========
    // Pre: This visitor has been accepted by a host list.
    // Post: The host list is reversed.
    void emptyCase(ListCSV<T> &host) override {
        cerr << "LCSVreverseVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> &host) override {
        cerr << "LCSVreverseVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVreverseVis precondition violated: "
             << "Cannot reverse const list." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVreverseVis precondition violated: "
             << "Cannot reverse const list." << endl;
        throw -1;
    }
};

// ========= LCSVreverseHelperVis =========
template<class T>
class LCSVreverseHelperVis : public AListCSVVis<T> {
private:
    ListCSV<T> &_revList; // Input parameter, modified by visitor.

public:
    // ========= Constructor =========
    LCSVreverseHelperVis(ListCSV<T> &revList):
        _revList(revList) {
    }

    // ========= visit =========
    // Pre: This visitor has been accepted by a host list.
    // Post: The host list is prepended to revList in reverse order,
    // and the host list is empty.
    void emptyCase(ListCSV<T> &host) override {
        cerr << "LCSVreverseHelperVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> &host) override {
        cerr << "LCSVreverseHelperVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVreverseHelperVis precondition violated: "
             << "Cannot reverse const list." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVreverseHelperVis precondition violated: "
             << "Cannot reverse const list." << endl;
        throw -1;
    }
};

// Global function for convenience.
template<class T>
void reverse(ListCSV<T> &list) {
    cerr << "reverse: Exercise for the student." << endl;
    throw -1;
}

#endif
