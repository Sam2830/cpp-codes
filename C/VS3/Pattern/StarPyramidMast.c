#include<stdio.h>
int main(){
    int n;
    printf("Enter a value of n:");
    scanf("%d",&n);
    int st=n-1;
    int sp=1;
    for(int fl=1;fl<=(2*n-1);fl++)
        printf("*"); 
        printf("\n"); 
    for(int i=1;i<=n-1;i++){
        
        for(int j=1;j<=st;j++){
            printf("*");
        }
        for(int k=1;k<=sp;k++){
            printf(" ");
        }
        for(int l=1;l<=st;l++){
            printf("*");}
    sp+=2;
    st--;
    printf("\n");
    }
    return 0;
   
}