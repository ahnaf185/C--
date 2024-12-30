#include <iostream>
#include <ctime>

int main(){

srand(time(0));

int x;

x = rand() % 5 + 1;

switch(x){
    case 1: std::cout << "You are unreal!\n";
        break;
    case 2: std::cout << "You are diamond!\n";
        break; 
    case 3:std::cout << "You are gold!\n";
        break;
    case 4: std::cout << "You are silver!\n";
        break;
    case 5: std::cout << "You are bronze!\n";
        break;
}

    return 0;
}