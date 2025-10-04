
/*
编写一个函数来查找字符串数组中的最长公共前缀。
如果不存在公共前缀，返回空字符串 ""。

示例 1：

输入：strs = ["flower","flow","flight"]
输出："fl"
示例 2：

输入：strs = ["dog","racecar","car"]
输出：""
解释：输入不存在公共前缀。
 
提示：
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] 如果非空，则仅由小写英文字母组成
以第一个字符串为标准，遍历每个字符串的同一位置，如果不同就返回。
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string same = "";
        int flag = 0;
        for (int j = 0;j < strs[0].length();j++)
        {
            flag = 0;
            for (int i = 1;i < strs.size();i++)
            {
                if (j < strs[i].length()) //如果当前
                {
                    if (strs[0][j] != strs[i][j])
                    {
                        flag = 1;
                        break;
                    }     
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                same += strs[0][j];
            }
            else
                break;
        }
        return same;
    }
};

//int main()
//{
//    vector<string> strs{ "ab","a" };
//    Solution so;
//    string same = so.longestCommonPrefix(strs);
//    cout << same;
//    return 0;
//}