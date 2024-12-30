#include <iostream>
#include <ctime>
#include <cmath>

void rectangle(){
    int row;
int column;
char symbol;

std::cout << "       *******RECTANGLE CREATOR*******\n";

std::cout << "   Enter your number of rows in rectangle: ";
std::cin >> row;

std::cout << "   Enter your number of column in rectangle: ";
std::cin >> column;

std::cout << "   Enter the symbol you want the rectangle to be made of: ";
std::cin >> symbol;

std::cout << '\n';

for(int i = 1; i <= row; i++){
    for(int j = 1; j <= column; j++){
        std::cout << "   " << symbol << " ";
    }
    std::cout << '\n';
}
std::cout << '\n' << "       *******************************\n";
}

void numguess(){

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

}

void hypotenuse(){

double x;
double y; 
double m;
double z;
std::string u;

std::cout << "Enter length: ";
std::cin >> x;

std::cout << "Enter width: ";
std::cin >> y;

std::cout << "Enter your unit: ";
std::getline(std::cin >> std::ws, u);

m = (x * x) + (y * y);
z = sqrt(m);

std::cout << "Your Hypotenuse is " << z << " " << u << '\n';
}

int main(){

int select;

std::cout << "What service would you like?(Rectangle-1, Numguess-2, Hypotenuse-3): ";
std::cin >> select;

switch(select){
    case 1: rectangle(); break;
    case 2: numguess(); break;
    case 3: hypotenuse(); break;
}

    return 0;
}