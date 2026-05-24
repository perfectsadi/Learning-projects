#include<stdio.h>
#include<string.h>
void display_pay(char name[]){
    printf("\nDear %s, your order is on pending. ",name);
}
int main() {
    char name[50] = "";
    
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    display_pay(name);
    return 0;
}