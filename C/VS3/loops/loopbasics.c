#include<stdio.h>
int main(){
   int i;
   int j;
   int n;
   printf("Enter the number of which you want a table:");
   scanf("%d",&n);
   for(i=1;i<=10;i++){
    j=n*i;
    printf("%d*%d=%d\n",n,i,j);
   }
   return 0;
}