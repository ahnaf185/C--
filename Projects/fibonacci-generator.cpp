#include <iostream>

int main(){

int result;
int n;
int num1 = 0;
int num2 = 1;
int j = 0;

std::cout << "Enter the number you want to see the series to(N): ";
std::cin >> n;

std::cout << num1 << " " << num2 << " ";

do{
    result = num1 + num2;
    std::cout << result << " ";
    num1 = num2;
    num2 = result;

    j++;
}while(j < (n - 2));

std::cout << '\n';

    return 0;
}