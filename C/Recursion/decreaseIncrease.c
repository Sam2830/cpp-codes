#include<stdio.h>
int main(){
    void both();
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
   both(n);
    return 0;
}
void both(int x){
    if (x==0) return;
    printf("%d ",x);
    both(x-1);
    printf("%d ",x);
    return;
}