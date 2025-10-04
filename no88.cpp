#include<iostream>
#include<string>
#include<vector>
using namespace std;

//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。

//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//最优题解：
/*
* class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1;
        int tail = m + n - 1;
        int cur;
        while (p1 >= 0 || p2 >= 0) {
            if (p1 == -1) {
                cur = nums2[p2--];
            } else if (p2 == -1) {
                cur = nums1[p1--];
            } else if (nums1[p1] > nums2[p2]) {
                cur = nums1[p1--];
            } else {
                cur = nums2[p2--];
            }
            nums1[tail--] = cur;
        }
    }
};

作者：力扣官方题解
链接：https://leetcode.cn/problems/merge-sorted-array/solutions/666608/he-bing-liang-ge-you-xu-shu-zu-by-leetco-rrb0/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		auto it = nums1.begin();
		int index1 = 0, index2=0;

		while(index1<m+n)
		{
			if (index2 >= n)
				break;
			if (nums1[index1] > nums2[index2])
			{
				it = nums1.begin() + index1;
				nums1.insert(it, nums2[index2]);
				index1++;
				index2++;
			}
			else
			{
				index1++;
			}
			//cout << "index1:" << index1<<endl;
			//cout << "index2:" << index2<<endl;

		}
		while (index2 < n)
		{
			it = nums1.begin() + m+index2;
			nums1.insert(it, nums2[index2]);
			index1++;
			index2++;
		}
		for(int i=0;i<n;i++)
			nums1.pop_back();
	}
};
//int main()
//{
//	Solution so;
//	vector<int> nums1 = { 1,2,3,0,0,0 };
//	int m = 3;
//	vector<int> nums2 = { 2,5,6 };
//	int n = 3;
//	so.merge(nums1, m, nums2, n);
//	for(int i=0;i<nums1.size();i++)
//	cout << nums1[i];
//	return 0;
//}
