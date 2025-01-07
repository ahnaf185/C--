#include<iostream>

enum car{Corvette, Toyota, Lamborghini, Bugatti, Dodge};

int main(){

car mycar = Dodge;
car friendcar = Toyota;

switch(mycar){
    case 0: std::cout << "You have chosen a Corvette!\n"; break;
    case 1: std::cout << "You have chosen a Toyota!\n"; break;
    case 2: std::cout << "You have chosen a Lamborghini!\n"; break;
    case 3: std::cout << "You have chosen a Bugatti!\n"; break;
    case 4: std::cout << "You have chosen a Dodge!\n"; break;
} switch(friendcar){
    case 0: std::cout << "Your friend have chosen a Corvette!\n"; break;
    case 1: std::cout << "Your friend have chosen a Toyota!\n"; break;
    case 2: std::cout << "Your friend have chosen a Lamborghini!\n"; break;
    case 3: std::cout << "Your friend have chosen a Bugatti!\n"; break;
    case 4: std::cout << "Your friend have chosen a Dodge!\n"; break;
}

    return 0;
}