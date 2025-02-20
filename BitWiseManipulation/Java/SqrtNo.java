import java.util.Scanner;

public class SqrtNo {
    public static int square(int n) {
        int result = 0;
        int positiveN = Math.abs(n);
        System.out.println(positiveN);
        for (int i = 0; i < positiveN; i++) {
            result += positiveN;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        System.out.println("Square: " + square(n));
    }
}
