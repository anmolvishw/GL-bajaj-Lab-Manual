// Rate and conditons
            // •	Minimum Rs. 100 for up to 50 calls
            // •	Plus Rs. 0.80 per call for next 50 calls
            // •	Plus Rs. 0.60 per call for next 100 calls
            // •	Plus Rs. 0.40 per call for any call beyond 200 calls
import java.util.Scanner;

class  TelephoneBill{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Ente the Call Volume : ");
        int calls = sc.nextInt();
        double bill=100;

        if(calls<=50){
                System.out.println("Total calls : "+calls+", And Bill : "+bill);
        }else if(calls<=100){
            bill = bill + (calls - 50)*0.8;
            System.out.println("Total calls : "+calls+", And Bill : "+bill);
        }else if(calls<=200){
            bill = bill + 50*0.8 + (calls - 100)*0.6;
            System.out.println("Total calls : "+calls+", And Bill : "+bill);
        }else{
            bill = bill + 50*0.8 + 100*0.6 + (calls - 200)*0.4;
            System.out.println("Total calls : "+calls+", And Bill : "+bill);
        }

    }
}