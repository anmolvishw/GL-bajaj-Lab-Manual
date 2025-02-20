public class replaceChar {
    public static String replaceCharacter(String str, char ch, char replace) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ch) {
                result.append(replace);
            } else {
                result.append(str.charAt(i));
            }
        }
        return result.toString();
    }

    public static void main(String[] args) {
        String str = "This book is very easy";
        char ch = 's';
        char replace = 'p';
        System.out.println(replaceCharacter(str, ch, replace));
    }
}