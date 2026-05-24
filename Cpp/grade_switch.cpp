#include<iostream>
int main(){
    char grade;
    std::cout <<"Enter your grade : ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout <<"Execellent!";
        case 'B':
            std::cout <<"Great!";
        case 'C':
            std::cout <<"Not bad , try harder!";
        case 'D':
            std::cout <<"Not good , try harder !";
        default:
            std::cout<< "You failed !";

    }
}