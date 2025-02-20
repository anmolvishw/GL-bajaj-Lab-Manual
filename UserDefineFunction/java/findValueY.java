// Write a program to find the value of y for a particular value of n. The a, x,b, n is input by user
//  if n=1 y=ax % b
// if n=2 y=ax2 + b2
// if n=3 y=a - bx
// if n=4 y=a + xb


public class findValueY {
    public static void sol(int a, int x, int b, int n) {
        int y = 0;
        if (n == 1) {
            y = a * x % b;
        } else if (n == 2) {
            y = a * x * x + b * b;
        } else if (n == 3) {
            y = a - b * x;
        } else if (n == 4) {
            y = a + x * b;
        }
        System.out.println(y);
    }
    public static void main(String[] args) {
        sol(2, 3, 4, 1);
    }
}
