#include<iostream>

double cf(double x){
    const long double m = 9/5;
    return ((x * m) + 32);
}

double fc(double x){
    const long double m = 5/9;
    return ((x - 32) * m);
}

double mfe(double x){
    const long double m = 3.28084;
    return ( x * m);
}

double fem(double x){
    const long double m = 0.3048;
    return ( x * m);
}

int main(){
int option = 0;
bool exit = false;

do{
std::cout << "**********************************\n";
std::cout << "Choose your option from the belows\n";
std::cout << "**********************************\n";
std::cout << "1] Celcius to Fahreinheit\n";
std::cout << "2] Fahrenheit to Celsius\n";
std::cout << "3] Meter to Feet\n";
std::cout << "4] Feet to Meter\n";
std::cout << "5] To exit\n";
std::cout << "**********************************\n";
std::cin >> option;

if(std::cin.fail()){
    std::string temp;
    std::cin.clear();
    std::cin >> temp;

    std::cout << "Invalid Input!\n";

    continue;
}

double pass;

switch(option){
    case 1: std::cout << "Enter celcius to convert: "; 
            std::cin >> pass;
            std::cout << "Your result is: " << cf(pass) << " Fahrenheit" << '\n'; 
            break;
    case 2: std::cout << "Enter fahrenheit to convert: ";
            std::cin >> pass;
            std::cout << "Your result is: " <<  fc(pass) << " Celcius" << '\n';
             break;
    case 3: std::cout << "Enter meter to convert: ";
            std::cin >> pass;
            std::cout << "Your result is: "<<  mfe(pass) << " Feet" << '\n';
            break;
    case 4: std::cout << "Enter feet to convert: "; 
            std::cin >> pass; 
            std::cout << "Your result is: "<< fem(pass) << " Meter" << '\n';
             break;
    case 5: std::cout << "Thank you for using!\nProject made by Ahnaf Ishaque\n"; exit = true; break;

    default: std::cout << "Plese Enter in 1-5\n"; break;
}
}while(!exit);
    return 0;
}