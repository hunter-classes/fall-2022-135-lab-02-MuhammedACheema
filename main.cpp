#include <iostream>
#include "funcs.h" //header file declares function

int main ()
{
    print_interval(-5, 10); //calling function with set parameters
    std::cout << "\n";
    print_interval(8, 16);
    std::cout << "\n";
    print_interval(-5, 5);
    std::cout << "\n";
    print_interval(20, 30);    
    return 0;
}