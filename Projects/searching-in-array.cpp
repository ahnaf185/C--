#include<iostream>

void searcharray(double array[], int size, double search){
    
    for(int i = 0; i < size; i++){
        if(array[i] ==  search){
            std::cout << "Your number is at index " << i + 1 << '\n';
        }
    }
    return;
}


int main(){

int choice;
int exit = 0;
double num[99];
double input;
int m = 0;
std::string junk;
int size;
double search;

do{

    std::cout << "*******************\n";
    std::cout <<  "Enter your choice\n";
    std::cout << "*******************\n";
    std::cout << "1. Enter your numbers\n";
    std::cout << "2. Search for a number\n";
    std::cout << "3. Exit\n";
    std::cout << "*******************\n";
    std::cin >> choice;

    if(std::cin.fail()){
        std::cin.clear();
        std::cin >> junk;
        std::cout << "Invalid Input!\n";
        continue;
    }

    switch(choice){
        case 1: 
        std::cout << "Enter your number: ";
        std::cin >> input;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin >> junk;
            std::cout << "Invalid Input!\n";
            continue;
        }
        else{
        num[m] = input;
        m++;
        break;}

        case 2: 
        size = sizeof(num) / sizeof(num[0]);
        std::cout << "Enter the number you want to search for: ";
        std::cin >> search;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin >> junk;
            std::cout << "Invalid Input!\n";
            continue;
        }

        searcharray(num, size, search); break;
        case 3: exit = 1; break;
    }

}while(exit == 0);

std::cout << "Thank you for using the service!\n";
std::cout << "Service provided by Adit\n";

    return 0;
}