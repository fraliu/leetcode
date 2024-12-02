/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        set<int> temp_set;
        for(auto it = nums.begin();it != nums.end();it++){
            auto it_set = temp_set.find(*it);
            if(it_set != temp_set.end()){
            }
            else{
                ans.push_back(*it);
                temp_set.insert(*it);
            }
        }
            nums = ans;
            return ans.size();
    }
};
// @lc code=end

