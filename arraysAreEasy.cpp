//arraysAreEasy.cpp
// Created by GP on 2/20/2026.

#include <iostream>
using namespace std;

int main() {

int threeDEE[3][3][3] = {
    {{1,2,3}, {4,5,6},{7,8,9},},
      { {10,11,12}, {13,14,15},{16,17,18},},
       {{19,20,21},{22,23,24},{25,26,27},}
};
cout << threeDEE [0][2][1] << endl;

    return 0;
}