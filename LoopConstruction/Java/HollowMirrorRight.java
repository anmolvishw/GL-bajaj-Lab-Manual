public class HollowMirrorRight {
    public static void main(String[] args) {
        int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++){
            System.out.print("  ");
        }
        
        if(i == 1 || i == n){
            for(int j = 1; j <= i; j++){
                System.out.print("* ");
            }
        }
        else        {
            for(int j = 1; j <= i; j++){
                if(j == 1 || j == i)
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }
        }
        System.out.println();
    }
    }
}
