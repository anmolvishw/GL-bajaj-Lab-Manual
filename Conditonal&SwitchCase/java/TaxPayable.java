//tax rate--------------
        // up to 1,00,000                  No tax
        // From 1,00,001 to 1,50,000	    10% of the income tax exceeding Rs. 1,00,000
        // From 1,50,001 to 2,50,000	    Rs. 5000 + 20% of the income tax exceeding Rs. 1,50,000
        // Above 2,50,000	                Rs. 25000 + 30% of the income tax exceeding Rs. 2,50,000

import java.util.Scanner;

public class TaxPayable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Your Total Income : ");
        double income = sc.nextDouble();

            System.out.println("Your Income : "+income);

        switch((income<=100000)?1:(income<=150000)?2:(income<=250000)?3:4){
            case 1: System.out.println("No Tax Deduction "); break;
            
            case 2: System.out.println("Total Deduction : "+(income-100000)*0.10); break;

            case 3: System.out.println("Total Deduction : "+(5000+(income-150000)*0.20)); break;

            case 4: System.out.println("Total Deduction : "+(25000+(income-250000)*0.30)); break;
        }

    }
}
