
import java.util.Scanner;

class PowerOfTwoBitwise{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a value : ");
        int num = sc.nextInt();

        int check = num & (num-1);
        if(check==0){
            System.out.println(num+" is Power of 2 ");
        }else{
            System.out.println(num+" is not Power of 2 ");
        }
    }
}