#include<iostream>
#include<string>
#include<vector>
using namespace std;
//将两个升序链表合并为一个新的 升序 链表并返回。
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
            if (current1->val <= current2->val) {  // 取较小的节点（等于时优先取list1，保证稳定性）
                tail->next = current1;         // 把cur1接在新链表尾部
                current1 = current1->next;         // cur1后移
            }
            else {
                tail->next = current2;         // 把cur2接在新链表尾部
                current2 = current2->next;         // cur2后移
            }
            tail = tail->next;             // 尾指针后移，始终指向新链表尾部
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