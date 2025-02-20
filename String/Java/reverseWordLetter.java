public class reverseWordLetter {
    public static void reverse(char[] str, int start, int end) {
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    public static void reverseWordLetter(char[] str) {
        int start = 0;
        int len = str.length;
        for (int end = 0; end < len; end++) {
            if (str[end] == ' ') {
                reverse(str, start, end - 1);
                start = end + 1;
            }
        }
        reverse(str, start, len - 1);
        reverse(str, 0, len - 1);
    }

    public static void main(String[] args) {
        String input = "I love my India";
        char[] str = input.toCharArray();
        reverseWordLetter(str);
        System.out.println(new String(str));
    }
}