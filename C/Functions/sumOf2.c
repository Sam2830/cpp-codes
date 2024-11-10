#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a,b,sum=0;
    printf("Enter number1:");
    scanf("%d",&a);
    printf("Enter number2:");
    scanf("%d",&b);
    sum=add(a,b);
    printf("Sum=%d",sum);
    return 0;
}