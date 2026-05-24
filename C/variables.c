#include<stdio.h>
#include<stdbool.h>

int main(void){
    int age=18;
    int battery_percentage=92;
    char name[]="Sadi";
    char email[]="sadi.fake@icloud.com";
    float gpa=5.0;
    double pi=3.1415926535;
    bool isWorking= 1;

    printf("I am %d year old\n",age);
    printf("I've %d %%  charge in my iPad\n",battery_percentage);
    printf("I got GPA %f in SSC \n",gpa);
    printf("My name is %s\n",name);
    printf("The value of the pi is %.13lf \n",pi);
    printf("My email adress is %s \n",email);
    if(isWorking){
        printf("Working on something");
    }
    else{
        printf("Doing nothing");
    }
    return 0;
}