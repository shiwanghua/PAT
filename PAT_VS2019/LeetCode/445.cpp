//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//    
//};
//
//ListNode* addTwoNumbers(ListNode * l1, ListNode * l2) {
//    if (l1->val == 0) return l2;
//    else if (l2->val == 0) return l1;
//    stack<int> i1, i2;
//    while (l1 != NULL) {
//        i1.push(l1->val);
//        l1 = l1->next;
//    }
//    while (l2 != NULL) {
//        i2.push(l2->val);
//        l2 = l2->next;
//    }
//    int i = 0, c = 0;
//    ListNode* head = nullptr;
//    ListNode* h = head;
//    while (i1.size() > 0 && i2.size() > 0) {
//        i = i1.top() + i2.top() + c;
//        i1.pop(); i2.pop();
//        c = i / 10;
//        i = i % 10;
//        h = new ListNode(i);
//        h->next = head;
//        head = h;
//    }
//    while (i1.size() > 0) {
//        i = i1.top() + c;
//        i1.pop();
//        c = i / 10;
//        i = i % 10;
//        h = new ListNode(i);
//        h->next = head;
//        head = h;
//    }
//    while (i2.size() > 0) {
//        i = i2.top() + c;
//        i2.pop();
//        c = i / 10;
//        i = i % 10;
//        h = new ListNode(i);
//        h->next = head;
//        head = h;
//    }
//    return head;
//}
//
//int main()
//{
//	int n;
//    ListNode* l1=new ListNode(3);
//    l1->next = new ListNode(5);
//
//    ListNode* l2 = new ListNode(1);
//    l2->next = new ListNode(6);
//
//    ListNode*  q=addTwoNumbers(l1, l2);
//
//    while (q) {
//        cout << q->val << " ";
//        q = q->next;
//    }
//    delete l1->next;
//    delete l1;
//    delete l2->next;
//    delete l2;
//	return 0;
//}