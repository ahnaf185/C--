#include<iostream>

class spaceship{
    public: 
        std::string name;
        std::string commanding_officer;
        std::string officerincharge;
        int built;
        std::string color;

        void departure(std::string dest){
            std::cout << "\nChecking Engine......\n";
            std::cout << "Ignition!\n\n";
            if(!dest.empty()){
                std::cout << "Route set for " << dest << '\n';
            }
        }

        void destination(){
            std::string destination;
            
            std::cout << "\nEnter your destination: ";
            std::getline(std::cin >> std::ws, destination);

            departure(destination);
            arrival(destination);
        }

        void arrival(std::string dest){
            if(!dest.empty()){
                std::cout << "\nArrived at " << dest << '\n';
            } else{ std::cout << "We have arrived at our destination!\n"; }
        }
};

int main(){

spaceship s1;

    s1.name = "Gigachad 900";
    s1.commanding_officer = "Lt. Col. Adnan Ajowat";
    s1.officerincharge = "Gn. Nahin Ahmed";
    s1.built = 2035;
    s1.color = "Black";

std::cout << "\n\n";
std::cout << "********************************************************\n";
std::cout << "Spaceship name                  : " << s1.name << '\n';
std::cout << "Spaceship commanding officer is : " << s1.commanding_officer << '\n';
std::cout << "Spaceship officer in charge is  : " << s1.officerincharge << '\n';
std::cout << "Spaceship built is              : " << s1.built << '\n';
std::cout << "Spaceship color is              : " << s1.color << '\n';
std::cout << "********************************************************\n";


bool start = false;
std::string temp;
bool verify = false;
int counter = 0;

do{
std::cout << "Do you want to start the ship? ";
std::cin >> temp;
    if(temp != "yes" && temp != "no"){
        std::cout << "Enter yes or no!\n";
        counter++;
        continue;
    } 
    else{ verify = true; }

} while(!verify && counter < 3);

if(temp == "yes" && counter < 3){
    start = true;
} 

if(start && counter < 3){
    s1.destination();
} else if(!start && counter < 3){ std::cout << "Thank you officer!\n"; }

counter < 3 ? std::cout << "" : std::cout << "\nYou are locked out!\nTry again officer!\n";

    return 0;
}