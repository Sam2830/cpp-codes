#include<stdio.h>
int main(){
    int n,i,t=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        i=(n%10);
        t=t+i;
        n=n/10;
    }
    printf("The summation of digits is %d\n",t);
}