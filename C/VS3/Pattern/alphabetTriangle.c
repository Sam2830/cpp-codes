#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number for alphabetical square:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=i;j++){
            int d=a+64;               // for Typecasting
            char ch=(char)d;          // Typecasting.
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
}