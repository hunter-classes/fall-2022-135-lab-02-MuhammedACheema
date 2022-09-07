/*
Muhammed Cheema 
CSCI-136
Mike Zamansky
Lab 2D
*/


#include <iostream>

int main(){
    
    int fib[60]; // array size
    int total = 0;
    
    for (int i = 0; i < 60; i++){ // fills the array
             fib[i] = i;
        }

    for (int i = 0; i < 60; i++){ //adds the values in the array
            total = total + fib[i];
            std::cout << total << std::endl;
        }
    return 0; 
}