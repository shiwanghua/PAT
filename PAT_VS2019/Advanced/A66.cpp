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
//	r->h = 1 + max(getH(r->lc), getH(r->rc));  //  Bug3:  r->h д����r->w
//}
//int getB(node* r) {
//	return getH(r->lc) - getH(r->rc);
//}
//void L(node*& root2) {  //   ����  ��������Ϊ�˸ı�root
//	node* temp = root2->rc;
//	root2->rc = temp->lc;
//	temp->lc = root2;
//	updateHeight(root2);
//	updateHeight(temp);
//	root2 = temp;    // ������Ҫ
//}
//void R(node*& root2) {   //  ����
//	node* temp = root2->lc;
//	root2->lc = temp->rc;
//	temp->rc = root2;
//	updateHeight(root2);
//	updateHeight(temp);
//	root2 = temp;    // ������Ҫ
//}
//void insert(node*& r, int w) {     //   Bug1: ��������������r����root�������ˣ�����������������
//	if (r == NULL) {    //  ����սڵ� // Bug2: ��д�˸����ڣ�
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