
/*
��дһ�������������ַ��������е������ǰ׺��
��������ڹ���ǰ׺�����ؿ��ַ��� ""��

ʾ�� 1��

���룺strs = ["flower","flow","flight"]
�����"fl"
ʾ�� 2��

���룺strs = ["dog","racecar","car"]
�����""
���ͣ����벻���ڹ���ǰ׺��
 
��ʾ��
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] ����ǿգ������СдӢ����ĸ���
�Ե�һ���ַ���Ϊ��׼������ÿ���ַ�����ͬһλ�ã������ͬ�ͷ��ء�
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
                if (j < strs[i].length()) //�����ǰ
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