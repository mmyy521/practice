#include<iostream>
#include<string>
#include<vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        //�����ַ����������һ�����ǵ�ǰ�����ŵ���һ��Ͳ鿴�ԳƵĵط����ݹ��жϣ����ܲ��ǶԳƵĵط������ж���ߵĸ�������ߵ�flag++,Ȼ���Ӧ���ұߵ�flag++,ֱ������flag��ͬ������
        string left = "{[(";
        string right = "}])";
        int left_flag = 0,right_flag=0;
        //����������ռ�ռ����char�ַ�ռ�ռ��
        int start = 0, end = 0;
        if (s.empty() || s.length() % 2 != 0)
            return false;
       //���ַ����ŵ�ջ��
        stack<char> myStack;
        for (int i = 0;i < s.length();i++)
        {
           //�����žͷŵ�ջ��
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                myStack.push(s[i]);
            }//�����ž��ж�ջ���Ƿ�ƥ�䣬ƥ��͵�������ƥ��ͷ���f
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