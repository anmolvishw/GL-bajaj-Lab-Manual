public class HollowStar {
    public static void main(String[] args) {

        int n=10;

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            System.out.print("*");
        }

        for(int j = 1; j <= (2*i - 2); j++){
           System.out.print(" ");
        }

        for(int j = i; j <= n; j++){
            System.out.print("*");
        }

       System.out.println();
    }

    // Loop to print lower half of the pattern
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
          System.out.print("*");
        }

        for(int j = (2*i - 2); j < (2*n - 2); j++) {
            System.out.print(" ");
        }

        for(int j = 1; j <= i; j++){
            System.out.print("*");
        }

       System.out.println();
    }
    }
}
