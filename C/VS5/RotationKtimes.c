#include<stdio.h>
int main(){
    //Reverse order in array
    int i=0,j=0,n,k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Number of rotation:");
    scanf("%d",&k);
    k=k%n;
    for(i=0;i<=n-1;i++){
        printf("Entry %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int brr[n];
    for(i=0;i<=n-1;i++){
       if(i<=k) brr[i]=arr[(n-1)-i];
        else {brr[i]=arr[j];
        j++;}
    }
     for(i=0;i<=n-1;i++){
        printf("%d ",brr[i]);
    }


    return 0;
}