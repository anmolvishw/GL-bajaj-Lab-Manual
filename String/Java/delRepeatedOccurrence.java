public class delRepeatedOccurrence {
    public static void delRepeatedOccurrence(char[] str) {
        int len = str.length;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (str[i] == str[j]) {
                    str[j] = ' ';
                }
            }
        }
    }

    public static void main(String[] args) {
        String input = "This book is very easy";
        char[] str = input.toCharArray();
        delRepeatedOccurrence(str);
        System.out.println(new String(str));
    }
}