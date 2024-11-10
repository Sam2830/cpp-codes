#include<stdio.h>
int main(){
    int marks[10]={25,50,70,65,90,37,40,97,80,33};
    for(int i=0;i<10;i++){
        if(marks[i]<30) printf("%d ",i+1);
    }
    return 0;
}