#include<stdio.h>
int main(){
    int num,r,reverse=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0){
    r=num%10;
    reverse=reverse*10+r;
    num=num/10;
    }
    if(num==reverse) printf("%d is a palindrome",num);
    else printf("%d is not a palindrome",num);
}