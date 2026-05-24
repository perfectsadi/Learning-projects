#include<iostream>
#include<cmath>

main(){
    double x,y;
    char proccess;
    std::cout<<"********WELCOME*******\n";
    std::cout<<"Enter '+' for addition \n      '-'for subtraction \n      '*'for multiplication \n      '/'for divition \n";
    std::cin >>proccess;
    switch(proccess){
        case '+':
            std::cout<<"Enter two number to addition.\n";
            std::cin>>x>>y;
            std::cout<<"Your final output is "<<x+y;
            break;

        case '-':
            std::cout<<"Enter two number to subtraction.\n";
            std::cin>>x>>y;
            std::cout<<"Your final output is "<<x-y;
            break;
            


        case '*':
            std::cout<<"Enter two number to multiplication.\n";
            std::cin>>x>>y;
            std::cout<<"Your final output is "<<x*y;
            break;

        case '/':
            std::cout<<"Enter two number to division.\n";
            std::cin>>x>>y;
            std::cout<<"Your final output is "<<x/y;
            break;
        default:
            std::cout<<"ERROR! Try entering a valid operation !\n";
            return -1;

    }


    return 0;
}
     