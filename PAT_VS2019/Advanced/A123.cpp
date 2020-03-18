//#include<iostream>
//#include<queue>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	int d, h=0; // 左右子树高度
//	node* l=NULL, * r=NULL;
//}*root;
//void createNode(node*& r, int d) {
//	r = new node;
//	r->d = d;
//	r -> h = 1;// Bug2： 不写这一句，有一个节点就和没有节点的高度一样
//}
//int getH(node*& r) {
//	if (r == NULL) return 0;
//	return r->h;
//}
//int getB(node*& r) {
//	return getH(r->l) - getH(r->r);  // Bug1: 两个H写成了B
//}
//void update(node* r) {
//	r->h = 1 + max(getH(r->l), getH(r->r));
//}
//void L(node*& r) //  左左
//{
//	node* q = r->l; 
//	r->l = q->r;
//	q->r = r;
//	update(r);
//	update(q);
//	r = q;
//}
//void R(node*& r) {
//	node* q = r->r;
//	r->r = q->l;
//	q->l = r;
//	update(r);
//	update(q);
//	r = q;
//}
//void insert(node*& r, int d) {
//	if (r == NULL) {
//		createNode(r, d);
//		return;
//	}
//	if (r->d > d) {
//		insert(r->l, d);
//		update(r);
//		if (getB(r) == 2) {
//			if (getB(r->l) == -1) R(r->l);
//			L(r);  // Bug3: 不是传r的左指针
//		}
//	}
//	else if (r->d < d) {
//		insert(r->r, d);
//		update(r);
//		if (getB(r) == -2) {
//			if (getB(r->r) == 1) L(r->r);
//			R(r); // Bug3: 不是传r的右指针
//		}
//	}
//}
//int main()
//{
//	int n,t; cin >> n;
//	_for(i, 0, n) {
//		cin >> t;
//		insert(root, t);
//	}
//	queue<node*> q; q.push(root);
//	bool is = 0;// 是否到达第一个没有双孩子的节点
//	bool isCBT = 1;
//	int cnt = 0;
//	while (!q.empty()) {
//		node* a = q.front();
//		cout << a->d; cnt++;
//		if (cnt < n) cout << " ";
//		q.pop();
//		/*if (is == 1 && (a->l != NULL || a->r != NULL)) isCBT = 0;*/ // Bug4: 不能判断最后一个分支节点只有右边孩子的情况，需在下面第一个if后加一个判断，那么这句的a->r!=NULL 可以舍去
//		if (a->l != NULL) {
//			q.push(a->l);
//			if (is) isCBT = 0;
//		}
//		else is = 1;
//		//if (is == 1 && a->r != NULL) isCBT = 0;
//		if (a->r != NULL) {
//			q.push(a->r);
//			if (is) isCBT = 0;
//		}
//		else is = 1;
//	}
//	if (isCBT)cout << "\nYES";
//	else cout << "\nNO";
//	return 0;
//}