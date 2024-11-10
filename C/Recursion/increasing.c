#include<stdio.h>
int main(){
    void increasing();
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
void increasing(int x,int y){
    if (x>y) return;
    printf("%d ",x);
    increasing(x+1,y);
    return;
}