#include <iostream>

namespace one{
    int x = 12;
}

namespace two{
    int x = 1;
}

namespace o123P{
    int x = 3269;
}


int main() {
//A namespace is like another room on the code or like
//another box of infromation
//Suppose:: 
//In namespace 1, integer x might have the value of 10 
//In namespace 2, integer x might have teh value of 1
//
//On the main code however teh integer x could have the
//value of 34
//
//To Display the value of something in namespace 1 
//you have to tell the compiler that it is in there like 
/*
std::cout << 1::x;

Using the using attribute you can indicate the computer to use a 
data of another namespace

NOTE: YOU CANNOT NAME NAMESPACES USING ANY DIGIT IT MUST CONTAIN 
ATLEAST ONE CHARACTER 
*/

    int x = 123;

    std::cout << "The value of x in main code is " << x << '\n';
    std::cout << "The value of x in namespace 1 is " << one::x << '\n';
    std::cout << "The value of x in namespace 2 is " << two::x << '\n';

    std::cout << '\n';

    using namespace o123P;

    std::cout << "The value of x is now displayed of namespace o123P using the using attribute = " << x << '\n';

    return 0;
}