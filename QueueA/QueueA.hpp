// File: QueueA/QueueA.hpp

#ifndef QUEUEA_HPP_
#define QUEUEA_HPP_

#include "ArrayT.hpp"
#include <vector>
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
    if (isEmpty()) {
        cerr << "dequeue: the queue is empty." << endl;
        throw -1;
    } else {
        T temp = _data[_head];
        _head = (_head + 1) % _data.cap();
        return temp;
    }
}

// ========= enqueue =========

template<class T>
void QueueA<T>::enqueue(T const &val) {
    if (isFull()) {
        cerr << "enqueue: the queue is full." << endl;
        throw -1;
    } else {
        _data[_tail] = val;
        _tail = (_tail + 1) % _data.cap();
    }
}

// ========= headOf =========

template<class T>
T const &QueueA<T>::headOf() const {
    if (isEmpty()) {
        cerr << "headOf: The queue is empty." << endl;
        throw -1;
    } else {
        return _data[_head];
    }
}

// ========= isEmpty =========

template<class T>
bool QueueA<T>::isEmpty() const {
    return _head == _tail;
}

// ========= isFull =========

template<class T>
bool QueueA<T>::isFull() const {
    return _head == (_tail+1) % _data.cap();
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
    os << "(";
    if (_head <= _tail) {
        int i = _head;
        for (; i < _tail - 1; i = (i + 1) % _data.cap()) {
            os << _data[i] << ", ";
        }
        if (i == _tail) {
            os << ")";
        } else {
            os << _data[i] << ")";

        }
    } else {
        if (_tail != 0) {
            for (int i = _head; i < _data.cap(); i++) {
                os << _data[i] << ", ";
            }
            int i = 0;
            for (; i < _tail - 1; i++) {
                os << _data[i] << ", ";
            }
            os << _data[i] << ")";
        } else {
            for (int i = _head; i < _data.cap() - 1; i++) {
                os << _data[i] << ", ";
            }
            os << _data[_data.cap() - 1] << ")";
        }
    }

}

#endif
