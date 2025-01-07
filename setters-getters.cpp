#include<iostream>

class car{
    private: 
        std::string name = "Lamborghini";
        std::string model = "Aventador";
    
    //Making the getters and setters because the private part is not 
    //accessible outside the class

    public:
     
    void setcar(std::string name, std::string model){
        this->name = name;
        this->model = model;
    }
    std::string getcarname(){
        return name;
    }
    std::string getcarmodel(){
        return model;
    }
};

int main(){

car car1;

car1.setcar("Bugatti", "Chiron SS");

//std::cout << car1.name << '\n';
//std::cout << car1.model << '\n';

std::cout << car1.getcarname() << '\n';
std::cout << car1.getcarmodel() << '\n';



    return 0;
}