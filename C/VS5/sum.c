#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the total number of inputs:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("Entry %d: ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum is %d",sum);
    return 0;
}