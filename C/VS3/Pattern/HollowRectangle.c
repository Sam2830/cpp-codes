#include<stdio.h>
int main(){
    int i,j,l,b;
    printf("Enter the value of length of rectangle:");
    scanf("%d",&l);
    printf("Enter the value of breadth of rectangle:");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        for(j=1;j<=l;j++){
            if(i==1||i==b||j==1||j==l){
                printf("*");

            }
            else{printf(" ");}
        }
        printf("\n");
    }
    return 0;
}