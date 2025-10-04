#include<iostream>
#include<string>
#include<vector>
using namespace std;

//给你两个二进制字符串，返回它们的和（用二进制表示）。
//
class Solution {
public:
	string addBinary(string a, string b) {
		//从后往前加
		string res = "";
		int carry = 0; //进位
		int i = a.size();
		int j = b.size();
		while (i > 0 || j > 0 || carry > 0)
		{
			int sum = carry;
			if (i > 0)
			{
				sum += a[i - 1] - '0';//字符转数字
				i--;
			}
			if (j > 0)
			{
				sum += b[j - 1] - '0';//字符转数字
				j--;
			}
			res = char(sum % 2 + '0') + res; //当前位
			carry = sum / 2; //进位
		}
		return res;
	}
};
//int main()
//{
//    Solution so;
//	string a = "1111", b = "100";
//	string s= so.addBinary(a,b);
//	cout << s;
//    return 0;
//}