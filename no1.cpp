// ����֮��
/*����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸣������㲻��ʹ��������ͬ��Ԫ�ء�

����԰�����˳�򷵻ش𰸡�

ʾ�� 1��

���룺nums = [2, 7, 11, 15], target = 9
�����[0, 1]
���ͣ���Ϊ nums[0] + nums[1] == 9 ������[0, 1] ��
ʾ�� 2��

���룺nums = [3, 2, 4], target = 6
�����[1, 2]
ʾ�� 3��

���룺nums = [3, 3], target = 6
�����[0, 1]
�������飬ȫ��������һ��������ȵľͷ��أ�ʱ�临�Ӷȣ�nlogn?

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