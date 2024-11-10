#include<stdio.h>
int main(){
    int i,n,a=0,b=1,sum=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",sum);
        sum=a+b;
        a=b;
        b=sum;
     
    }
    return 0;

}