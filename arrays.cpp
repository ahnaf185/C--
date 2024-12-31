#include <iostream>

int main(){

double marks[4];
double full;

std::cout << "Enter your marks in Mathematics: ";
std::cin >> marks[0];
std::cout << "Enter your marks in Science: ";
std::cin >> marks[1];
std::cout << "Enter your marks in Bangla: ";
std::cin >> marks[2];
std::cout << "Enter your marks in English: ";
std::cin >> marks[3];
std::cout << "Fullmarks in all subject(100, 50): ";
std::cin >> full; 

std::cout << '\n';

double total = marks[0] + marks[1] + marks[2] + marks[3];
full = full * 4;

double percent = (total / full) * 100;

std::cout << "Your percentage in all four subjects is: " << percent << "%" << '\n';

    return 0;
}