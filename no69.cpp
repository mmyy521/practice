#include<iostream>
#include<string>
#include<vector>
using namespace std;
//给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
//由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
class Solution {
public:
    int mySqrt(int x) {
		//使用二分查找法
		if (x == 0) return 0;
		else if (x==1)
		{
			return 1;
		}
		int left = 1, right = x;
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (mid > x / mid) //防止溢出
			{
				right = mid;
			}
			else
			{
				left = mid + 1;
			}
		}
		return left - 1; //返回左边界-1
    }
};

//int main()
//{
//    Solution so;
//    int x=8;
//	int s= so.mySqrt(x);
//	cout << s;
//    return 0;
//}