
import java.util.Scanner;

public class power {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter base and power");
        int base = sc.nextInt();
        int power = sc.nextInt();
        long result = 1;

        for(int i = 0;i<power; i++){
            result = result * base;
        }
        System.out.println(base+" raised to the power "+power+" is "+result);
    }
}
