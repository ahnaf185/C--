#include <iostream>
#include <cmath>
#include <vector>
#include <string>

int main (){

double x;
double y; 
double m;
double z;
std::string u;

std::cout << "Enter your unit: ";
std::getline(std::cin, u);

std::cout << "Enter length: ";
std::cin >> x;

std::cout << "Enter width: ";
std::cin >> y;

m = (x * x) + (y * y);
z = sqrt(m);

std::cout << "Your Hypotenuse is " << z << " " << u << '\n';

    return 0;
}