#include <iostream>
#include "funcs.h"
//where function is written and defined
void print_interval(int L, int U)
{
    for (int i = L; i < U; i++) {
        std::cout << i << " ";
    }
}