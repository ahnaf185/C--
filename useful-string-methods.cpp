#include <iostream>

int main(){

std::string name;

std::cout << "Enter your fullname: ";
std::getline(std::cin, name);

/*
if(name.empty()){

    std::cout << "Please enter a name!\n";
}
else{
  std::cout << "Welcome " << name << '\n';
}
*/

//name.append("@gmail.com");

//name.insert(0, "@");

//name.erase(5, 20);

name.size() //Gives the size of teh string
std::cout << name.length() << '\n';

    return 0;
}
