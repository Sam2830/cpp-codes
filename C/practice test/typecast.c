#include<stdio.h>
int main(){
    int i=65;
    for(i=65;i<=90;i++){
        char ch=(char)i;// typecasting.
        printf("%c ",ch);
    }
    return 0;
}