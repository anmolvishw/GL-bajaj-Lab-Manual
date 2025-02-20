// Write a program to print out all the Armstrong number 
// between 100 and 500 using user define function.

public class ArmstrongNo {

    public static void sol(int n) {
        int sum = 0;
        int temp = n;
        while (n > 0) {
            int rem = n % 10;
            sum = sum + (rem * rem * rem);
            n = n / 10;
        }
        if (temp == sum) {
            System.out.println(temp);
        }
    }

    public static void main(String[] args) {
        for (int i = 100; i <= 500; i++) {
            sol(i);
        }
    }
}