#include<iostream>

class spaceship{
    public: 
        std::string name;
        std::string commandingofficer;
        std::string officerincharge;
        int built;
        int rank;
        int position;

            //Here you can customize your constructors 
            //Multiple constructors in a single class is called overloaded constructor

            spaceship(std::string x, std::string y, std::string z){
                name = x;
                commandingofficer = y;
                officerincharge = z;
            }
            spaceship(std::string x, std::string y, std::string z, int a){
                name = x;
                commandingofficer = y;
                officerincharge = z;
                built = a;
            }
            spaceship(std::string x, std::string y, std::string z, int a, int b, int c){
                name = x;
                commandingofficer = y;
                officerincharge = z;
                built = a;
                rank = b;
                position = c;
            }
};

int main(){

spaceship s1("Gigahchad Binary", "Lt. Nahin", "Gn. Hamim", 2048, 12, 4);

using namespace std;

cout << "\n*******************************************************\n";
cout << "Ships name is              : " << s1.name << '\n';
cout << "Ships commanding officer is: " << s1.commandingofficer << '\n';
cout << "Ships officer in charge is : " << s1.officerincharge << '\n';
cout << "Ships built in             : " << s1.built << '\n' ;
cout << "Ships rank is              : " << s1.rank << '\n';
cout << "Ships position is          : " << s1.position << '\n';
cout << "*******************************************************\n";

    return 0;
}