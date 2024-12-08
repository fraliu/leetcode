/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int left_index = 0;
        int right_index = 0;
        int i =1;
        while(s[i]){
            if(s[i-1] == ' '&& s[i] != ' '){
                left_index = i;
            }
            if(s[i+1] == ' '&& s[i] != ' '){
                right_index = i;
            }
            if(!s[i+1]&& s[i] != ' '){
                right_index = i;
            }
           i++;
        }
        return right_index-left_index+1;
    }
};
// @lc code=end

