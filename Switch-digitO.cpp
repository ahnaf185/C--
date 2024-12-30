#include <iostream>
#include <cmath>

int main(){

double math;
std::cout << "Enter your numbers in math: ";
std::cin >> math;

int range = round(math / 10);

if(range > 10){
    std::cout << "If you are lying then you are gay! " << '\n';
}

switch(range){
    case 10:
    std::cout << "Perfect Job Champ!" << '\n';
    break;

    case 9:
    std::cout << "Awesome Wiz!" << '\n';
    break;

    case 8:
    std::cout << "Great Job!" << '\n';
    break;

    case 7:
    std::cout << "Average" << '\n';
    break;

    case 6:
    std::cout << "Not so good" << '\n';
    break;

    case 5:
    std::cout << "Below average" << '\n';
    break;

    case 4:
    std::cout << "Below average" << '\n';
    break;

    case 3:
    std::cout << "Below average" << '\n';
    break;

    case 2:
    std::cout << "Below average" << '\n';
    break;

    case 1:
    std::cout << "Below average" << '\n';
    break;

    default:
    std::cout << "Are you lying ?" << '\n';
}
    return 0;
}