#include <iostream>

int main(){

int num = 32;
int guess = 0;

do{
std::cout << "Guess a number from 1 - 100: ";
std::cin >> guess;

if(guess > num){
    std::cout << "Too High!\n";
}
else if(guess < num){
    std::cout << "Too Low!\n";
}

}while(guess != num);

std::cout << "You guessed the number!\n";

    return 0;
}