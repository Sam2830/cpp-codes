#include<stdio.h>
int swap (int *x,int * y){
    int temp;
    temp=*x;
     *x=*y;
    *y=temp; 
    return *x,*y;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%p\n",&a);//address printing with %p
    int *y=&b;        // double pointer = address of address **
    printf("%p\n",y);//address printing with pointer
    swap(&a,&b);// pass by reference 
    printf("%d %d",a,b);
    return 0;
}
