#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=(2*n-1);i++){
        if(i<=n){
            for(j=1;j<=i;j++){
                printf("%d",j);}}
                    else{
                        for(j=(1);j<=(2*n-i);j++){
                            printf("%d",j);
                        }
                    }
                
               printf("\n");}
              return 0;
            }