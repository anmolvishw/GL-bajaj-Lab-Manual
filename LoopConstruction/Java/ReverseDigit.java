
import java.util.Scanner;

public class ReverseDigit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("enter the N value ");
        int n = sc.nextInt();
        int result=0;

        while(n!=0){
            result = result * 10 +  n%10;
            n/=10;
        }

        System.out.println("reverse Digit is : "+result);
    }

}
