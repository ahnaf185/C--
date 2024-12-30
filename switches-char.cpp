#include <iostream>

int main(){

char grade;

std::cout << "Enter your grade in math: ";
std::cin >> grade;

switch(grade){

    case 'A':
    std::cout << "You are perfect!" << '\n';
    break;

    case 'B':
    std::cout << "You did great!" << '\n';
    break;

    case 'C':
    std::cout << "You did okay" << '\n';
    break;

    case 'D':
    std::cout << "You are simp man" << '\n';

    case 'F':
    std::cout << "YOU FAILED BOI" << '\n';
    break;

    default:
    std::cout << "If you are lying then you are Harun Uncle" << '\n';
}


    return 0;
}