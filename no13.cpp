/*
�������ְ������������ַ�: I�� V�� X�� L��C��D �� M��
�ַ�          ��ֵ
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
���磬 �������� 2 д�� II ����Ϊ�������е� 1 ��12 д�� XII ����Ϊ X + II �� 27 д��  XXVII, ��Ϊ XX + V + II ��
ͨ������£�����������С�������ڴ�����ֵ��ұߡ���Ҳ�������������� 4 ��д�� IIII������ IV������ 1 ������ 5 ����ߣ�
����ʾ�������ڴ��� 5 ��С�� 1 �õ�����ֵ 4 ��
ͬ���أ����� 9 ��ʾΪ IX���������Ĺ���ֻ�������������������

I ���Է��� V (5) �� X (10) ����ߣ�����ʾ 4 �� 9��
X ���Է��� L (50) �� C (100) ����ߣ�����ʾ 40 �� 90��
C ���Է��� D (500) �� M (1000) ����ߣ�����ʾ 400 �� 900��
����һ���������֣�����ת����������
ʾ�� 1:

����: s = "III"
���: 3
ʾ�� 2:

����: s = "IV"
���: 4
ʾ�� 3:

����: s = "IX"
���: 9
ʾ�� 4:

����: s = "LVIII"
���: 58
����: L = 50, V= 5, III = 3.
ʾ�� 5:

����: s = "MCMXCIV"
���: 1994
����: M = 1000, CM = 900, XC = 90, IV = 4.

���ڰ�����о�֮�����ƥ��
����˳�򣬶����������
�����ַ�����ƥ�����ӣ�˳����С�ں󣬴���ǰ����������ģ�
IV,IX,XL,XC,CD,CM
4 9 40 90 400 900
    2   4   6   
M D C L X V I
1000 500 100 50 10 5 1
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        vector<string> str{ "M", "D", "C", "L", "X", "V", "I","IV", "IX", "XL", "XC", "CD", "CM" };
        vector<char> str1{ 'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        vector<int> nums{ 1000, 500, 100, 50, 10, 5, 1 };
        int sum = 0;
        for (int i = 0;i < s.length();i++)
        {
            for (int j = 0;j < str1.size();j++)
            {
                if (s[i] == str1[j])
                {
                    cout << s[i] << endl;
                    if (i != s.length()-1 && j == 2)
                    {
                        if (s[i + 1] == 'D')
                        {
                            sum += 400;
                            i++;
                        }
                        else if (s[i + 1] == 'M')
                        {
                            sum += 900;
                            i++;
                        }
                        else
                        {
                            //cout << "����" << nums[j] << endl;
                            sum += nums[j];
                        }
                    }
                    else if (i != s.length() - 1 && j == 4)
                    {
                        if (s[i + 1] == 'L')
                        {
                            sum += 40;
                            i++;
                        }
                        else if (s[i + 1] == 'C')
                        {
                            sum += 90;
                            i++;
                        }
                        else
                        {
                            //cout << "����" << nums[j] << endl;
                            sum += nums[j];
                        }
                    }
                    else if (i != s.length() - 1 && j == 6)
                    {
                        if (s[i + 1] == 'V')
                        {
                            sum += 4;
                            i++;
                        }
                        else if (s[i + 1] == 'X')
                        {
                            sum += 9;
                            i++;
                        }
                        else
                        {
                            //cout << "����" << nums[j] << endl;
                            sum += nums[j];
                        }
                    }  
                    else
                    {
                        //cout << "����" << nums[j] << endl;
                        sum += nums[j];
                    }
                }
               
            }
        }
        return sum;
    }
};

//int main() {
//    string s = "MCMXCIV";
//    Solution solution;
//    int sum =solution.romanToInt(s);
//    cout << sum;
//}