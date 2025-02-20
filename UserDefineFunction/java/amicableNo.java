// Write a C function to test whether a given pair of numbers are amicable numbers.
//  (Amicable number are pairs of numbers each of whose divisors add to the other)

public class amicableNo {
    public static void sol(int n1, int n2){
        int i, sum1 = 0, sum2 = 0;
        for(i=1; i<=n1/2; i++){
            if(n1%i==0){
                sum1 += i;
            }
        }
        for(i=1; i<=n2/2; i++){
            if(n2%i==0){
                sum2 += i;
            }
        }
        if(sum1==n2 && sum2==n1){
            System.out.println("Amicable numbers");
        }else{
            System.out.println("Not Amicable numbers");
        }
    }
 public static void main(String[] args) {
    sol( 220, 284);
 }   
}
