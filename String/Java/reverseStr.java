public class reverseStr {
    public static String sol(String str) {
        if (str.isEmpty()) {
            return str;
        }
        return sol(str.substring(1)) + str.charAt(0);
    }

    public static void main(String[] args) {
        System.out.println(sol("Hello"));
    }
}