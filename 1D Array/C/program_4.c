#include<stdio.h>
void reverse_arr(int arr[], int n){
    int i=0;
    int j=n-1;
    for(i=0,j=(n-1);i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("the reversed array is :\n");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }
}
int main()
{
    int n;
    printf("enter the number of the  element in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("the element in the array is :\n");
     for(int i=0;i<n;i++){
        printf("enter the element in the arr[%d] :",i);
        scanf("%d",&arr[i]);
     }
        reverse_arr(arr,n);
   return 0;
}