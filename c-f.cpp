#include <iostream>

int main(){

double x = 1.8;
double temp;
double result; 
char name;

std::cout << "     *********Celcius to Fahrenheit*********\n\n";

std::cout << "    Enter the unit you want to convert(C-F): ";
std::cin >> name;

if(name == 'C'){

    std::cout << "    Enter Celcius: ";
    std::cin >> temp;

    result = (temp * x) + 32;
    std::cout << "     " << temp << " celcius is " << result << " fahrenheit\n" << '\n';

}
else if(name == 'F'){

    std::cout << "    Enter Fahrenheit: ";
    std::cin >> temp;

    result = (temp - 32) / x;
    std::cout << "    " << temp << " fahrenheit is " << result << " celcius\n" << '\n';

}
else{

    std::cout << "    Please enter C or F; C for Celcius F for Fahrenheit" << '\n';
}

std::cout << "      ***************************************\n";

    return 0;
}