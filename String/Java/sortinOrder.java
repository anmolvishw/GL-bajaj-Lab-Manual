public class sortinOrder {
    public static void sort(char[] str) {
        int len = str.length;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (str[i] > str[j]) {
                    char temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        String input = "STRING";
        char[] str = input.toCharArray();
        sort(str);
        System.out.println(new String(str));
    }
}