#include <iostream>

int fibonacci(int num1, int num2){
    return num1 + num2;
}
int main(){

int num1 = 0;
int num2 = 1;
int n;
int j = 0;
int result;

std::cout << "Enter your series length: ";
std::cin >> n;

std::cout << num1 << " " << num2 << " ";

while(n >= j){
    result = fibonacci(num1, num2);
    std::cout << result << " ";
    num1 = num2;
    num2 = result;
    j++;
}

std::cout << '\n';

    return 0;
}