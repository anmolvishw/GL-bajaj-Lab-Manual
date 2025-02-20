import java.util.ArrayList;
import java.util.List;

public class mappingDigit {
        public static void backtrack(List<String> ans, String[] mapping, String digits, int index, StringBuilder path) {
        if (index == digits.length()) {
            ans.add(path.toString());
            return;
        }
        String letters = mapping[digits.charAt(index) - '0'];
        for (char letter : letters.toCharArray()) {
            path.append(letter);
            backtrack(ans, mapping, digits, index + 1, path);
            path.deleteCharAt(path.length() - 1);
        }
    }

    public static List<String> sol(String digits) {
        List<String> ans = new ArrayList<>();
        if (digits.isEmpty()) {
            return ans;
        }
        String[] mapping = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        StringBuilder path = new StringBuilder();
        backtrack(ans, mapping, digits, 0, path);
        return ans;
    }

    public static void main(String[] args) {
        List<String> result = sol("23");
        for (String s : result) {
            System.out.println(s);
        }
    }
}
