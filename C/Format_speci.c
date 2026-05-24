#include<stdio.h>
int main(){
    float pen_pay1=19.55;
    float pen_pay2=0.99;
    float return_pay3=-3.99;
    printf("%+6.2f\n",pen_pay1);
    printf("%+6.2f\n",pen_pay2);
    printf("%+6.2f\n",return_pay3);

    float payment=pen_pay1+pen_pay2+return_pay3;
    printf("Your total payment is %+6.2f\n",payment);
    return 0;
}