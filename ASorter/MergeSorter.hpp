// File ASorter/MergeSorter.hpp

#ifndef MERGESORTER_HPP_
#define MERGESORTER_HPP_

#include "ASorter.hpp"
#include "ArrayT.hpp"
template<class T>
class MergeSorter :public ASorter<T> {

private:
    ArrayT<T> _tempA;

public:
    MergeSorter(int cap);
    ~MergeSorter() {
    }

protected:
    virtual void split(ASeq<T> &a, int lo, int &mid, int hi) override;
    virtual void join(ASeq<T> &a, int lo, int mid, int hi) override;
};
template<class T>
MergeSorter<T>::MergeSorter(int cap) :
    _tempA(cap) {
}
template<class T>
void MergeSorter<T>::split(ASeq<T> &, int lo, int &mid, int hi) {
    // Post: mid ==(lo + hi + 1) / 2
    mid = (lo + hi + 1) / 2;
}
template<class T>
void MergeSorter<T>::join(ASeq<T> &a, int lo, int mid, int hi) {
    cerr << "MergeSorter<T>::join: Exercise for the student." << endl;
    throw -1;
}

#endif
