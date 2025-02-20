
import java.util.Scanner;

class PowerofTwo {
    public static boolean   ispower2(int n){
        if(n<=0) return false;

        return (n & (n - 1)) == 0 ? true : false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a value : ");
        int n = sc.nextInt();

        if(ispower2(n))
            System.out.println("yes");
        else    
            System.out.println("No");
    }
}