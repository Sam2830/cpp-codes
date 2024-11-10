#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the height of pyramid:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int p=i-1;p>=1;p--){
            printf("%d",p);
        }
         printf("\n");
        
    }
   
    return 0;
}