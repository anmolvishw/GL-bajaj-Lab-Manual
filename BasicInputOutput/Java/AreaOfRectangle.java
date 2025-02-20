import java.util.Scanner;

class AreaOfRectangle{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float width,height;

        System.out.println("Enter Your Area of rectangel : Width x height :>");
        width = sc.nextFloat();
        height = sc.nextFloat();

        System.out.println("Area of Rectangle : "+(width*height));

    }
}