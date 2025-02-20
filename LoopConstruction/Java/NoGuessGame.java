
import java.util.Scanner;

public class NoGuessGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

       do { 

        System.out.println("Enter your guess value between 1 to 10");
        int guess = sc.nextInt();

        int value = (int)(Math.random()*10 +1);
        System.out.println("Genretaed Value is "+value);

        if(guess>value){
            System.out.println("You guess Large value ");
        }else if(guess == value){
            System.out.println("Congrats Your guess is right");
            break;
        }else{
            System.out.println("You guess small value ");
        }
           
       } while (true);
    }
}
