
import java.util.Scanner;

class  SwapNumbersBitwise{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Two Value : ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.println("Before Swap : "+a+", "+b);

        a = a^b;
        b = a^b;
        a = a^b;

        System.out.println("After Swap : "+a+", "+b);
    }
}