class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();

        // Summation of first N natural numbers
        int sum1 = (N * (N + 1)) / 2;

        // Summation of all elements in nums
        int sum2 = 0;
        for (int num : nums) {
            sum2 += num;
        }

        // Calculate the missing number
        int missingNum = sum1 - sum2;

        // Return the missing number
        return missingNum;
    }
};