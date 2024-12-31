#include <iostream>

int main(){

std::string names[9999];
int store = 0;

do{
    std::string name;
    int choice;

    std::cout << "************************\n";
    std::cout << "1. Store names: \n";
    std::cout << "2. Show the names stored: \n";
    std::cout << "3. Exit\n";
    std::cout << "************************\n";
    std::cin >> choice;


    if(choice != 1 && choice != 2 && choice != 3 || std::cin.fail()){
        std::cin.clear();

        std::string temp;
        std::cin >> temp;

        std::cout << "Enter Valid choice!\n\n";
        continue;
    }

    std::cout << '\n';

    switch(choice){
        case 1: 
        std::cout << "Enter name you want to store; ";
        std::getline(std::cin >> std::ws, name);
        std::cout << '\n';
        names[store] = name;

        store ++;

        break;

        case 2:
        int y = 1;

        for(int x = 0; x < store; x++){
            std::cout << y << "] " << names[x] << '\n';
            y++;
        }
        std::cout << '\n';

        break;
    }

    if(choice == 3){
        break;
    }


}while( store != 9999);

std::cout << "Thank you for using the service!\n";

    return 0;
}