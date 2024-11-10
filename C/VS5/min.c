#include<stdio.h>
#include<limits.h>
int main(){
    int n,i;
    printf("Enter the total number of inputs:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("Entry %d: ",i+1);
        scanf("%d",&arr[i]);}
     //int min=arr[0];
     int min=INT_MAX;
     for(i=0;i<=n-1;i++){

        if(arr[i]<min){
            min=arr[i];
        }}
    printf("The minimum number is %d",min);
return 0;
}