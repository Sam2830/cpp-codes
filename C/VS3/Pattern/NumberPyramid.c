#include<stdio.h>
/*int main(){
    int i,j,k,n;
    printf("Enter the height of pyramid:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/
int main(){
    int i,j,k,n;
    printf("Enter the height of pyramid:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            char ch=(char)(j+64);
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}