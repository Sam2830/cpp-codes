#include<stdio.h>
int main(){
    int i,n,s;
    printf("enter the nth term:");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++){
    s=s+i;}
    printf("The summation is %d",s);
    return 0;
}