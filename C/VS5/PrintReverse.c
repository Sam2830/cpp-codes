#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of entries you want to take:");
    scanf("%d",&n);
     int a[n];
    for(int i=0;i<=n-1;i++){
        printf("\nEnter the element no %d:",i+1);
        scanf("%d",&a[i]);
}
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
return 0;
}