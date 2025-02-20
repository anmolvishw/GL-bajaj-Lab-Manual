
import java.util.Scanner;

class RootsOfQuadratic{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a b c value : ");
        float a = sc.nextFloat();
        float b = sc.nextFloat();
        float c = sc.nextFloat();

        double d = b * b - 4 * a * c;

        if (d > 0) {
            double root1 = (-b + Math.sqrt(d)) / (2 * a);
            double root2 = (-b - Math.sqrt(d)) / (2 * a);
            System.out.println("Root 1: " + root1);
            System.out.println("Root 2: " + root2);
        } else if (d == 0) {
            double root = -b / (2 * a);
            System.out.println("Root 1 and Root 2 are equal: " + root);
        } else {
            double realPart = -b / (2 * a);
            double imaginaryPart = Math.sqrt(-d) / (2 * a);
            System.out.println("Root 1: " + realPart + " + i " + imaginaryPart);
            System.out.println("Root 2: " + realPart + " - i " + imaginaryPart);
        }
        
        sc.close();
    }
}