//#include<iostream>
//#include<queue>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	int d, h=0; // ���������߶�
//	node* l=NULL, * r=NULL;
//}*root;
//void createNode(node*& r, int d) {
//	r = new node;
//	r->d = d;
//	r -> h = 1;// Bug2�� ��д��һ�䣬��һ���ڵ�ͺ�û�нڵ�ĸ߶�һ��
//}
//int getH(node*& r) {
//	if (r == NULL) return 0;
//	return r->h;
//}
//int getB(node*& r) {
//	return getH(r->l) - getH(r->r);  // Bug1: ����Hд����B
//}
//void update(node* r) {
//	r->h = 1 + max(getH(r->l), getH(r->r));
//}
//void L(node*& r) //  ����
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
//			L(r);  // Bug3: ���Ǵ�r����ָ��
//		}
//	}
//	else if (r->d < d) {
//		insert(r->r, d);
//		update(r);
//		if (getB(r) == -2) {
//			if (getB(r->r) == 1) L(r->r);
//			R(r); // Bug3: ���Ǵ�r����ָ��
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
//	bool is = 0;// �Ƿ񵽴��һ��û��˫���ӵĽڵ�
//	bool isCBT = 1;
//	int cnt = 0;
//	while (!q.empty()) {
//		node* a = q.front();
//		cout << a->d; cnt++;
//		if (cnt < n) cout << " ";
//		q.pop();
//		/*if (is == 1 && (a->l != NULL || a->r != NULL)) isCBT = 0;*/ // Bug4: �����ж����һ����֧�ڵ�ֻ���ұߺ��ӵ���������������һ��if���һ���жϣ���ô����a->r!=NULL ������ȥ
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