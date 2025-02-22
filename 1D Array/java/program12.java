import java.util.HashMap;
import java.util.Map;

public class program12 {
    public static void twoSum(int[] nums, int target) {
        Map<Integer, Integer> hashTable = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];

            if (hashTable.containsKey(complement)) {
                System.out.println("[" + hashTable.get(complement) + ", " + i + "]");
                return;
            }

            hashTable.put(nums[i], i);
        }

        System.out.println("Not found");
    }

    public static void main(String[] args) {
        int[] nums = {2, 6, 18, 19};
        int target = 8;

        System.out.println("Elements that sum to " + target + ":");
        twoSum(nums, target);
    }
}