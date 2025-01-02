#include<iostream>

int main(){

std::string cars[][3] = {{"GR86", "Supra", "Crown"},
                        {"Civic", "Accord", "City"},
                        {"Huracan", "Aventador", "Urus"}};

int row = sizeof(cars)/sizeof(cars[0]);
int coloumn = sizeof(cars[0])/sizeof(cars[0][0]);

for(int i = 0; i < row; i++){
    for(int j = 0; j < coloumn; j++){
        std::cout << "Enter you car name for row " << i+1 << " and coloumn " << j+1 << ": ";
        std::cin >> cars[i][j];
    }
    std::cout << '\n';
}


for(int i = 0; i < row; i++){
    for(int j = 0; j < coloumn; j++){
        std::cout << cars[i][j] << " ";
    }

    std::cout << '\n';
}

    return 0;
}