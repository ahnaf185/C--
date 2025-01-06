#include<iostream>

/*long long int factorial(int num){
    
    long long int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}*/

int factorial(int num);

int main(){

int num;
std::cout << "Enter number you want to factor: ";
std::cin >> num;

std::cout << "So...." << '\n' << num << "! = " << factorial(num) << '\n';

    return 0;
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num -1);
    } else{ return 1; }
}


