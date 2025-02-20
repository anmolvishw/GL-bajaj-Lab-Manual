
import java.util.Scanner;

class FahrenheitToCelsius{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Fahrenheit value ; ");
        double Fahrenheit = sc.nextDouble();

        System.out.println("Celsius : "+(((Fahrenheit-32)*5)/9));
    }
}