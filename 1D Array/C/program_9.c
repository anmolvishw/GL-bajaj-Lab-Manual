#include <stdio.h>
#include <limits.h>  


int maxSubarraySum(int arr[], int n) {
    int maxsum = INT_MIN;  
    int currentsum = 0;    

    for (int i = 0; i < n; i++) {
        currentsum += arr[i];  

        if (currentsum > maxsum) 
            maxsum = currentsum;  

        if (currentsum < 0) 
            currentsum = 0;  
    }

    return maxsum;
}


int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxsum = maxSubarraySum(arr, n);
    printf("Maximum  subarray sum: %d\n", maxsum);

    return 0;
}
