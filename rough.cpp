#include<iostream>

int main(){
int size;

std::cout << "Enter how many numbers you will enter: ";
std::cin >> size;

int *pnums = new int[size];

for(int i = 0; i < size; i++){
    std::cout << "Enter your #" << i + 1 << " " << '\n';
    std::cin >> pnums[i];
}

    return 0;
}

