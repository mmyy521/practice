#include<iostream>
#include<string>
#include<vector>
using namespace std;
//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int k = 0;
		for (int i = 0;i < nums.size(); i++) {
			if (nums[i] != val) {
				nums[k] = nums[i];
				k++;
			}
		}
		return k;
    }
};
//int main()
//{
//	//����һ��solution����
//
//	return 0;
//}