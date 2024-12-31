#include <iostream>
#include <ctime>

char cominput(){
    int x;

    x = (rand() % 3) + 1;

    switch(x){
        case 1: return 'r'; break;
        case 2: return 'p'; break;
        case 3: return 's'; break ;
        default: return 'r';

    }
}

void winner(char comin, char userin){
    int winner;

    if(comin == 'r' && userin == 'p'){
        winner = 2;
    }
    else if(comin == 'r' && userin == 's'){
        winner = 1;
    }
    else if(comin == 'r' && userin == 'r'){
        winner = 3;
    }
    else if(comin == 'p' && userin == 'p'){
        winner = 3;
    }
    else if(comin == 'p' && userin == 'r'){
        winner = 1;
    }
    else if(comin == 'p' && userin == 's'){
        winner = 2;
    }
    else if(comin == 's' && userin == 'r'){
        winner = 2;
    }
    else if(comin == 's' && userin == 'p'){
        winner = 1;
    }
    else if(comin == 's' && userin == 's'){
        winner = 3;
    }

    switch(winner){
        case 1: std::cout << "Computer wins!\n"; break;
        case 2: std::cout << "You win!\n"; break;
        case 3: std::cout << "Draw!\n"; break;
    }

}

int main(){

srand(time(NULL));

char userinp;
int attempts = 0;

do{
    std::cout << "Rock-Paper-Scissor game\n";
    std::cout << "***********************\n";
    std::cout << "***********************\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissor\n";
    std::cout << "'e' for exit\n";
    std::cout << "***********************\n";
    std::cout << "Enter your choice!: ";
    std::cin >> userinp;

    std::cout << '\n' << '\n';

    if(userinp == 'e'){
        std::cout << "Thanks for playing!\n";
        break;
    }
    if(userinp != 'r' && userinp != 's' && userinp != 'p' && userinp != 'e'){
        std::cout << "Enter valid choice!\n";
        continue;
    }


    char compin = cominput();

    winner(userinp, compin);

    attempts ++;
}while(attempts <= 7);

std::cout << "Game provided by Adit\n";
    return 0;
}