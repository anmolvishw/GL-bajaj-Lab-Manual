// Write a program to calculate the GCD of given numbers using recursion

public class sumOf5DigitNo {
    public static int sol(int n) {
        if (n == 0) {
            return 0;
        }
        return n % 10 + sol(n / 10);
    }

    public static void main(String[] args) {
        System.out.println(sol(12345));
    }
}
