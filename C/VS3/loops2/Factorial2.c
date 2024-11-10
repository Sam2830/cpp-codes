#include<stdio.h>
int main(){
    int i,n,f=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
     printf("Factorial of %d is %d\n",i,f);
    }
   //printf("The factorial of number %d is %d.\n",n,f);
    return 0;
}