#include<stdio.h>
int main(){
    int a,b,ans=1,i;
    printf("Enter the base number:");
    scanf("%d",&a);
    printf("Enter the value of power:");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        ans=ans*a;
    }
    printf("The answer is %d.\n",ans);
    return 0;
}