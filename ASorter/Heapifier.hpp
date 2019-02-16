// File: ASorter/Heapifier.hpp


#ifndef HEAPIFIER_HPP_
#define HEAPIFIER_HPP_

#include "ASeq.hpp"


// ========= siftDown =========

template<class T>
void siftDown(ASeq<T> &a, int lo, int i, int hi) {
    // Pre: maxHeap(a[i + 1..hi]).
    // Pre: lo <= i <= hi.
    // Post: maxHeap(a[i..hi]).
    T temp = a[i];
    int child = 2 * i - lo + 1; // Index of left child.
    bool done = hi < child;
    while(!done) {
        if(child < hi && a[child] < a[child + 1]){
            child++;
        } // child is the index of the larger of the two children.
        if (temp < a[child]) {
            a[i] = a[child];
            i = child;
            child = 2 * i - lo + 1;
            done = hi < child;
        }else{ // a[child] <= temp
            done = true;
        }
    }
    a[i] = temp;
}

#endif
