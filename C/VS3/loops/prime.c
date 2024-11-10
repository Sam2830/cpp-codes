#include<stdio.h>
int main(){
    int i,n,a;
    printf("Put the value:");
    scanf("%d",&n);
    a=0;
    for(i=2;i<=n-1;i++){
        if(n%i==0)
        a=1;
    }
    if(n==1){printf("1 is neither prime nor composite.\n");}
    else if(a==0){printf("The number is prime.");}
    else{printf("The number is composite.");}
    return 0;
}