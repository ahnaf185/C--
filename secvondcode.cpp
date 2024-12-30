#include <iostream>

int main(){
//int datatype will only display whole numbers 
//double datatype will contain both whole numbers and decimals
//char datatype will include one letter
//bool datatype willl either be true or false
//std::string is string which stores a sequence of text 
//use the std::cout command to output soemthing

   
    //integer datatype
    int x; //declare
    x = 5; //assign the value
    int y = 6; //combinig teh whoel lines of command 
    
    //double dataype 
    double height = 5.7;
    double weight = 73.45;
    double gpa = 4.75;
    
    //char datatype 
    char nahingrade = 'A';
    
    //boolean data type
    bool nahingood = true;
    bool riasatgood = false;

    //string datatype
    std::string messagetomother = "Be strong! The world is tough";
    std::string day = "Friday";


    //display the data in a datatype
    std::cout << x <<'\n';
    std::cout << height <<'\n';
    std::cout << nahingrade <<'\n';
    std::cout << nahingood <<'\n';
    std::cout << riasatgood <<'\n';
    std::cout << messagetomother <<'\n';
    std::cout << day << '\n';

    return 0;

}