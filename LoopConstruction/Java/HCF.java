
import java.util.Scanner;

public class HCF {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Two value : ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int hcf = 0;

        for(int i = 1; i<num1 && i<num2 ; i++){
            if(num1%i==0 && num2%i==0)
            hcf = i;
        }

        System.out.println("HCF is : "+hcf);
    }
}
