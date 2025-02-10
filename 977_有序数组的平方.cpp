//
// Created by 10480 on 2025/2/11.
//
#include <iostream>
#include <vector>
class Solution {
public:
        std::vector<int> sortedSquares(std::vector<int>& nums) {
        int right = nums.size()-1;
        int left = 0;
        int index = nums.size()-1;
        std::vector<int> ans(index+1);
        while(left<=right){
            if(nums[right]*nums[right]>nums[left]*nums[left]){
                ans[index] = nums[right]*nums[right];
                right--;
                index--;
            }
            else{
                ans[index] = nums[left]*nums[left];
                left++;
                index--;
            }
        }
        return ans;
    }
};
int main() {
    Solution solution;
    
    // 测试用例1: 包含正负数
    std::vector<int> nums1 = {-4, -1, 0, 3, 10};
    std::vector<int> result1 = solution.sortedSquares(nums1);
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 测试用例2: 全是正数
    std::vector<int> nums2 = {1, 2, 3, 4, 5};
    std::vector<int> result2 = solution.sortedSquares(nums2);
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 测试用例3: 全是负数
    std::vector<int> nums3 = {-5, -4, -3, -2, -1};
    std::vector<int> result3 = solution.sortedSquares(nums3);
    for (int num : result3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 测试用例4: 只有一个元素
    std::vector<int> nums4 = {2};
    std::vector<int> result4 = solution.sortedSquares(nums4);
    for (int num : result4) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}