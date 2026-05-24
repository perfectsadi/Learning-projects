#include <iostream>

int main(){
    std::string name;
    int age;

    std::cout<<"Enter your full name? ";
    std::getline(std::cin >>std::ws,name);
    
    std::cout <<"How old are you? ";
    std::cin >> age;

    std::cout<<"Hello ," << name<<"\n";
    std::cout<<"You are "<< age << " year old";
    return 0;

}