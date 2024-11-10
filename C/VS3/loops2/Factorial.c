#include<stdio.h>
int main(){
    int i,n,f=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>1;i--){
        f=f*i;
    // printf("%d\n",f);
    }
   printf("The factorial of number %d is %d.\n",n,f);
    return 0;
}