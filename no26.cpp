#include<iostream>
#include<string>
#include<vector>
using namespace std;

// ���ݽṹ����ԭ״
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
                nums.erase(nums.begin() + i); //ɾ��Ԫ����Ҫ����begin
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