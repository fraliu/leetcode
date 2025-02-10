/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {

        vector<string> ans;

    }
    /*left right middle*/
    string left_add(string parent,int n){
        return generate_child()+"{}";
    }
    string right_add(string parent,int n){
        return "{}"+generate_child();
    }
    string middle_add(string parent,int n){
        return "{"+generate_child()+"}";
    }
    string generate_child(string parent,int n){
        if(n==1){
            return "{}";
        }
        while(n!=1){
            retu
        }
    }

};
// @lc code=end

