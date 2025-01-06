#include <iostream>
template <typename T, typename U>

auto max(U num1, T num2){
    return (num1 > num2) ? num1 : num2;
}

int main(){

double num1;
double num2;

std::cout << "Enter your number 1: ";
std::cin >> num1;

std::cout << "Enter your number 2: ";
std::cin >> num2;

std::cout << "Your max number is: " << max(num1, num2) << '\n';

    return 0;
}