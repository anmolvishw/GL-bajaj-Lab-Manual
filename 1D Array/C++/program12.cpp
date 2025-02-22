#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashTable;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (hashTable.find(complement) != hashTable.end()) {
            cout << "[" << hashTable[complement] << ", " << i << "]" << endl;
            return;
        }

        hashTable[nums[i]] = i;
    }

    cout << "Not found" << endl;
}

int main() {
    vector<int> nums = {2, 6, 18, 19};
    int target = 8;

    cout << "Elements that sum to " << target << ":" << endl;
    twoSum(nums, target);

    return 0;
}