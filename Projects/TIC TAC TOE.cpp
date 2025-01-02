#include<iostream>
#include<ctime>

int main(){
srand(time(NULL));

char grid[3][3] = {{'1','2','3'},
                   {'4','5','6'},
                   {'7','8','9'}};
int userin;
int attempts = 0;
std::string junk;

for(int i = 0; i < 18; i++){

int comin = rand() % 9 + 1;

std::cout << "************************************************\n"; 
std::cout << "         Welcome to TIC TAC TOE game!" << '\n';
std::cout << "************************************************\n"; 
std::cout << "Guess the number between 1-9 from the grid below\n";
std::cout << "************************************************\n"; 
std::cout << "                  | " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << " |\n";
std::cout << "                  |-----------|\n";
std::cout << "                  | " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << " |\n";
std::cout << "                  |-----------|\n";
std::cout << "                  | " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << " |\n";
std::cout << "************************************************\n"; 
std::cout << "                99 to stop playing              \n";
std::cin >> userin;

if(userin == 99){
    break;
}

if(std::cin.fail()){
    std::cin.clear();
    std::cin >> junk;
    std::cout << "Invalid input. Please enter a number between 1-9\n";
    continue;
}

switch(userin){
    case 1:
        grid[0][0] = 'X';
        break;
    case 2:
        grid[0][1] = 'X';
        break;
    case 3:
        grid[0][2] = 'X';
        break;
    case 4:
        grid[1][0] = 'X';
        break;
    case 5:
        grid[1][1] = 'X';
        break;
    case 6:
        grid[1][2] = 'X';
        break;
    case 7:
        grid[2][0] = 'X';
        break;
    case 8:
        grid[2][1] = 'X';
        break;
    case 9:
        grid[2][2] = 'X';
        break;
}

switch(comin){
    case 1:
        grid[0][0] = 'O';
        break;
    case 2:
        grid[0][1] = 'O';
        break;
    case 3:
        grid[0][2] = 'O';
        break;
    case 4:
        grid[1][0] = 'O';
        break;
    case 5:
        grid[1][1] = 'O';
        break;
    case 6:
        grid[1][2] = 'O';
        break;
    case 7:
        grid[2][0] = 'O';
        break;
    case 8:
        grid[2][1] = 'O';
        break;
    case 9:
        grid[2][2] = 'O';
        break;
}
if(userin != comin){
    std::cout << "Sorry, you guessed the wrong number. Please try again\n";
}
else if(userin == comin){
    std::cout << "Congratulations! You guessed the number correctly!\n";
    break;

}
}

std::cout << "Thank you for playing!\nGame developed by Ahnaf Ishaque Adit\n";
return 0;
}