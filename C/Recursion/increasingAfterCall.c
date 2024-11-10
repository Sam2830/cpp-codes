#include<stdio.h>
int main(){
    void increasing();
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}
void increasing(int x){
    if (x==0) return;
   
    increasing(x-1);
     printf("%d ",x);
    return;
}