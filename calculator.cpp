#include <iostream>
#include <cmath>

int main(){

char x;
double num1;
double num2;
double result;

std::cout << "             *********CALCULATOR*********\n\n";

std::cout << "   Enter your operation(+,-,*,/,s(sqrt),p(power)): ";
std::cin >> x;

std::cout << "   Enter your number1: ";
std::cin >> num1;

if (x == 's'){

    result = sqrt(num1);
    std::cout << "   Result is: " << result << '\n';
}
else{

std::cout << "   Enter your number2: ";
std::cin >> num2;

switch(x){
    case '+':
    result = num1 + num2;
    std::cout << "   Your result is " << result << '\n';
    break;

    case '-':
    result = num1 - num2;
    std::cout << "   Your result is " << result << '\n';
    break;

    case '*':
    result = num1 * num2;
    std::cout << "   Your result is " << result << '\n';
    break;

    case '/':
    result = num1 / num2;
    std::cout << "   Your result is " << result << '\n';
    break;

    case 'p':
    result = pow(num1, num2);
    std::cout << "   Your result is " << result << '\n';
    break;
    
    default:
    std::cout << "   Enter valid operation!";
}
}
std::cout << "             ****************************\n";

    return 0;
}