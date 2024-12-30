#include <iostream>
#include <string>

int main(){

//A ternary operator is a short version of if-else statements like 
// if true this if false this
// it can only contain one argumwnts true false not like if- else if- else if- else 

// STRUCTURE: argument ? true expression : false expression 

std::string pass;

std::cout << "Enter your passkey: ";
std::cin >> pass;

pass == "anjuman" ? std::cout << "Welcome to the house!\n" : std::cout << "You are an invader!\n";

    return 0;
}