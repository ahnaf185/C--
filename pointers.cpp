#include<iostream>

int main(){

//A pointer is a hand which points to a memory address
//& to refer that it is the address
//* tells that it is a pointer

//A nullptr reference will tell it that the pointer is empty, it is used
//by developers no see if pointer assigned successfully or not.

std::string name;
std::string *pfn = nullptr;
bool enter;

std::cout << "Enter your name: ";
std::cin >> name;

pfn = &name; 

if(pfn == nullptr){
    std::cout << "Pointer Failure!\n";
} else{
    std::cout << "Pointer assigned successfully!\n";
}

    return 0;
}