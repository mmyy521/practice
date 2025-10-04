#include<iostream>
#include<string>
#include<vector>
using namespace std;
//给定一个表示 大整数 的整数数组 digits，其中 digits[i] 是整数的第 i 位数字。这些数字按从左到右，从最高位到最低位排列。这个大整数不包含任何前导 0。
//将大整数加 1，并返回结果的数字数组。

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
		//从最后一位开始加1
		for (int i = digits.size() - 1;i >= 0;i--)
		{
			if (digits[i] < 9)
			{
				digits[i]++;
				return digits;
			}
			else
			{
				digits[i] = 0;
			}
		}
		//如果所有位都是9，那么需要在前面加1
		digits.insert(digits.begin(), 1);
		return digits;
    }
};

//int main()
//{
//    Solution so;
//	vector<int> s = { 1,2,9 };
//	vector<int> res = so.plusOne(s);
//	for (int i = 0;i < res.size();i++)
//	{
//		cout << res[i] << " ";
//	}	
//    return 0;
//}