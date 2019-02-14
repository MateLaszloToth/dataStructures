// File: QueueL/QueueL.hpp

#ifndef QUEUEL_HPP_
#define QUEUEL_HPP_

#include <iostream> // ostream.
#include "ListL.hpp"
using namespace std;

// ========= QueueL =========
template<class T>
class QueueL {
private:
    // Attribute is exercise for the student.

public:
    QueueL();
    // This queue is allocated and initialized to be empty.

    ~QueueL();
    // Post: This queue is deallocated.

    T dequeue();
    // Pre: This queue is not empty.
    // Post: The head value in this queue is removed and returned.

    void enqueue(T const &val);
    // Post: val is stored at the tail of this queue.

    T const &headOf() const;
    // Pre: This queue is not empty.
    // Post: The head value from this queue is returned.

    bool isEmpty() const;
    // Post: true is returned if this queue is empty; otherwise, false is returned.

    void toStream(ostream &os) const;
    // Post: All the items on this queue from tail to head are written to os.
};

// ========= Constructor =========
template<class T>
QueueL<T>::QueueL() {
    cerr << "QueueL<T>::QueueL: Exercise for the student." << endl;
    throw -1;
}

// ========= Destructor =========
template<class T>
QueueL<T>::~QueueL() {
    cerr << "QueueL<T>::~QueueL: Exercise for the student." << endl;
    throw -1;
}

// ========= dequeue =========
template<class T>
T QueueL<T>::dequeue() {
    cerr << "QueueL<T>::dequeue: Exercise for the student." << endl;
    throw -1;
}

// ========= enqueue =========
template<class T>
void QueueL<T>::enqueue(T const &val) {
    cerr << "QueueL<T>::enqueue: Exercise for the student." << endl;
    throw -1;
}

// ========= headOf =========
template<class T>
T const &QueueL<T>::headOf() const {
    cerr << "QueueL<T>::headOf: Exercise for the student." << endl;
    throw -1;
}

// ========= isEmpty =========
template<class T>
bool QueueL<T>::isEmpty() const {
    cerr << "QueueL<T>::isEmpty: Exercise for the student." << endl;
    throw -1;
}

// ========= operator<< =========
template<class T>
ostream &operator<<(ostream &os, QueueL<T> const &rhs) {
    cerr << "operator<<: Exercise for the student." << endl;
    throw -1;
}

// ========= toStream =========
template<class T>
void QueueL<T>::toStream(ostream &os) const {
    cerr << "QueueL<T>::toStream: Exercise for the student." << endl;
    throw -1;
}

#endif
