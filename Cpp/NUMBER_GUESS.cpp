#include<iostream>
#include<ctime>

int main(){
    int guess,tries,random_number;
    srand(time(0));
    random_number= (rand()%10)+1;
    do{
        std::cout <<"Enter the number (1-10): ";
        tries+1;
        std::cin >> guess;
        if(guess>random_number){
            std::cout<<"Too high"<<"\n";
        }
        else if(guess<random_number){
            std::cout<<"Too low"<<"\n";
        }
        else{
            std::cout<<"You won !"<<" at the tries of "<<int(tries);
        }

    }while(guess!=random_number);
    return 0;
}