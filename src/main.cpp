#include <iostream>

#include "bf_lib/types/bf_array.h"

int main (int argc, char ** argv) {

    bflib::types::BFArray<int> bfa;

    std::cout << bfa.LogMessage << std::endl;

    return 0;
    
}