
import java.util.Scanner;

public class CountFlipBit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int count = 0;
        for (int c = a ^ b; c != 0; c = c & (c - 1)) {
            count++;
        }
        System.out.println(count);
    }
}
