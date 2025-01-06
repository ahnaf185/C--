#include<iostream>

struct cars{
    std::string brand;
    std::string name;
    std::string model;
    std::string color;
};


int main (){

char temp;
int counter = 0;

cars car0;
std::cout << "**********************************\n";
std::cout << "Enter the brand of your car: ";
std::getline(std::cin >> std::ws, car0.brand);

std::cout << "Enter the name of your car: ";
std::getline(std::cin >> std::ws, car0.name);

std::cout << "Enter the model of your car: ";
std::getline(std::cin >> std::ws, car0.model);

std::cout << "Enter the color of your car: ";
std::getline(std::cin >> std::ws, car0.color);
std::cout << "**********************************\n";

counter++;

std::cout << "Enter e to exit\n";
std::cout << "Enter p to print all\n";
std::cin >> temp;

if(temp == 'p'){
    for(int i = 1; i <= counter; i++){
        std::cout << "Your brand: " << car0.brand << '\n';
        std::cout << "Your car: " << car0.name << '\n';
        std::cout << "Cars model: " << car0.model << '\n';
        std::cout << "Cars color: " << car0.color << '\n';
    }
}



    return 0;
}