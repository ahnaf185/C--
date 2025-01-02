#include<iostream>

int getdigit(int number){

    return number % 10 + number / 10 ;
}

int sumodd(const std::string cardnumber){

    int result = 0;

    for(int i = cardnumber.size() - 2; i >= 0; i-=2){
        result += getdigit((cardnumber[i] - 48)* 2);
    }

    return result;
}

int sumeven(const std::string cardnumber){

    int result = 0;

    for(int i = cardnumber.size() - 1; i >= 0; i-=2){
        result += cardnumber[i] - '0';
    }

    return result;
}

int main(){

std::string cardnumber;
int total = 0;

std::cout << "Enter your card #";
std::cin >> cardnumber;

total = sumodd(cardnumber) + sumeven(cardnumber);

if(total % 10 == 0){
    std::cout << "Your card number is valid!\n";
    std::cout << total << '\n';
    std::cout << sumodd(cardnumber) << " " << sumeven(cardnumber) << '\n';
}
else{
    std::cout << "Your card number is not valid!\n";
    std::cout << total << '\n';
    std::cout << sumodd(cardnumber) << " " << sumeven(cardnumber) << '\n';
}

    return 0;
}