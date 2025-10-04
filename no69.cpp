#include<iostream>
#include<string>
#include<vector>
using namespace std;
//����һ���Ǹ����� x �����㲢���� x �� ����ƽ���� ��
//���ڷ������������������ֻ���� �������� ��С�����ֽ��� ��ȥ ��
class Solution {
public:
    int mySqrt(int x) {
		//ʹ�ö��ֲ��ҷ�
		if (x == 0) return 0;
		else if (x==1)
		{
			return 1;
		}
		int left = 1, right = x;
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (mid > x / mid) //��ֹ���
			{
				right = mid;
			}
			else
			{
				left = mid + 1;
			}
		}
		return left - 1; //������߽�-1
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