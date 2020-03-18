//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<map>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//int n, m, q, i1, J1, i2, j2;
//char** qi, start, End;
//bool is, e[1000000];
//void dfs(int i, int j, int preD, int edgeNum) { //  preD 0 向下，1向右，2向左，3向上
//	if (i == i2 && j == j2) {
//		qi[i][j] = '.';
//		qi[i1][J1] = '.';
//		is = 1; return;
//	}
//	if (is == 1||edgeNum==3) return; // 用了3条边，不能再往下走了
//	int pos = i * n + j;
//	e[pos] = 1;
//	if (j < m - 1 && (qi[i][j + 1] == '.'|| (i==i2&&j+1==j2)) && e[pos + 1] == 0)
//	{
//		if(preD!=1)
//		dfs(i, j + 1,1, edgeNum + 1);
//		else dfs(i, j + 1, 1, edgeNum);
//	}
//	if (i < n - 1 && (qi[i + 1][j] == '.'|| (i+1 == i2 && j == j2))&& e[pos + m] == 0)  // 下
//	{
//		if (preD != 0)
//			dfs(i + 1, j, 0, edgeNum + 1);
//		else dfs(i + 1, j, 0, edgeNum);
//	}
//	if (i > 0 && (qi[i - 1][j] == '.' || (i-1 == i2 && j == j2))&& e[pos - m] == 0)
//	{
//		if (preD != 3)
//		dfs(i - 1, j, 3,edgeNum + 1);
//		else dfs(i - 1, j, 3, edgeNum);
//	}
//	if (j > 0 && (qi[i][j - 1] == '.'|| (i == i2 && j - 1 == j2)) && e[pos - 1] == 0)
//	{
//		if (preD != 2)
//		dfs(i, j - 1,2, edgeNum + 1);
//		else dfs(i, j - 1, 2, edgeNum);
//	}
//	e[pos] = 0;
//	return;
//}
//int main()
//{
//	cin >> n >> m;
//	qi = new char* [n];
//	_for(i, 0, m) qi[i] = new char[m];
//	_for(i,0,n)
//		_for(j, 0, m) {
//		cin >> qi[i][j];
//	}
//	cin >> q;
//	while (q--) {
//		cin >> i1 >> J1 >> i2 >> j2;
//		i1--; J1--; i2--; j2--;
//		is = 0;
//		fill(e, e + m * n, 0);
//		start = qi[i1][J1];
//		End = qi[i2][j2];
//		if (qi[i2][j2] != start) {
//			cout << "NO\n";
//			continue;
//		}
//		dfs(i1, J1,-1, 0);
//		if (is) cout << "YES\n";
//		else cout << "NO\n";
//	}
//	return 0;
//}