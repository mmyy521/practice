#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
	ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode* current = head;
		while (current != NULL && current->next != NULL)
		{
			if (current->val == current->next->val)
			{
				ListNode* same = current->next;
				current->next = current->next->next;
				delete(same);
			}
			else
			current = current->next;
		}
		return head;
	}
};
void printList1(ListNode* head) {
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
//	Solution so;
//	ListNode* head1 = new ListNode(1, (new ListNode(1, new ListNode(1))));
//	ListNode* head2 = so.deleteDuplicates(head1);
//	printList1(head2);
//	return 0;
//}
