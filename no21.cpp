#include<iostream>
#include<string>
#include<vector>
using namespace std;
//��������������ϲ�Ϊһ���µ� ���� �������ء�
struct ListNode {
   int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* current1 = list1;
        //ListNode* current2 = list2;
        ListNode* newhead = new ListNode(0);
        ListNode* tail = newhead;
        ListNode* current1 = list1;
        ListNode* current2 = list2;
        while (current1 != nullptr && current2 != nullptr) {
            if (current1->val <= current2->val) {  // ȡ��С�Ľڵ㣨����ʱ����ȡlist1����֤�ȶ��ԣ�
                tail->next = current1;         // ��cur1����������β��
                current1 = current1->next;         // cur1����
            }
            else {
                tail->next = current2;         // ��cur2����������β��
                current2 = current2->next;         // cur2����
            }
            tail = tail->next;             // βָ����ƣ�ʼ��ָ��������β��
        }
        if (current1 != nullptr) {
            tail->next = current1;
        }
        else {
            tail->next = current2;
        }
        return newhead->next;
    }
};
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

//int main()
//{
//    ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(4)));
//    ListNode* head2 = new ListNode(1, new ListNode(4, new ListNode(5)));
//    Solution so;
//    ListNode* head = so.mergeTwoLists(head1, head2);
//    printList(head);
//}