#include<iostream>
#include<vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main(){
	struct ListNode a, b, c, x, y, z, m;	
	a.val = 1;
	b.val = 2;
	c.val = 3;
	a.next = &b;
	b.next = &c;
	c.next = nullptr;
	
	x.val = 4;
	y.val = 5;
	z.val = 6;
	x.next = &y;
	y.next = &z;
	z.next = nullptr;
	
//	struct ListNode* l1 = &a;
//	struct ListNode* l2 = &x;
	struct ListNode* temp = &m;
	

	for(int i = 1; i < 10; i++){
		temp->next = new ListNode(i);
		temp = temp->next;
	}
	
	struct ListNode *curr = &m;
	while(curr != nullptr){
		cout << curr->val << ' ';
		curr = curr -> next;
	}
}