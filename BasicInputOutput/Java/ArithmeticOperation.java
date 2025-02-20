import java.util.Scanner;

class ArithmeticOperation{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Two Value : ");
        double num1 = sc.nextDouble();
        double num2 = sc.nextDouble();

        System.out.println("Addition A + B : "+(num1+num2));
        System.out.println("Subtraction A - B : "+(num1-num2));
        System.out.println("Multiply A * B : "+(num1*num2));
        System.out.println("Divsion A / B : "+(num1/num2));
        System.out.println("Modulus A % B : "+(num1%num2));
        System.out.println("Inc Dec:- A++ --B --A B++ : "+ num1++ +" "+ + --num2 +" "+ --num1 +" "+ num2++);
    }
}