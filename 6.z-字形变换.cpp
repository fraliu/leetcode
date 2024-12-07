/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        vector<vector<char>> char_vec(numRows,vector<char>(s.size()));
        int index_row=0,index_col=0,sum=0;
        while(1){
            int i,j=0;
            for(;i<numRows;i++){
                char_vec[index_col][i] = s[sum];
                if(sum<s.size()){
                    sum++;
                }
                else{break;}
            }
            index_col++;
            for(;j<numRows-2;j++){
                char_vec[++index_col][numRows-2-j] = s[sum];
                if(sum<s.size()){
                    sum++;
                }
                else{break;}
            }
        }
        string ans;
        int row=0;
        for(auto it1=char_vec.begin();it1!=char_vec.end();it1++){
            for(auto it2=char_vec[row].begin();it2!=char_vec[row].end();it2++){
                if(*it2 != '\0'){
                    ans = ans + *it2;
                }
            }
            row++;
        }
        return ans;
    }
};
// @lc code=end

