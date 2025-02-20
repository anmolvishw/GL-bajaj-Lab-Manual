import java.util.Scanner;

public class RingPrice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the ring type (1 for Gold plated, 2 for Solid gold, 3 for Silver plated): ");
        int ringType = sc.nextInt();

        System.out.print("Enter the number of engraved units: ");
        int numEngravings = sc.nextInt();

        double totalCost;

        if (ringType == 1) {
            totalCost = 500 + (70.30 * numEngravings);  // Gold plated
        }
        else if (ringType == 2) {
            totalCost = 1000 + (10.40 * numEngravings); // Solid gold
        }
        else if (ringType == 3) {
            totalCost = 300 + (5.10 * numEngravings);   // Silver plated
        }
        else {
            System.out.println("Invalid ring type!");
            return;
        }

        System.out.println("Total cost of the ring: Rs. " + totalCost);

        sc.close();
    }
}
