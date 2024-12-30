#include <iostream>

int main(){

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
    return 0;

}