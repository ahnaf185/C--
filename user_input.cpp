#include <iostream>

int main(){

double math;
double bangla;
std::string name;


std::cout << "Math grades: ";
std::cin >> math;

std::cout << "Bangla grades: ";
std::cin >> bangla;

std::cout << "Enter your name: ";
std::getline(std::cin >> std::ws, name);

std::cout << '\n';

std::cout << "Hello " << name << "!" << '\n';

std::cout << '\n';

int total = math + bangla;

std::cout << "Total is " << total << '\n';
std::cout << "Average is " << total / 2 << '\n';

    return 0;
}