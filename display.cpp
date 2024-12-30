#include <iostream>

int main(){

/*To display something alongside an varible like in python code;
       print("Hello Peeker", name) 
       and in the name whatever in teh name variable has 
       it will output something like this;

       Hello Peeker Nahin

       To use this in C++, we are going to use this like

       std::cout << "Hello Peeker" << name:abs

       The example is below 
*/

std::string day = "Friday";
int age = 14;

std::cout << "Today is " << day << '\n';

std::cout << "Your are " << age << " years old!";  

return 0;

}