#include<iostream>
#include<string>
#include<vector>
using namespace std;
//�ҳ��ַ����е�һ��ƥ���Ӵ���λ�ã���������ڣ��򷵻� -1 ��
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0;i < haystack.size();i++)
        {
            if (haystack[i] == needle[0])
            {
                if (haystack.size() - i >= needle.size())
                {
                    int flag = 0;
                    int l = i+1;
                    for (int j = 1;j < needle.size();j++)
                    {
                        
                        if (haystack[l] != needle[j])
                        {
                            flag = 1;
                            break;
                        }
                        l++;
                    }
                    if (flag == 0)
                        return l-needle.size();
                }
                
            }
        }
        return -1;
    }
};

//int main()
//{
//    Solution so;
//    string haystack = "mississippi", needle = "issip";
//    cout<<so.strStr(haystack, needle);
//    return 0;
//}