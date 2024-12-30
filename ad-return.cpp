#include <iostream>
#include <string>

std::string name(std::string name1, std::string name2){
    return name1 + " " + name2;
}

std::string email(std::string name1, std::string name2){
    return name1 + name2 + "@gmail.com";
}

std::string username(std::string name1){
    name1.insert(0, "@");
    return name1;
}

int main(){

std::string firstname;
std::string lastname;

std::cout << "Enter your first name: ";
std::cin >> firstname;

std::cout << "Enter your last name: ";
std::cin >> lastname;

std::string fullname = name(firstname, lastname);
std::string Email = email(firstname, lastname);
std::string Username = username(firstname);

std::cout << '\n';

std::cout << "Fullname: " << fullname <<'\n';
std::cout << "Email: " << Email << '\n';
std::cout << "Username: " << Username << '\n';



    return 0;
}