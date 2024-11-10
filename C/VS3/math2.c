#include<stdio.h>
int main (){
    int a1,a2,b1,b2,c1,c2,d,x,y;
    printf("Enter the co-efficient for ax+by=c equation\n");
    printf("a1=");
    scanf("%d",&a1);
    printf("b1=");
    scanf("%d",&b1);
    printf("c1=");
    scanf("%d",&c1);
    printf("a2=");
    scanf("%d",&a2);
    printf("b2=");
    scanf("%d",&b2);
    printf("c2=");
    scanf("%d",&c2);
    d=a1*b2-a2*b1;
    if(d==0){printf("Undefined");}
    else{
    x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
    y=(c1*a2-a1*c2)/(a1*b2-a2*b1);
    printf("x=%d",x);
    printf("y=%d",y);}
    return 0;
}
