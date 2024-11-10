#include<stdio.h>
int main(){
    int factorial();
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int fact=factorial(number);
    printf("Factorial=%d.\n",fact);
    return 0;
}
int factorial(int n){
    if (n==1|| n==0) return 1;
    else return n*factorial(n-1);
}