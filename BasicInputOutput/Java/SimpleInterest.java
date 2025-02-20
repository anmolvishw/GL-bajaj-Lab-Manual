
import java.util.Scanner;

class SimpleInterest{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Principle rate and time: ");
        double Principle = sc.nextDouble();
        double rate = sc.nextDouble();
        double time = sc.nextDouble();

        System.out.println("Simple Interest : "+(Principle*rate*time/100));
        System.out.println("Total Amount : "+(Principle*rate*time/100)+Principle);
    }
}