#include<iostream>
#include<string>
#include<vector>
using namespace std;

//给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
//单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。

class Solution {
public:
    int lengthOfLastWord(string s) {
        //找到 最后一个单词，
        int start = 0, end =0;
        for (int i = 0;i < s.size();i++)
        {
            if (s[i] == ' ' && i + 1 != s.size())
            {
                if (s[i + 1] != ' ')
                {
                    start = i+1;
                }
            }
			if (s[i] == ' ' && i > 0)
            {
                if (s[i - 1] != ' ')
                {
					end = i-1;
                }
            }
        }
		//
        if (start > end)
        {
            end = s.size()-1;
        }
		else if (start == 0 && end == 0 && s[1] != ' ')
		{
			end = s.size() - 1;
		}
        cout << start << " " << end << endl;
        return end - start + 1;
    }
};

//int main()
//{
//    Solution so;
//    string s = "d ";
//    cout<<so.lengthOfLastWord(s);
//    return 0;
//}