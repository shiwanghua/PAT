//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//int n, m, e[501][501], de[501] = { 0 }, t1, t2, v[501] = { 0 }, c = 0;
//void dfs(int index) {   //  Bug: 没考虑是否为连通图
//	v[index] = 1;
//	c++;
//	_for(i, 1, n + 1) {
//		if (e[index][i] == 1 && v[i] == 0)
//			dfs(i);
//	}
//}
//int main()
//{
//	scanf("%d%d", &n, &m);
//	_for(i, 0, m) {
//		scanf("%d%d", &t1, &t2);
//		e[t1][t2] = e[t2][t1] = 1;
//		de[t1]++; de[t2]++;
//	}
//	_for(i, 1, n) cout << de[i] << " ";
//	cout << de[n] << endl;
//	bool ise = 1;
//	int oddNum = 0;
//	_for(i, 1, n + 1)if (de[i] % 2 == 1) {
//		ise = 0; oddNum += 1;
//	}
//	dfs(1);
//	if (ise && c == n) { //  全是偶数
//		cout << "Eulerian";
//		return 0;
//	}
//	if (oddNum == 2 && c == n) {
//		cout << "Semi-Eulerian";
//		return 0;
//	}
//	cout << "Non-Eulerian";
//	return 0;
//}