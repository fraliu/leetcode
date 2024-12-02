/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;

        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it!=val){
                ans.push_back(*it);
            }
            
        }
        int k_ans = ans.size();
        nums = ans;
        return k_ans;
    }
};
// @lc code=end

