#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int a,int b){
    int d=a-b;
    int nfact=factorial(a);
    int rfact=factorial(b);
    int nrfact=factorial(d);
    int ncr=nfact/(rfact*nrfact);
    return ncr;
}

int main(){
    int nol;
    printf("nol=");
    scanf("%d",&nol);  
    int space=nol-1;
    for(int n=0;n<nol;n++){
        for(int s=space;s>n;s--){
             printf(" "); 
            }
        for(int r=0;r<=n;r++){
            int ncr=combination(n,r);
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}