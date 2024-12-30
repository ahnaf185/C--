#include <iostream>

int main(){

//Type coneversion just converts a datatype form one to another 
// like you have and int datatype, now you want to convert it
// double datatype.
// there are two types:
//      Implicit = Automatic
//      Explicit = proceed with another value

int score = 9.8; 
int questions = 10;

double result = score/(double)questions * 100;

std::cout << result << "%";

    return 0;
}