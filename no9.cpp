/*����һ������ x ����� x ��һ���������������� true �����򣬷��� false 
��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

���磬121 �ǻ��ģ��� 123 ���ǡ�

ʾ�� 1��

���룺x = 121
�����true
ʾ�� 2��

���룺x = -121
�����false
���ͣ��������Ҷ�, Ϊ - 121 �� ���������, Ϊ 121 - �����������һ����������
ʾ�� 3��

���룺x = 10
�����false
���ͣ����������, Ϊ 01 �����������һ����������
�Ȱ�����ת�����ַ������ٽ��ַ�����ͷ�Ա�
*/
#include<iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int n = str.length();
        // �����Գ�λ�õ��ַ�
        for (int i = 0; i < n / 2; i++) {
            if (str[i]!= str[n - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};
//int main()
//{
//    int x = 121;
//    Solution solution;
//    bool yes = solution.isPalindrome(x);
//    cout << yes;
//	return 0;
//}
