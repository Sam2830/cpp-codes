#include<stdio.h>
int main(){
    int i=1,j=1,n;
   
    printf("Enter the value of n:");
    scanf("%d",&n);
     int sum=1;
    for(int a=1;a<=n-2;a++){    
        sum=i+j;
        i=j;
        j=sum;
     // printf("%d ",sum);
    }
    printf("The Fibonacci number of %dth term is %d",n,sum);
    return 0;
}