/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(nums.begin(),nums.end(),target);
        if(it!= nums.end()){
            return distance(nums.begin(),it);
        }
        else{
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            it = find(nums.begin(),nums.end(),target);
            return distance(nums.begin(),it);
        }
    }
};
// @lc code=end

