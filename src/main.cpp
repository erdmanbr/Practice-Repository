#include <iostream>

#include "bf_lib/types/bf_array.h"

int main (int argc, char ** argv) {

    bflib::types::BFArray<int, 4> bfa;

    bfa[5] = 20;

    std::cout << bfa[5] << std::endl;

    bfa.Print();

    return 0;
    
}