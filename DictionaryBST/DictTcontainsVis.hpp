// File: DictionaryBST/DictTcontainsVis.hpp

#ifndef DICTTCONTAINSVIS_HPP_
#define DICTTCONTAINSVIS_HPP_

#include <iostream>
#include "ADictionary.hpp"
#include "BiTreeCSV.hpp"
using namespace std;

// ========= DictTcontainsVis =========
template <class K, class V>
class DictTcontainsVis : public ABiTreeCSVVis< DictPair<K, V> > {
private:
    K const &_key; // Input parameter.
    V const *_val; // Output result.
    bool _found; // Output result.

public:
    // ========= Constructor =========
    DictTcontainsVis(K const &key) :
        _key(key) {
    }

    // ========= visit =========
    void emptyCase(BiTreeCSV< DictPair<K, V> > &host) override {
        cerr << "DictTcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV< DictPair<K, V> > &host) override {
        cerr << "DictTcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(BiTreeCSV< DictPair<K, V> > const &host) override {
        cerr << "DictTcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV< DictPair<K, V> > const &host) override {
        cerr << "DictTcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: If key is found, then val is the associated value, and true is returned;
    // otherwise false is returned.
    bool result(V &val) const {
        if (_found) {
            cerr << "DictTcontainsVis: Exercise for the student." << endl;
            throw -1;
        }
    }
};

#endif
