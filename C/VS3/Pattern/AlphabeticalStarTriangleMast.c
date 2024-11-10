#include<stdio.h>
int main(){
    int i,j,n,a=1;
    printf("Enter number for star Triangle Mast:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");}{
                int ch=(char)(a+64);
                for(int k=1;k<=i;k++){
                    printf("%c",ch);
                }
                a++;
               
            }
             
        printf("\n");
  
    }
    return 0;
}

