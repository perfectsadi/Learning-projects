#include<iostream>
#include<cmath>
int main(){
    double a,b,c;
    std::cout << "Enter value of the first arm :";
    std::cin >> a;
    std::cout << "Enter value of the another arm :";
    std::cin >> b;
    
    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);

    std::cout<< "Your final answer is :" << c;

}