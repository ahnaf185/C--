#include <iostream>

struct cars{
    std::string brand;
    std::string name;
    std::string model;
    std::string color;
};

void printcar(cars something){
    std::cout << "***********************************\n";
    std::cout << "Your brand is: " << something.brand << '\n';
    std::cout << "Your cars name is: " << something.name << '\n';
    std::cout << "Your cars model is: " << something.model << '\n';
    std::cout << "Your cars color is: " << something.color << '\n';
    std::cout << "***********************************\n";
}

void changecar(cars &somethingelse){
    char t;
    std::cout << "***********************************\n";
    std::cout << "Enter c to confirm and e to edit again\n";
    std::cin >> t;
        if(t == 'e'){
            std::cout << '\n';
            std::cout << "Enter your brand again: ";
            std::getline(std::cin >> std::ws, somethingelse.brand);

            std::cout << "Enter your car name again; ";
            std::getline(std::cin >> std::ws, somethingelse.name);

            std::cout << "Enter your model again: ";
            std::getline(std::cin >> std::ws, somethingelse.model);

            std::cout << "Enter your color again: ";
            std::getline(std::cin >> std::ws, somethingelse.color);
        } 

        printcar(somethingelse);
        std::cout << '\n' << "Thank you for using the customization service!\n" << "Software by Ahnaf Ishaque\n" ;
}

int main(){

cars car0; 

std::cout << '\n';
std::cout << "Enter your brand: ";
std::getline(std::cin, car0.brand);

std::cout << "Enter your car name; ";
std::getline(std::cin, car0.name);

std::cout << "Enter your model: ";
std::getline(std::cin, car0.model);

std::cout << "Enter your color: ";
std::getline(std::cin, car0.color);

std::cout << '\n';

printcar(car0);
changecar(car0); 

return 0;
}