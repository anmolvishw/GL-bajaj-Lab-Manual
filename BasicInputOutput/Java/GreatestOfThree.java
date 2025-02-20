
import java.util.Scanner;

class  GreatestOfThree{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the 3 values : ");
        float num1 = sc.nextFloat();
        float num2 = sc.nextFloat();
        float num3 = sc.nextFloat();

       if((num1==num2)&&(num2==num3)){
        System.out.println("All value are equal ");
       }else{
        if (num1>num2){
            if(num1>num3){
                System.out.println("Num1 is gretest : "+num1);
            }else{
                System.out.println("Num3 is gretest : "+num3);
            }
        }else if(num2>num3){
            System.out.println("Num2 is gretest : "+num2);
        }else{
            System.out.println("Num3 is gretest : "+num3);
        }
       }
    }
}