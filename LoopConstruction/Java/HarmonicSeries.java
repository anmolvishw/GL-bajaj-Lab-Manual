
import java.util.Scanner;

public class HarmonicSeries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the Nth series value ; ");
        int n = sc.nextInt();
        double sum = 0;

        for(int i =1; i<=n; i++){
            System.out.print("1/"+i);
            if(i<n) System.out.print(" + ");
            sum += 1.0/i;

        }

        System.out.println();
        System.out.println("Sum :  "+sum);
    
    }
}
