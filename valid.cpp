/*
Muhammed Cheema 
CSCI-136
Mike Zamansky
Lab 2A
*/
 
#include <iostream>

int main(){
    int n;
    std::cout << "Please enter an integer: ";
    std::cin >> n;
    
    while (n <= 0 || n >= 100){ //if n is less = to zero or || greater = than 100 keep reentering n
        std::cout <<  "Please re-enter integer: ";
        std::cin >> n;
    }

    if(n > 0 && n < 100){ //if n is withing range then must square value.
         std::cout << "Number squared is " << n*n;
    }

    return 0;
    }


