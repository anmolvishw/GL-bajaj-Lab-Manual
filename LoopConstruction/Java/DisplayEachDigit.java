
import java.util.Scanner;

public class DisplayEachDigit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Five Digit Vlaue ");
        int n  = sc.nextInt(); 
        int count = 0;

        System.out.print("Reverse: ");
        while(n!=0){
            count = count * 10 + n%10;
            System.out.print(n%10+" ");
            n/=10;
        }

        System.out.println();
        System.out.print("Forward : ");
        while(count!=0){
            System.out.print(count%10 +" ");
            count/=10;
        }
       
    }
}
