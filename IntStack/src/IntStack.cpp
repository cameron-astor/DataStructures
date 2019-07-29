#include "IntStack.h"

IntStack::IntStack() : size_ ( 0 ) {
    this -> data_ = new int[10];
    this -> top_ = 0;
    this -> baseArraySize_ = 10;
}

IntStack::~IntStack() {
    delete data_;
}

IntStack::IntStack(const IntStack& other) {
    //copy ctor
}

bool IntStack::isEmpty() const { return size_ == 0; }

int IntStack::getSize() const { return size_; }

void IntStack::push(int value) {

    if (size_ == 0) { // stack is empty
        data_[0] = value;
        top_ = &data_[0];
    } else if (size_ == baseArraySize_){
        resize();
        *top_ = value; // push value
    } else { // general case
        top_++;
        *top_ = value;
    }
    size_++;
}

void IntStack::resize() {
           // resize
        int *newArray = new int[baseArraySize_ * 2]; // new base array
        int *newCurrent = newArray; // keep track of where we're putting elements in new array
        int *current = data_; // keep track of where we are in old array

        for (int i = 0; i < baseArraySize_; i++) {
            *newCurrent = *current; // put element into new array
            current++; // move along old array
            newCurrent++; // move along new array
        }

        top_ = newCurrent; // new top of stack is in the new array
        current = data_;
        data_ = newArray; // new array is now the stack's array
        delete current; // ditch old array
        baseArraySize_ = baseArraySize_ * 2;

}

int IntStack::pop() {
    int result = 0;
    if (size_ > 0) {
        result = *top_;
        top_--;
        size_--;
    }
    return result;
}

int IntStack::peek() const {
    if (size_ > 0) {
        return *top_;
    }
    return 0;
}

void IntStack::clear() {
    int *newArray = new int[10];
    int *old = data_;
    data_ = newArray;
    delete old;
    top_ = 0;
    baseArraySize_ = 10;
    size_ = 0;
}


