#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n,r;
    printf("(n,r)=");
    scanf("%d%d",&n,&r);
    int d=n-r;
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(d);
    int ncr=nfact/(rfact*nrfact);
    int npr=nfact/nrfact;
    printf("%d,%d",ncr,npr);
    return 0;
}