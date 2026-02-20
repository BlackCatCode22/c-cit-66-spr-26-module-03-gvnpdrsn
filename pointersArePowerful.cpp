//pointersArePowerful.cpp
// Created by GP on 2/20/2026.

#include <iostream>
using namespace std;

int main() {

    int a = 8;
    int *p=&a;

    cout << "Address in pointer p: "<< p << endl;
    cout << "Value using pointer p: " << *p << endl;
    *p = 16;
    cout << "New value using pointer p: " << *p << endl;

    int array[5] = {1,2,3,4,5};
    int *pArray = array;
    for ( int i = 0; i < 5; i++ ) {
        cout << "Address of array [" << i << "]: " << (pArray + i) << endl;
        cout << "Value using pointer array [" << i << "]: " << *(pArray +i) << endl;
    }

    return 0;
}