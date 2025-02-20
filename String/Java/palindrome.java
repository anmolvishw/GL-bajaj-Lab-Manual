public class palindrome {
    public static void main(String[] args) {
        String str = "NOON";
        int i = 0, j = str.length() - 1;
        boolean isPalindrome = true;

        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) {
                isPalindrome = false;
                break;
            }
            i++;
            j--;
        }

        if (isPalindrome) {
            System.out.println("The given string is a palindrome");
        } else {
            System.out.println("The given string is not a palindrome");
        }
    }
}