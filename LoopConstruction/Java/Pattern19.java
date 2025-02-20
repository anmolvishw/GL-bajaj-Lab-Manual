public class Pattern19 {
 public static void main(String[] args) {
    int n = 7;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            System.out.print(" ");
        }

        for(int j = 0; j < n - i; j++) {
            System.out.print((char)('A' + j) + " ");
        }

        for(int k = n - i - 2; k >= 0; k--) {
            System.out.print((char)('A' + k) + " ");
        }

        System.out.println();
    }
 }   
}
