/* Write a program, enter n elements into an array, perform 
linear search*/
#include<stdio.h>
int linear_search(int arr[],int n,int target){
     for(int i=0;i<n;i++){
        if(arr[i]== target){
            return i;
        }
     }
     return -1;
}

int main(){
    int n,target;
    printf("Enter the number of element in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("The element in the array is :\n");
    for(int i=0;i<n;i++){
        printf("Enter the element in the array arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element :");
    scanf("%d",&target);
    int result =linear_search(arr,n,target);
    if(result!=-1){
        printf("The target %d found at the index %d:\n ",target,result);

    }
    else{
        printf("The target %d not found in the array:",target);
    }

    return 0;
}