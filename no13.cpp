/*
罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，
所表示的数等于大数 5 减小数 1 得到的数值 4 。
同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个罗马数字，将其转换成整数。
示例 1:

输入: s = "III"
输出: 3
示例 2:

输入: s = "IV"
输出: 4
示例 3:

输入: s = "IX"
输出: 9
示例 4:

输入: s = "LVIII"
输出: 58
解释: L = 50, V= 5, III = 3.
示例 5:

输入: s = "MCMXCIV"
输出: 1994
解释: M = 1000, CM = 900, XC = 90, IV = 4.

在于把情况列举之后进行匹配
定义顺序，定义特殊情况
遍历字符串，匹配就相加，顺序是小在后，大在前，特殊情况的：
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
                            //cout << "加了" << nums[j] << endl;
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
                            //cout << "加了" << nums[j] << endl;
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
                            //cout << "加了" << nums[j] << endl;
                            sum += nums[j];
                        }
                    }  
                    else
                    {
                        //cout << "加了" << nums[j] << endl;
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