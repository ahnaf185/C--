#include <iostream>

void showbalance(double balance){
    std::cout << "Your balance is: " << balance << " taka" <<'\n';
}

void deposit(double &balance){
    double amount;

    std::cout << "Enter your amount to deposit: ";
    std::cin >> amount;
    std::cout << '\n';

    if(amount < 0){
        std::cout << "Enter positive number only!\n";
    }
    else{balance += amount;}
}

void withdraw(double &balance){
    double amount;

    std::cout << "Enter your amount to withdraw: ";
    std::cin >> amount;
    std::cout << '\n';
    if(amount < 0){
        std::cout << "Enter positive number only!\n";
    }
    else{balance -= amount;}
}

int main(){

int choice;
double balance;

do{
std::cout << "********************\n";
std::cout << "Enter your choice\n";
std::cout << "********************\n";
std::cout << "1. Show balance\n";
std::cout << "2. Deposit\n";
std::cout << "3. Withdraw\n";
std::cout << "4. Exit\n";
std::cout << "********************\n";
std::cin >> choice;
std::cout << '\n';

switch(choice){
    case 1: showbalance(balance);
        break;
    case 2: deposit(balance);
            showbalance(balance);
        break;
    case 3: withdraw(balance);
            showbalance(balance);
        break;
    case 4: std::cout << "Thank You for using the bank!\n";
        break;

    default: std::cout << "Enter from 1-4!\n";
}
}while(choice != 4);

    return 0;
}