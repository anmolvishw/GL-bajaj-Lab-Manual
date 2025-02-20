
import java.util.Scanner;

public class SquareRoot {
 public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a value : ");
    int x = sc.nextInt();


   if(x<0){
    System.out.println("Negative vlaue");
   }else{
    if (x == 0 || x == 1) {
        System.out.println(x);
        return;
    }

    int start = 1, end = x, result = 0;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid <= x / mid) {
            result = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    System.out.println(result);
    return;

   }

 }   
}
