#include<iostream>
#include<string>
#include<vector>
using namespace std;

// 数据结构保持原状
// 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = 0;
        int i = 0;
        while (!nums.empty())
        {
            if (i == nums.size()-1)
                break;
            current = nums[i];
            if (current == nums[i + 1])
            {
                nums.erase(nums.begin() + i); //删除元素需要加上begin
                /*i++;*/
            }
            else
                i++;
        }
        return nums.size();

    }
};

//int main() {
//    vector<int> nums{2,3,4, 4};
//    Solution so;
//    int num = so.removeDuplicates(nums);
//    cout << num;
//    return 0;
//}