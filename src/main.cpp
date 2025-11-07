#include <iostream>

#include "bf_lib/types/bf_array.h"

int main (int argc, char ** argv) {

    bflib::types::BFArray<int, 4> bfa;

    bfa.Print();

    return 0;
    
}