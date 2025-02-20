
import java.util.Scanner;

public class Divide {
    public static void divide(int dividend, int divisor) {
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        dividend = Math.abs(dividend);
        divisor = Math.abs(divisor);

        int quotient = 0;
        while (dividend >= divisor) {
            dividend -= divisor;
            ++quotient;
        }

        System.out.println(sign * quotient);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the dividend and divisor: ");
        int dividend = sc.nextInt();
        int divisor = sc.nextInt();

        if(divisor == 0) {
            System.out.println("Division by zero is not allowed");
            return;
        }
        divide(dividend, divisor);


    }
}
