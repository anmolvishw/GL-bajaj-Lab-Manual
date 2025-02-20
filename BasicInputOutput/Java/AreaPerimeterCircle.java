import java.util.Scanner;

class AreaPerimeterCircle{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        float pi = 3.14f;
        System.out.println("Enter Radius of Circle : ");
        float radius = sc.nextFloat();

        System.out.println("Area of Circle: "+(pi*radius*radius)); // pi * r^2
        System.out.println("Perimeter of Circle: "+(2*pi*radius)); // 2 * pi * r
    }
}