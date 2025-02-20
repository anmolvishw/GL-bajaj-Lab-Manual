// Write a program to print the entire prime no between 1 and 
// 300 using user define function.

public class entirePrimeNO {
    public static void sol(int n){
        int i, j, flag;
        for(i=1; i<=n; i++){
            if(i==1 || i==0){
                continue;
            }
            flag = 1;
            for(j=2; j<=i/2; ++j){
                if(i%j==0){
                    flag = 0;
                    break;
                }
            }
            if(flag==1){
                System.out.println(i);
            }
        }
    }
    public static void main(String[] args) {
       sol(300);
    }
}
