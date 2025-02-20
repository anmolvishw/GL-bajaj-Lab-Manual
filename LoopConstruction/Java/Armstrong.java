
import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a value : ");
        int n = sc.nextInt();
        int check = n;

        int count=0;

        while(n!=0){
            n/=10;
            count++;
        }

        n = check;
        int result = 0;
        while(n!=0){
           int temp  = n %10;
           result = (int) (result + Math.pow(temp, count));
            n/=10;
        }

        if(check == result)
            System.out.println("It is Armstrong No ");
        else    
            System.out.println("It is not Armstrong No ");

    }
}
