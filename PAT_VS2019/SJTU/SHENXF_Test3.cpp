//#include<iostream>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int re, m, n, v[1000], sum = 0, lanI; // lanI是蓝宝石位置
//bool findm;
//void dfs(int i, int he, int ge) {  //  he 是当前所选ge个数字的和
//	if (he >= re || ge == m || findm || i > n) {   //  不加findm 只能通过80%！
//		if (he == re && ge == m) findm = 1;
//		return;
//	}
//	if (n - i + 1 + ge < m) return; // 剪枝
//	dfs(i + 1, he, ge); //  无i
//	if (i != lanI)
//		dfs(i + 1, he + v[i], ge + 1); // 有i
//	return;
//}
//int main()
//{
//	cin >> n >> m;
//	m = n - m;
//	_for(i, 0, n + 1) {
//		cin >> v[i];
//		sum += v[i];
//	}
//	// 可以通过80%
//   //_for(i, 0, n+1) {
//   //	int re = sum - v[i];
//   //	if (re % 3 == 0) {
//   //		cout << v[i];
//   //		return 0;
//   //	}
//   //}
//
//   //sort(v, v+n+1); // 改变了顺序
//
//   // 通过100%!!!
//	_for(i, 0, n + 1) {
//		lanI = i;
//		re = sum - v[i];
//		if (re % 3 == 0) {
//			re = re / 3; // 有m个宝石的价值和是re
//			findm = 0;
//			dfs(0, 0, 0);
//			if (findm) {
//				cout << v[lanI];
//				return 0;
//			}
//		}
//	}
//	cout << "NO";
//	return 0;
//}