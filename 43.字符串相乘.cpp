/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */

// @lc code=start
class Solution {
public:
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size(), m = num2.size();
        vector<int> res(n + m, 0);

        // 模拟大数乘法
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j, p2 = i + j + 1;

                int sum = mul + res[p2];
                res[p2] = sum % 10;
                res[p1] += sum / 10;
            }
        }

        // 将结果数组转换为字符串
        string result;
        for (int num : res) {
            if (!(result.empty() && num == 0)) { // 跳过前导零
                result.push_back(num + '0'); // 使用字符拼接而非 to_string
            }
        }

        return result.empty() ? "0" : result;
    }
};
// @lc code=end

