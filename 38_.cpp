#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string prev = countAndSay(n-1); // 使用递归来构建序列
        return cal_rle(prev);
    }

private:
    string cal_rle(const string& str) {
        string ans;
        for(int i = 0; i < str.length(); ) {
            int count = 1;
            while(i + 1 < str.length() && str[i] == str[i+1]) {
                ++i;
                ++count;
            }
            ans += to_string(count) + str[i];
            ++i;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string result = solution.countAndSay(5); // 测试第5项
    cout << result << endl;
    return 0;
}