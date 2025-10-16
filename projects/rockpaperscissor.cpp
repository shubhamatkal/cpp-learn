#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You Chose: ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer Chose: ";
    showChoice(computer);
    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    std::cout << "Rock paper scissors game\n";
    char player;
    do{
        std::cout << "Choose from the following\n";
        std::cout << "**********\n'r' for rock ,\n 'p for paper' s for scissor\n";
        std::cin >> player;
    }while (player != 'r' && player != 'p' && player != 's');
    


    
    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = (rand() % 3)+1;
    switch (num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
    
}

void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout<< "Scissors\n";
        break;
    default:
        std::cout<<"Invalid Choice\n";
        break;
    }
}

void chooseWinner(char player, char computer){
    switch (player){
        case 'r':
            if(computer == 'r'){
                std::cout << "Its a tie\n";
            } else if(computer == 'p'){
                std::cout << "You loose";
            }else{
                std::cout << "You win";
            }
            break;
        case 'p':
            if(computer == 'r'){
                std::cout << "You won\n";
            } else if(computer == 'p'){
                std::cout << "Its a tie";
            }else{
                std::cout << "you loose";
            }
            break;
        case 's':
            if(computer == 'r'){
                std::cout << "You lost\n";
            } else if(computer == 'p'){
                std::cout << "You won";
            }else{
                std::cout << "tie";
            }
            break;
    }
}