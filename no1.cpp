// 两数之和
/*给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。

你可以按任意顺序返回答案。

示例 1：

输入：nums = [2, 7, 11, 15], target = 9
输出：[0, 1]
解释：因为 nums[0] + nums[1] == 9 ，返回[0, 1] 。
示例 2：

输入：nums = [3, 2, 4], target = 6
输出：[1, 2]
示例 3：

输入：nums = [3, 3], target = 6
输出：[0, 1]
遍历数组，全部两个加一遍遇到相等的就返回，时间复杂度：nlogn?

*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int length = nums.size();
        for (int i = 0;i < length-1;i++)
        {
            for (int j = i + 1;j < length;j++)
            {
                int sum = nums[i] + nums[j];
                if (sum == target)
                {
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
            }
        }
        return index;
    }
};

//int main()
//{
//    Solution solution;
//    vector<int> nums{ 10, 20, 30 };
//    int target = 40;
//    vector<int> index = solution.twoSum(nums, target);
//    cout << index[0]<<" " << index[1];
//}