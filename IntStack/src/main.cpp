#include <iostream>
#include <stdlib.h>
#include "IntStack.h"
#include "Stack.h"

using namespace std;

void testIntStack();
void testGenericStack();

int main() {

    testIntStack();
    testGenericStack();

    return EXIT_SUCCESS;
}

void testIntStack() {

    cout << "--- INT STACK ---" << endl;

    IntStack s;
    cout << "Initial size: " << s.getSize() << endl;
    cout << "Is empty? " << s.isEmpty() << endl;

    s.push(4);
    s.push(8);
    s.push(123);
    s.push(44);
    s.push(5);
    s.push(7);
    s.push(99);
    s.push(888);
    s.push(9999);
    s.push(111);
    s.push(55);
    cout << "size: " << s.getSize() << endl;
    cout << "peek (should be 55): \n" << s.peek() << endl;


    IntStack s_copy = s;
    cout << "Copy contents: \n" << endl;
    int copystackSize = s_copy.getSize();
    for (int i = 0; i < copystackSize; i++) {
        cout << s_copy.pop() << endl;
    }

    cout << "Original contents: \n" <<endl;
    int stackSize = s.getSize();
    for (int i = 0; i < stackSize; i++) {
        cout << s.pop() << endl;
    }

    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;

    for (int i = 0; i < 50; i++) {
        s.push(4);
    }

    cout << "size: " << s.getSize() << endl;
    s.clear();
    cout << "size after clearing: " << s.getSize() << endl;
    cout << "" << endl;
}

void testGenericStack() {

    cout << "--- GENERIC STACK ---" << endl;

}
