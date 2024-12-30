#include <iostream>

int main(){
    //const attribute will turn any data into read-only and nothing can change the values 
 
    const double pi = 3.14159;
    double radius = 10; 
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

    return 0;
}