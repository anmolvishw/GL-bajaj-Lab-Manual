// Write a program to calculate the GCD of given numbers using recursion
public class gcd {
    public static int sol(int a, int b) {
        if (b == 0) {
            return a;
        }
        return sol(b, a % b);
    }

    public static void main(String[] args) {
        System.out.println(sol(10, 15));
    }
}
