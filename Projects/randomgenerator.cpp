#include <iostream>
#include <ctime>

int main(){

srand(time(NULL));

int x;
int guess;
int attempt = 0;

do{
    x = (rand() % 10) + 1;
    std::cout << "Guess a number from 1-10: ";
    std::cin >> guess;

    if(guess == x){
       std::cout << "You guessed it right!\n";
       break;
    }

    attempt++;
    
}while(x != guess && attempt < 5);

if(attempt == 5){ 
    std::cout << "Try again later!\n";
}

    return 0;
}