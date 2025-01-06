#include <iostream>

int main(){

std::string *pbrand = NULL;
std::string *pcar = NULL;
int size;

std::cout << "Enter the number of brands you want to enter: ";
std::cin >> size;

pbrand = new std::string[size];
pcar = new std::string[size];

for(int i = 0; i < size; i++){
    std::cout << "Enter the brand name: ";
    std::cin >> pbrand[i];

    std::cout << "Enter the car of the brand " << pbrand[i] << " : ";
    std::cin >> pcar[i];
}
for(int j = 0; j < size; j++){
    std::cout << "------------------------\n";
    std::cout << pbrand[j] << " = " << pcar[j] << '\n';
    std::cout << "------------------------\n";
}
    return 0;
}