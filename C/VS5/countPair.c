#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=11;
    int pairs=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){
            pairs++;
            printf("(%d,%d)",arr[i],arr[j]);}
        }
    }
    printf("Total pairs:%d\n",pairs);
    return 0;
    }