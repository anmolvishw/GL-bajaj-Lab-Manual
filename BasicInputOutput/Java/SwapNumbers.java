
import java.util.Scanner;

class  SwapNumbers{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Two Value : ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.println("Before Swap : "+a+", "+b);
        // with third variable ------------
            // int temp = a;
            // a = b;
            // b = temp;
        
        // Wihtout third variable
            a = a+b;
            b = a-b;
            a = a-b;
        System.out.println("After Swap : "+a+", "+b);
    }
}