#include<stdio.h>
int main(){
    float i,n,a;
    printf("n=");
    scanf("%f",&n);
    a=100;
    for(i=1;i<=n;i++){
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}