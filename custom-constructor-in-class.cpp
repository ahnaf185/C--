#include<iostream>

class spaceship{
    public:
        std::string name;
        std::string commandingofficer;
        std::string officerincharge;
        int built;
        int rank;
        int position;

        //   Constructor name and the class name should be same

        spaceship(std::string a, std::string b, std::string c, int d, int e, int f){
                name = a;
                commandingofficer = b;
                officerincharge = c;
                built = d;
                rank = e;
                position = f;
        }
};

int main(){

spaceship s1("Gigachad 1000", "Lt. Col. Nahin Ahmed", "Gn. Adnan Ajowat", 2040, 3, 13);
spaceship s2("Gigachad Hexa", "Lt. Col. Ariyan Kabir", "Gn. Ahnaf Ishaque ", 2045, 2, 10);

// While using a custom constructor dont declare it afterwards like I had done
// which i commented below
// USE THE ABOVE

/*
s1.name = "Gigachad 1000";
s1.commandingofficer = "Lt. Col. Nahin Ahmed";
s1.officerincharge = "Gn. Adnan Ajowat";
s1.built = 2040;
s1.rank = 3;
s1.position = 13;
*/

std::cout << "******************************************************\n";
std::cout << "Ships name is               : " << s1.name << '\n';
std::cout << "Ships commanding officer is : " << s1.commandingofficer << '\n';
std::cout << "Ships officer in charge is  : " << s1.officerincharge << '\n';
std::cout << "Ships built in              : " << s1.built << '\n';
std::cout << "Ships rank is               : " << s1.rank << '\n';
std::cout << "Ships position is           : " << s1.position << '\n';

std::cout << "******************************************************\n";
std::cout << "Ships name is               : " << s2.name << '\n';
std::cout << "Ships commanding officer is : " << s2.commandingofficer << '\n';
std::cout << "Ships officer in charge is  : " << s2.officerincharge << '\n';
std::cout << "Ships built in              : " << s2.built << '\n';
std::cout << "Ships rank is               : " << s2.rank << '\n';
std::cout << "Ships position is           : " << s2.position << '\n';

std::cout << "******************************************************\n";
    return 0;
}