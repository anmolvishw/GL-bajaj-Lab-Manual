/* Find Second largest element in an array
 Given an array of integers, our task is to write a program 
that efficiently finds the second-largest element present in 
the array. 
Examples:
 Input: arr[] = {12, 35, 1, 10, 34, 1}
 Output: The second largest element is 34.
 Explanation: The largest element of the array is 35 and the 
second largest element is 34
 Input: arr[] = {10, 5, 10}
 Output: The second largest element is 5.
 Explanation: The largest element of the array is 10 and the 
second largest element is 5*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of the element in the array :");
    scanf("%d",&n);
    if(n<2){
        printf("second largest number doesn't exist");
        return 0;
    }
    int arr[n];

    printf("enter the element in the arr[0]:");
    scanf("%d",&arr[0]);

    printf("enter the element in the arr[1]:");
    scanf("%d",&arr[1]);

     int max;
     int smax;

    if(arr[0] > max){
        max = arr[0];
        smax = arr[1];
    }
    else{
        max = arr[1];
        smax = arr[0];
    }

   
    for(int i=2;i<n;i++){
        printf("enter the elements in the arr[%d]:",i);
        scanf("%d",&arr[i]);

        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] < max){
            smax =arr[i];

        }

    }

    if(smax == max){
        printf("there is no second max element exist in this array :");
    }
    else{
        printf("the second largest element in this array is :%d",smax);
    }

    return 0;
}