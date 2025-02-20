
import java.util.Scanner;

public class ArithmeticProgression {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("ENter first term: ");
        int firstterm = sc.nextInt();

        System.out.println("ENter Common differnce: ");
        int commondiff = sc.nextInt();

        System.out.println("ENter nth term: ");
        int n = sc.nextInt();
        int sum = 0;

        for(int i = 1; i<=n; i++){
            System.out.print(firstterm+" ");
            sum = firstterm + sum;
            firstterm += commondiff;
        }
        System.out.println();
        System.out.println("Total Sum : "+sum);
    }
}
