#include<stdio.h>
int min(int a, int b){
    if (a<b) return a;
    else return b;
}
int hcf(int a,int b)
{
    int gcd;
    for(int i=1;i<=min(a,b);i++){
     if(a%i==0&&b%i==0)
     gcd=i;
    }
    return gcd;
}
int main(){
    int a,b;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    int gcd=hcf(a,b);
    printf("%d",gcd);
    return 0;
}