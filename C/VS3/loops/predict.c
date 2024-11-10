#include<stdio.h>
int main(){
    int x=4,y=0,z;
    while(x>y){
        x--;
        y++;
        if(x==y){
            continue;
        }
        else{printf("%d %d",x,y);}
    }
    return 0;
}