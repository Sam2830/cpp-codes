#include<stdio.h>
int main(){
    int n,i,product=1;
    printf("Enter the total number of inputs:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("Entry %d: ",i+1);
        scanf("%d",&arr[i]);
        product=product*arr[i];
    }
    printf("The sum is %d",product);
    return 0;
}