//#include<iostream>
//#include <vector>
//#include<algorithm>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int n;
//struct node {
//	int w, h;
//	node* lc, *rc;
//}*root;
//void createNode(node*& r, int w) {
//	r = new node;
//	r->w = w;
//	r->lc = r->rc = NULL;
//	r->h = 1;
//}
//int getH(node* r) {
//	if (r == NULL) return 0;
//	return r->h;
//}
//void updateHeight(node* r) {
//	r->h = 1 + max(getH(r->lc), getH(r->rc));  //  Bug3:  r->h 写成了r->w
//}
//int getB(node* r) {
//	return getH(r->lc) - getH(r->rc);
//}
//void L(node*& root2) {  //   右右  加引用是为了改变root
//	node* temp = root2->rc;
//	root2->rc = temp->lc;
//	temp->lc = root2;
//	updateHeight(root2);
//	updateHeight(temp);
//	root2 = temp;    // 这句很重要
//}
//void R(node*& root2) {   //  左左
//	node* temp = root2->lc;
//	root2->lc = temp->rc;
//	temp->rc = root2;
//	updateHeight(root2);
//	updateHeight(temp);
//	root2 = temp;    // 这句很重要
//}
//void insert(node*& r, int w) {     //   Bug1: 本来这个函数里的r都是root，重名了，还有上面两个函数
//	if (r == NULL) {    //  到达空节点 // Bug2: 少写了个等于！
//		createNode(r, w);
//		return;
//	}
//	if (w < r->w) {
//		insert(r->lc, w);
//		updateHeight(r);
//		if (getB(r) == 2) {
//			if (getB(r->lc) == 1) R(r);
//			else if (getB(r->lc) == -1) {
//				L(r->lc);
//				R(r);
//			}
//		}
//	}
//	else {
//		insert(r->rc, w);
//		updateHeight(r);
//		if (getB(r) == -2) {
//			if (getB(r->rc) == -1) L(r);
//			else if (getB(r->rc) == 1) {
//				R(r->rc);
//				L(r);
//			}
//		}
//	}
//}
//int main()
//{
//	scanf("%d", &n);
//	int t;
//	_for(0, n) {
//		cin >> t;
//		insert(root, t);
//	}
//	cout << root->w;
//	return 0;
//}