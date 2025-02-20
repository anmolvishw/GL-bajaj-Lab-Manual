public class wildCardPattern {
    public static boolean isMatch(String text, String pattern) {
        if (pattern.isEmpty()) {
            return text.isEmpty();
        }
        if (text.isEmpty() && pattern.charAt(0) != '*') {
            return false;
        }
        if (pattern.charAt(0) == '*') {
            return isMatch(text, pattern.substring(1)) || (!text.isEmpty() && isMatch(text.substring(1), pattern));
        } else {
            return !text.isEmpty() && (pattern.charAt(0) == '?' || pattern.charAt(0) == text.charAt(0)) && isMatch(text.substring(1), pattern.substring(1));
        }
    }

    public static void main(String[] args) {
        String text = "baaabab";
        String pattern = "*****ba*****ab";
        System.out.println(isMatch(text, pattern) ? "true" : "false");
    }
}