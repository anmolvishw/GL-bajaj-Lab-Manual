public class RightArrow {
    public static void main(String[] args) {
        int n =5;

        for(int i = 1; i < n; i++) {
            for(int j = 1; j <= (2*i - 2); j++) {
                System.out.print(" ");
            }

            for(int j = i; j <= n; j++) {
                System.out.print("*");
            }

            System.out.println();
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= (2*n - 2*i); j++) {
                System.out.print(" ");
            }

            for(int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}
