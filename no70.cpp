//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？


#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
	std::map<int, int> myMap; // 创建一个空的map，键类型为int，值类型为std::string
    int climbStairs(int n) {
		//使用动态规划
		if (n == 0) return 1;
		else if(n<=2)
			return n;
		else
		{
			if (myMap.find(n) != myMap.end()) // 如果键存在
			{
				return myMap[n]; // 直接返回对应的值
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