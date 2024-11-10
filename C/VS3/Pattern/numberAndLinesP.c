#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a value for n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=i;j++){
            char ch=(char)(a+64);
            if(i%2!=0)
            printf("%d",j);
            else printf("%c",ch);
            a++;
            
        }
        printf("\n");
    }
    return 0;
}