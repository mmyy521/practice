#include<iostream>
#include<string>
#include<vector>
using namespace std;
//����һ����ʾ ������ ���������� digits������ digits[i] �������ĵ� i λ���֡���Щ���ְ������ң������λ�����λ���С�����������������κ�ǰ�� 0��
//���������� 1�������ؽ�����������顣

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
		//�����һλ��ʼ��1
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
		//�������λ����9����ô��Ҫ��ǰ���1
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