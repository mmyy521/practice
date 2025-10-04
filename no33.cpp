#include<iostream>
#include<string>
#include<vector>
using namespace std;

//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//请必须使用时间复杂度为 O(log n) 的算法。

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0;i < nums.size();i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
            else if (i == 0 && nums[i] > target)
            {
                return i;
            }
            else if (nums[i] < target && i == nums.size() - 1)
            {
                return nums.size();
            }
            else if (nums[i]<target && nums[i + 1]>target)
            {
                return i + 1;
            }
        }
        return nums.size();
    }
};

//int main()
//{
//    Solution so;
//    vector<int> nums = { 1,3,5,6 };
//    int target = 0;
//    cout<<so.searchInsert(nums, target);
//    return 0;
//}