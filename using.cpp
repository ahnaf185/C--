#include <iostream>
#include <vector>

//typedef std::string string_t;
using string = std::string;

int main (){
/*
typedef just redifenes teh datatypes such as for std::string,
I could replace it with string

But modern solution will be to use using attribute
*/

    string name = "Ahnaf";

    std::cout << "Hello programmer " << name << '\n';

    return 0;
}