//#include<iostream>
//#include <cmath>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	int l = -1, r = -1, d;
//}*e;
//int blackNum = 0;
//bool is;
//void dfs(int root, int c, int bn) { //  从root到c的路径上有bn个黑节点
//	if (c == -1) {
//		if (blackNum == -1) blackNum = bn;
//		else if (blackNum != bn) is = 0;
//		return;
//	}
//	if (e[c].d > 0) bn++; //  Bug3: 最好一开始就判断，否则后面有三处都要判断，第一个漏掉了
//	if (e[c].l == -1 && e[c].r == -1) {
//		if (blackNum == -1) blackNum = bn;
//		else if (blackNum != bn) is = 0;
//		return;
//	}
//	dfs(root, e[c].l, bn);
//	dfs(root, e[c].r, bn);
//	return;
//}
//int main()
//{
//	int n, k, t, root; cin >> k;
//	while (k--) {
//		is = 1;
//		cin >> n >> t;
//		if (t <= 0) is = 0;
//		e = new node[n]; // Bug2: e数组需要每次清空或者new，不能用上次的！
//		e[0].d = t;
//		_for(i, 1, n) { //  Bug: 前面已经取了根节点值了，这里从1开始
//			cin >> t;
//			e[i].d = t;
//			root = 0;
//			while (true) {
//				if (abs(e[root].d) < abs(t)) {
//					if (e[root].r >= 0)
//						root = e[root].r;
//					else {
//						e[root].r = i;
//						if (e[root].d < 0 && t < 0) is = 0;
//						break;
//					}
//				}
//				else if (abs(e[root].d) >= abs(t)) {
//					if (e[root].l >= 0)
//						root = e[root].l;
//					else {
//						e[root].l = i;
//						if (e[root].d < 0 && t < 0) is = 0;
//						break;
//					}
//				}
//				if (t == 0) {
//					is = 0; break;
//				}
//			}
//		}
//		// Bug4: 上面无法做到检测一个红节点如果不是叶子节点一定要有两个子节点    //  这是个假bug，红节点一定有两个黑色的子节点，包括空节点在内
//		//_for(i, 0, n) {
//		//	if (e[i].d < 0) {
//		//		if (e[i].l > 0 && e[i].r > 0) continue;
//		//		if (e[i].l == -1 && e[i].r == -1) continue;
//		//		else { is = 0; break; }
//		//	}
//		//}
//		_for(i, 0, n) {
//			if (is == 0) break;
//			blackNum = -1;
//			dfs(i, i, 0);
//		}
//		if (is) cout << "Yes\n";
//		else cout << "No\n";
//		delete e;
//	}
//	return 0;
//}