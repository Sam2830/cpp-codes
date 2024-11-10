#include<stdio.h>
//WRONG CODE!!
int main(){
    int i=0,j,n,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("Entry %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0,j=(n-1);i>=j;i++,j--){
        if(arr[i]=arr[j]){count++;i++;j--;
        }
        
    }
    if (count==(n+1)/2) printf("The array is a palindrome.\n");
    else printf("The array is not a palindrome.\n");
    return 0;
}