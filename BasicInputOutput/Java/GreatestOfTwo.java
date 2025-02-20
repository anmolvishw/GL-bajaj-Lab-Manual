
import java.util.Scanner;

class GreatestOfTwo{
    public static void main(String[] args) {
        Scanner sc  =new  Scanner(System.in);

        System.out.println("Enter Two Value ");
        float num1 = sc.nextFloat();
        float num2 = sc.nextFloat();

        System.out.println((num1==num2)?"Both VAlue is Equal" : (num1>num2)?"Num1 is greater" : "Num2 is greatest");
    }
}