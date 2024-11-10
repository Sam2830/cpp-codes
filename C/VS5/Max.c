#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the total number of inputs:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("Entry %d: ",i+1);
        scanf("%d",&arr[i]);}
     int max=arr[0];
     for(i=0;i<=n-1;i++){

        if(arr[i]>max){
            max=arr[i];
        }}
    printf("The maximum number is %d",max);
return 0;
}