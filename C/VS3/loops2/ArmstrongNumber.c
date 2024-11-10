#include<stdio.h>
int main(){
    int a,b,c,j,k,arm;
    for(int i=1;i<=50;i++){
        a=i%10;
        j=i/10;
        b=j%10;
        k=j/10;
        c=k%10;
       arm=a*a*a+b*b*b+c*c*c;
      if(arm=a+b*10+c*100){printf("%d ",arm);}
      //  printf("%d ",j);
    }
     
    return 0;
}