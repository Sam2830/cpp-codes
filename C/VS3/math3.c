#include<stdio.h>
int main(){
    int m;
    int y;
    int i;
    int t;
    printf("Enter the money you took:");
    scanf("%d",&m);
    printf("The time you will pay by(year):");
    scanf("%d",&y);
    printf("What was your interest rate:");
    scanf("%d",&i);
    t=((i*m/100)+m)*y;
    printf("The total amount of money you have to pay is %d taka",t);
    return 0;
}