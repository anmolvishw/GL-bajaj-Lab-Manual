// Given a positive integer N, the task is to find the sum of the 
// series 1 – (1/2) + (1/3) – (1/4) +…. (1/N) using recursion.

// Examples: 

// Input: N = 3 
// Output: 0.8333333333333333 
// Explanation: 
// 1 – (1/2) + (1/3) = 0.8333333333333333

// Input: N = 4 
// Output: 0.5833333333333333 
// Explanation: 
// 1- (1/2) + (1/3) – (1/4) = 0.5833333333333333


public class sumOfSeries {
    public static double sol(int n) {
        if (n == 0) {
            return 0;
        }
        return Math.pow(-1, n + 1) * (1.0 / n) + sol(n - 1);
    }

    public static void main(String[] args) {
        System.out.println(sol(3));
    }
}
