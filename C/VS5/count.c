#include<stdio.h>
int main(){
    int i,n=5,num,count=0;
    //printf("Enter the size of array:");
    //scanf("%d",&n);
    int arr[5]={11,29,30,70,75};
    printf("Enter the number you want to compare with:");
    scanf("%d",&num);
    for(i=0;i<=n-1;i++){
        if(arr[i]>num){
            count++;
        }
    }
    printf("Count=%d.\n",count);
    return 0;
    }