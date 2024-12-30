#include <iostream>

int main(){

int temp;
bool sunny;

std::cout << "Enter the temperature outside: ";
std::cin >> temp;

std::cout << "Is it sunny?: ";
std::cin >> sunny;

if(sunny && temp > 0 && temp < 35){
    std::cout << "It is a very good day to go outside!\n";
}

else if(sunny || temp < 35){
    std::cout << "It is a great day\n";
}

else if(!sunny){
    std::cout << "It is cloudy outside!\n";
}

else{
    std::cout << "It is a good day\'n";
}

    return 0;
}