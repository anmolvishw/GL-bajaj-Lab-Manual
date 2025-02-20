
import java.util.Scanner;

class CompoundInterest{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Principle Amount ");
        double Principle = sc.nextDouble();
        System.out.println("Enter the rate of interest and time");
        double rate = sc.nextDouble();
        double time = sc.nextDouble();

        System.out.println("Comppound Interst : "+(Principle*rate*time)/100);
        
    }
}