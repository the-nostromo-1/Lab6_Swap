//
//  Lab6_Functions.cpp
//  Lab6_Swap
//
//  David Jacob Tinley
//  10/7/22

#ifndef Header_h
#define Header_h

#include <iostream>
#include "Lab6_Header.h"

using std::cout;
using std::cin;
using std::endl;

void numb_input(int &number1, int &number2, int &number3) {
    cout << "Please input three numbers\n";
    cin >> number1;
    cin >> number2;
    cin >> number3;
}

void swap(int &numb_1, int &numb_2) {
    int temp_numb = numb_2;
    numb_2 = numb_1;
    numb_1 = temp_numb;
}

void print_out(int &number_one, int &number_two, int &number_three) {
    cout << "The numbers sorted are " << number_one << " " << number_two << " " << number_three << endl;
}

#endif
