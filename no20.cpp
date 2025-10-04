#include<iostream>
#include<string>
#include<vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        //遍历字符串，如果下一个不是当前的括号的另一半就查看对称的地方？递归判断？可能不是对称的地方，先判断左边的个数，左边的flag++,然后对应着右边的flag++,直到左右flag相同就重置
        string left = "{[(";
        string right = "}])";
        int left_flag = 0,right_flag=0;
        //是整数数组占空间大还是char字符占空间大？
        int start = 0, end = 0;
        if (s.empty() || s.length() % 2 != 0)
            return false;
       //把字符串放到栈里
        stack<char> myStack;
        for (int i = 0;i < s.length();i++)
        {
           //左括号就放到栈里
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                myStack.push(s[i]);
            }//右括号就判断栈顶是否匹配，匹配就弹出，不匹配就返回f
            else
            {
                if (myStack.empty())
                    return false;
                if ((s[i] == ')' && myStack.top() == '(') ||
                    (s[i] == ']' && myStack.top() == '[') ||
                    (s[i] == '}' && myStack.top() == '{')
                    )
                {
                    myStack.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (myStack.empty())
            return true;
        else
            return false;
       
    }
   
};


//int main()
//{
//    string s = "([}}])";
//    Solution so;
//    bool same = so.isValid(s);
//    cout << same;
//    return 0;
//}