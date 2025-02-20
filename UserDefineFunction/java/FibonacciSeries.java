// Write a program to find sum of Fibonacci series up to N
//  (where N is entered through   keyboard) using function

public class FibonacciSeries {
    public static void sol(int n){
        int a = 0, b = 1, c, i;
        int sum = 0;
        System.out.print(a+" "+b+" ");
        for(i=2; i<=n; i++){
            c = a + b;
            sum += c;
            a = b;
            b = c;
             // print each step 
            System.out.print(c+" ");
        }
        System.out.println("\nsum : "+sum);
        }
    public static void main(String[] args) {
        sol(20);
    }
}
