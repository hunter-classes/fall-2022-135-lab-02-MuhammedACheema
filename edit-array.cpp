#include <iostream>

int main (){

    int myData[10]; //creates array
    for (int i = 0; i < 10; i++){ 
        myData[i] = 1; //set all values to 1
    }

    int i, v;

    do {
        std::cout << "\n";
        for (i = 0; i < 10; i++){ //print out array
            std::cout << myData[i] << " " ;
        }        
        std::cout << "\nInput index: ";
        std::cin >> i;

        std::cout << "Input value: ";
        std::cin >> v;

        if (i >= 0 && i < 10){
            myData[i] = v; //updates index and value with inputs
        }
    } while (i >= 0 && i< 10); //repeats loop while input indexes remain btwn 1-10

    std::cout << "\nIndex out of range. Exit.\n"; 


    return 0;
}