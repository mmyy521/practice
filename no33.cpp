#include<iostream>
#include<string>
#include<vector>
using namespace std;

//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��

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