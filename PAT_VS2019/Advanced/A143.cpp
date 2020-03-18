//#include<iostream>
//#include <vector>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	int r = -1, l = -1, d, fa = -1;
//}bst[10000];
//int main()
//{
//	int n, m, t1, t2, root; cin >> m >> n >> t1;
//	bst[0].d = t1;
//	_for(i, 1, n) {
//		cin >> t2;
//		bst[i].d = t2;
//		root = 0;
//		while (true) {
//			if (t2 >= bst[root].d) {
//				if (bst[root].r != -1) root = bst[root].r; // Bug1: root 写成了t2
//				else {
//					bst[root].r = i;
//					bst[i].fa = root;
//					break;
//				}
//			}
//			else {
//				if (bst[root].l != -1) root = bst[root].l;
//				else {
//					bst[root].l = i; // Bug2: i写成了t2
//					bst[i].fa = root;
//					break;
//				}
//			}
//		}
//	}
//	while (m--) {
//		cin >> t1 >> t2;
//		int l1 = -1, l2 = -1, t3, i, copy1 = t1, copy2 = t2;
//		bool find1 = 0, find2 = 0;
//		i = 0;
//		while (i >= 0 && i < n)
//			if (bst[i].d > t1) i = bst[i].l;
//			else if (bst[i].d < t1) i = bst[i].r;
//			else {
//				t1 = i; find1 = 1; break;
//			}
//		i = 0;
//		while (i >= 0 && i < n)
//			if (bst[i].d > t2) i = bst[i].l;
//			else if (bst[i].d < t2) i = bst[i].r;
//			else {
//				t2 = i; find2 = 1; break;
//			}
//		if (find1 == 0 && find2 == 0) {
//			cout << "ERROR: " << t1 << " and " << t2 << " are not found.\n";
//			continue;
//		}
//		else if (find1 == 0) {
//			cout << "ERROR: " << t1 << " is not found.\n";
//			continue;
//		}
//		else if (find2 == 0) {
//			cout << "ERROR: " << t2 << " is not found.\n";
//			continue;
//		}
//		// Bug5: 下面的代码没考虑相聚中间有几个节点隔开并不相邻的情况
//		/*else if (bst[t1].fa == t2) {
//			cout << copy2 << " is an ancestor of " << copy1 << "." << endl;
//			continue;
//		}
//		else if (bst[t2].fa == t1) {
//			cout << copy1 << " is an ancestor of " << copy2 << "." << endl;
//			continue;
//		}*/
//		t3 = t1;   //  Bug3: 不应该是copy1
//		while (t3 != -1) {
//			t3 = bst[t3].fa;
//			l1++;
//		}
//		t3 = t2;
//		while (t3 != -1) {
//			t3 = bst[t3].fa;
//			l2++;
//		}
//		if (l1 > l2) {
//			t3 = l1 - l2;
//			while (t3--) t1 = bst[t1].fa; // Bug4: 第二个t1写成了root
//			if (t1 == t2) {
//				cout << copy2 << " is an ancestor of " << copy1 << "." << endl;
//				continue;
//			}
//		}
//		else {
//			t3 = l2 - l1;
//			while (t3--) t2 = bst[t2].fa;
//			if (t1 == t2) {
//				cout << copy1 << " is an ancestor of " << copy2 << "." << endl;
//				continue;
//			}
//		}
//		if (l1 > l2) l1 = l2;
//		while (t1 != t2&&l1>0) {
//			t1 = bst[t1].fa;// Bug5: 第二个t1写成了root, 同下
//			t2 = bst[t2].fa; 
//			l1--;
//		}
//		cout << "LCA of " << copy1 << " and " << copy2 << " is " << bst[t1].d << "." << endl;
//	}
//	return 0;
//}