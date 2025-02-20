
import java.util.Scanner;

public class FibonacciSeries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Nth Value ; ");
        int n = sc.nextInt();
        int first=0,second=1,next=0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                System.out.print(first+" ");
            } else if (i == 1) {
                System.out.print(second+" ");
            } else {
                next = first + second;
                System.out.print(next+" ");
                first = second;
                second = next;
            }
        }
    }
}
