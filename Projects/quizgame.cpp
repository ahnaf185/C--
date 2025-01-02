#include<iostream>
#include<cctype>

int main(){

std::string questions[] = {"1. What is orange?: ",
                           "2. What is C++?: ",
                           "3. What is NaHBrO?: ",
                           "4. Who is Eminem?: "};

std::string options [4][4] = {{"A. Fruit", "B. Colour", "C. Scent", "D. Emotion"},
                              {"A. Language", "B. Programming Language", "C. Software", "D. Chicken"},
                              {"A. Chemical", "B. Word", "C. Sodium Hypobromite", "D. Sodium Hydrobromide"},
                              {"A. Actor", "B. Singer", "C. Politician", "D. Rapper"}};

char answerkey[] = {'A', 'B', 'C', 'D'};

int size = sizeof(questions)/sizeof(questions[0]);
char input;
int score = 0;

for(int i = 0; i < size; i++){

        std::cout << "***********************\n";
        std::cout << questions[i] << '\n';
        std::cout << "***********************\n";

    for(int j = 0; j < sizeof(options[0])/sizeof(options[0][0]); j++){

        std::cout << options[i][j] << '\n';

    }
    std::cout << '\n';
    std::cin >> input;
    input = toupper(input);

    if(input == answerkey[i]){
        std::cout << "You are correct!\n";
        score++;
    } 
    else{
        std::cout << "You are incorrect!" << " Correct: " << answerkey[i] << '\n';
    }

}

std::cout << "Correct: " << score << '\n';
std::cout << "Incorrect: " << size-score << '\n';

std::cout << "Percentage: " << (double)score/size * 100 << "%" << '\n';

return 0;
}
   