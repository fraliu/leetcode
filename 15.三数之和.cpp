/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if (nums.size() < 3) return ans;

        // 排序数组
        sort(nums.begin(), nums.end());

        // 固定第一个数 nums[i]
        for (int i = 0; i < nums.size() - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // 跳过重复的 nums[i]

            int target = -nums[i];
            int left = i + 1, right = nums.size() - 1;

            // 双指针寻找符合条件的两个数
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // 跳过重复的 nums[left] 和 nums[right]
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;

                    ++left;
                    --right;
                } else if (sum < target) {
                    ++left; // 增加 sum
                } else {
                    --right; // 减少 sum
                }
            }
        }

        return ans;
    }
};
// @lc code=end

