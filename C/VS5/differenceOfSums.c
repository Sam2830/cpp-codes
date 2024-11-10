#include<stdio.h>
int main(){
    int arr[4]={12,13,14,15};
    int sum1=0,sum2=0,dif;
    for(int i=0;i<=3;i++){
        if(i%2!=0){
            sum1=sum1+arr[i];
        }
        else sum2=sum2+arr[i];
    }
    if(sum1>sum2){
        dif=sum1-sum2;
    }
    else dif=sum2-sum1;
    printf("The difference of the sum of odd and even indices is %d.\n",dif);
    return 0;
    
}