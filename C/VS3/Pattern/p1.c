#include<stdio.h>
int main(){
 int n,m,i,j;
 printf("Number of rows:");
 scanf("%d",&n);
 printf("Number of coloumns:");
 scanf("%d",&m);
 for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        printf("%d",j);
    }
    printf("\n");
 }
 return 0;
}
/*int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    int m;
    printf("m=");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/