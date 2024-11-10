#include<stdio.h>
int main(){
    //Reverse order in array
    int i=0,j,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("Entry %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int brr[n];
    for(i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
        
    }
     for(i=0;i<=n-1;i++){
        printf("%d ",brr[i]);
    }


    return 0;
}