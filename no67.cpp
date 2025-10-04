#include<iostream>
#include<string>
#include<vector>
using namespace std;

//���������������ַ������������ǵĺͣ��ö����Ʊ�ʾ����
//
class Solution {
public:
	string addBinary(string a, string b) {
		//�Ӻ���ǰ��
		string res = "";
		int carry = 0; //��λ
		int i = a.size();
		int j = b.size();
		while (i > 0 || j > 0 || carry > 0)
		{
			int sum = carry;
			if (i > 0)
			{
				sum += a[i - 1] - '0';//�ַ�ת����
				i--;
			}
			if (j > 0)
			{
				sum += b[j - 1] - '0';//�ַ�ת����
				j--;
			}
			res = char(sum % 2 + '0') + res; //��ǰλ
			carry = sum / 2; //��λ
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