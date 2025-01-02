#include<iostream>

int main(){

std::string line;
int time;

std::cout << "Enter what you want to print: ";
std::cin >> line;

std::cout << "Enter how many times you want it to print: ";
std::cin >> time;

  for(int i = 1; i <= time; i++){
    std::cout << i << "] " << line << '\n';
  }

  return 0;
}
