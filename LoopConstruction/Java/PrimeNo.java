
import java.util.Scanner;

public class PrimeNo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Vlaue ");
        int n = sc.nextInt();

        for(int i = 2; i<n/2;i++){
            if(n%i==0){
                System.out.println("Not A Prime No ");
                return;
        }
    }
    System.out.println("A prime NO");

    }
}
