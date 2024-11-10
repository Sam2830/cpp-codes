#include<stdio.h>
int main(){
    int i=65;
    for(i=65;i<=90;i++){
         char ch=(char)i;/*type casting*/
        printf("%c-",ch);
        printf("%d\n",i);
       
    }
    
    return 0;
}