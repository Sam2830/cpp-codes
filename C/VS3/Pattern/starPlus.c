#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a value for n(odd):");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        for(j=1;j<=n;j++){
            
            if(i==(n+1)/2 || j==(n+1)/2)
            printf("*",j);
            else printf(" ");
            
            
        }
        printf("\n");
    }
    return 0;
}