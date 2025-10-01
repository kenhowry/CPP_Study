/*
Fermi Pico Bagel - 10.1.25

This program is a logic puzzle that generates a random 3-digit number 
and asks the user to guess the correct answer using the hints provided 

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int generateNumber(){
    srand(time(0));

    //Generate random number 100-999
    int randomNumber = (rand() % 900) + 100;

    return randomNumber;
}

int main(){

    stdd::cout << "Random number:" << generateNumber();
    return 0;
}