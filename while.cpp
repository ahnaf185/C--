#include <iostream>


int main(){
    
std::string passkey = "anjuman";
std::string test;
int attempts = 0;


std::cout << "Enter your password: ";
std::cin >> test;

while(test != passkey && attempts < 2){

    std::cout << "Incorrect password! Enter again: ";
    std::cin >> test;

    attempts += 1;
}

if (test == passkey){
    std::cout << "Welcome!" << '\n';
}
else{
  std::cout << "ACCESS DENIED!" << '\n';
}

    return 0;
}