PROBLEM NUMBER            :-            416. Partition Equal Subset Sum

// Date : 07 Apr 2025


//   0/1 Knapsack DP

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) totalSum += num;

        if (totalSum % 2 != 0) return false;

        int targetSum = totalSum / 2;
        vector<bool> dp(targetSum + 1, false);
        dp[0] = true;
        for (int num : nums) {
            for (int currSum = targetSum; currSum >= num; --currSum) {
                dp[currSum] = dp[currSum] || dp[currSum - num];
                if (dp[targetSum]) return true;
            }
        }
        return dp[targetSum];
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 2ND METHOD


//   Bitset 

class Solution {
public:
    bool canPartition(vector<int>& nums) {

        int sum = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum % 2 != 0)
            return false;

        bitset<10001> bit(1);
        for (auto i : nums) {
            bit |= bit << i;
            if (bit[sum / 2])
                return true;
        }
        return bit[sum / 2];
    }
};
