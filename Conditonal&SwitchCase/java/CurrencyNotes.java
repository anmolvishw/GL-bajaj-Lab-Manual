
import java.util.Scanner;

public class CurrencyNotes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Your amount");
        int amount = sc.nextInt();

        System.out.println("500 Notes : "+amount/500); amount%=500;
        System.out.println("200 Notes : "+amount/200); amount%=200;
        System.out.println("100 Notes : "+amount/100); amount%=100;
        System.out.println("50 Notes : "+amount/50); amount%=50;
        System.out.println("20 Notes : "+amount/20); amount%=20;
        System.out.println("10 Notes : "+amount/10); amount%=10;
        System.out.println("5 Notes : "+amount/5); amount%=5;
        System.out.println("2 Notes : "+amount/2); amount%=2;
        System.out.println("1 Notes : "+amount/1); amount%=1;
    }
}
