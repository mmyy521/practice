//������������¥�ݡ���Ҫ n ������ܵ���¥����
//ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�


#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
	std::map<int, int> myMap; // ����һ���յ�map��������Ϊint��ֵ����Ϊstd::string
    int climbStairs(int n) {
		//ʹ�ö�̬�滮
		if (n == 0) return 1;
		else if(n<=2)
			return n;
		else
		{
			if (myMap.find(n) != myMap.end()) // ���������
			{
				return myMap[n]; // ֱ�ӷ��ض�Ӧ��ֵ
			}
			else
			{
				myMap[n] = climbStairs(n - 1) + climbStairs(n - 2);
				return myMap[n];
			}	
		}
    }
};

//int main()
//{
//	Solution so;
//	int n = 3;
//	int s = so.climbStairs(n);
//	cout << s;
//	return 0;
//}