#include <iostream>

void total(double prices[], int elements){
    double total = 0;

    for (int i = 0; i < elements; i++){
        total += prices[i];
    }

    std::cout << "Total: " << total << " taka" <<'\n';
}

int main(){

double prices[999];
int j;
int k;
int choice;
bool exit = false;
std::string junk;

do{
    std::cout << "****************\n";
    std::cout << "1. Enter price\n";
    std::cout << "2. Total\n";
    std::cout << "3. Exit\n";
    std::cout << "****************\n";
    std::cout << "****************\n";
    std::cin >> choice;

    if(std::cin.fail() || choice != 1 && choice != 2 && choice != 3){
        std::cin.clear();
        std::cin >> junk;
        std::cout << "Invalid Input!\n";
        continue;
    }

    switch(choice){
        case 1:
            std::cout << "Enter Price: ";
            std::cin >> prices[j];

            if(std::cin.fail()){
                std::cin.clear();
                std::cin >> junk;
                std::cout << "Invalid Input!\n";
                continue;
                
            }
            j++;
            break;
        case 2:
            total(prices, j);
            break;
        case 3:
            exit = true;
            std::cout << "Exiting......\n";
            break;            
    }
}while(j < 999 && exit == false);


    return 0;
}