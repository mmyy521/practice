#include<iostream>
#include<string>
#include<vector>
using namespace std;

//����һ���ַ��� s�������ɵ�����ɣ�����ǰ����һЩ�ո��ַ������������ַ����� ���һ�� ���ʵĳ��ȡ�
//���� ��ָ������ĸ��ɡ��������κοո��ַ���������ַ�����

class Solution {
public:
    int lengthOfLastWord(string s) {
        //�ҵ� ���һ�����ʣ�
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