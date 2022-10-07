//
//  Lab6_Swap.cpp
//  Lab6_Swap
//
//  Created by David Jacob Tinley on 10/7/22.
//

#include <iostream>
#include "Lab6_Header.h"


int main() {
    int user_numb_1, user_numb_2, user_numb_3;

    numb_input(user_numb_1, user_numb_2, user_numb_3);

    if (user_numb_1 > user_numb_2) {
        swap(user_numb_1, user_numb_2);
    }
    if (user_numb_1 > user_numb_3) {
        swap(user_numb_1, user_numb_3);
    }
    if (user_numb_2 > user_numb_3) {
        swap(user_numb_2, user_numb_3);
    }
    print_out(user_numb_1, user_numb_2, user_numb_3);
    return 0;
}


