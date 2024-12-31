#include <iostream>

int main(){

int x[10] = {1,2,3,4,5,6,7};

for(int i : x){
    std::cout << i << '\n';
}


    return 0;
}