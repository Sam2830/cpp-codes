//given an array of integers,change the value of odd indexed elements to its second multiple 
//and even indexed element incremented by 10.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("\nEntry %d: ",i+1);
        scanf("%d",&arr[i]);
         if (i%2!=0){
            arr[i]=arr[i]*2;
         }
         else arr[i]=arr[i]+10;
    }
    for(i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;

   
}