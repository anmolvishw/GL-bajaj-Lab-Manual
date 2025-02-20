
import java.util.HashMap;
import java.util.Map;

public class longestSubstring {
    public static int sol(String s) {
        int n = s.length();
        int ans = 0;
        Map<Character, Integer> index = new HashMap<>();
        for (int j = 0, i = 0; j < n; j++) {
            if (index.containsKey(s.charAt(j))) {
                i = Math.max(index.get(s.charAt(j)), i);
            }
            ans = Math.max(ans, j - i + 1);
            index.put(s.charAt(j), j + 1);
        }
        return ans;
    }

    public static void main(String[] args) {
        System.out.println(sol("abcabcbb"));
    }
}
