#include<stdio.h>
int main(){
    double f,c;
    printf("Enter the temperature in Celcius:");
    scanf("%lf\n",&c);
    f=c*1.8+32;
    printf("The temperature is %lf degree farenheit.\n",f);
    return 0;
}