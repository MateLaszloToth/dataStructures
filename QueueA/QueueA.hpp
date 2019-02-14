// File: QueueA/QueueA.hpp

#ifndef QUEUEA_HPP_
#define QUEUEA_HPP_

#include "ArrayT.hpp"

// ========= QueueA =========
template<class T>
class QueueA {
private:
    ArrayT<T> _data;
    int _head, _tail;

public:
    QueueA(int cap);
    // Post: This queue is allocated with a capacity of cap
    // and initialized to be empty.

    T dequeue();
    // Pre: This queue is not empty.
    // Post: The head value in this queue is removed and returned.

    void enqueue(T const &val);
    // Pre: This queue is not full.
    // Post: val is stored at the tail of this queue.

    T const &headOf() const;
    // Pre: This queue is not empty.
    // Post: The head value from this queue is returned.

    bool isEmpty() const;
    // Post: true is returned if this queue is empty; otherwise, false is returned.

    bool isFull() const;
    // Post: true is returned if this queue is full; otherwise, false is returned.

    void toStream(ostream &os) const;
    // Post: All the items on this queue from tail to head are written to os.
};

// ========= Constructor =========
template<class T>
QueueA<T>::QueueA(int cap) :
    _data(cap + 1),
    _head(0),
    _tail(0) {
}

// ========= dequeue =========
template<class T>
T QueueA<T>::dequeue() {
    cerr << "dequeue: Exercise for the student." << endl;
    throw -1;
}

// ========= enqueue =========
template<class T>
void QueueA<T>::enqueue(T const &val) {
    cerr << "enqueue: Exercise for the student." << endl;
    throw -1;
}

// ========= headOf =========
template<class T>
T const &QueueA<T>::headOf() const {
    cerr << "headOf: Exercise for the student." << endl;
    throw -1;
}

// ========= isEmpty =========
template<class T>
bool QueueA<T>::isEmpty() const {
    cerr << "isEmpty: Exercise for the student." << endl;
    throw -1;
}

// ========= isFull =========
template<class T>
bool QueueA<T>::isFull() const {
    cerr << "isFull: Exercise for the student." << endl;
    throw -1;
}

// ========= operator<< =========
template<class T>
ostream &operator<<(ostream &os, QueueA<T> const &rhs) {
    rhs.toStream(os);
    return os;
}

// ========= toStream =========
template<class T>
void QueueA<T>::toStream(ostream &os) const {
    cerr << "toStream: Exercise for the student." << endl;
    throw -1;
}

#endif
