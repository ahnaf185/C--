#include <iostream>

int main(){

double weight;

std::cout << "Enter your weight: ";
std::cin >> weight;

if(weight > 100){

    std::cout << "You are not enough fit to enter the programme. Lose Weight";
}
else if(weight < 0){

    std::cout << "Tell us the truth";
}
else if(weight <= 60 ){

    std::cout << "You need to gain weight to enter the programme";
}
else if(weight <= 65){

    std::cout << "You are enough fit to enter the programme";
}
else if(weight <= 70){

    std::cout << "You are fit to enter the programme";
}
else if(weight >= 80){

    std::cout << "You need to exercise to enter the programme";
}



else{
    std::cout << "Tell us the truth";
}

std::cout << '\n'; 

    return 0;
}