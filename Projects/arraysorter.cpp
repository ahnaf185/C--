#include <iostream>

void arraysorter(int numbers[], int size);

int main(){

int numbers[] = {10, 8, 6, 5, 4, 3, 2, 1, 9, 7, 11, 12, 13, 14, 17, 16, 15};
int size = sizeof(numbers)/sizeof(numbers[0]);

arraysorter(numbers, size);

    return 0;
}

void arraysorter(int numbers[], int size){
    int x;
    int temp;

    for(int j = 0; j < size; j++){
        for(int i = 0; i < size - 1; i++){
            if (numbers[i] > numbers[(i+1)]){
                temp = numbers[i];
                numbers[i] = numbers[(i+1)];
                numbers[(i+1)] = temp;
            }
        }
    }

    for(int k = 0; k < size; k++){
        std::cout << numbers[k] << '\n';
    }
}