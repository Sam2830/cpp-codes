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
     int max=arr[0];
     int smax=INT_MIN;
     for(i=0;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }}
    for(i=0;i<=n-1;i++){
        if(arr[i]>smax&&arr[i]!=max){
            smax=arr[i];
        }}
    printf("The second maximum number is %d",smax);
return 0;
}