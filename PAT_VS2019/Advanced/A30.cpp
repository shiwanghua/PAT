//#include<iostream>
//#include<cstring>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//const int inf = 99999999;
//int n, m, s, d, e[500][500], v[500], c[500][500], c1, c2, D, C, minDis = inf, minCos = inf;
//vector<int> path, ans;
//void dfs(int i, int dis, int cos) {
//	v[i] = 1;
//	path.push_back(i);
//	if (i == d) {
//		if (dis < minDis || (dis == minDis && minCos > cos)) {
//			minDis = dis;
//			minCos = cos;
//			ans = path;
//		}
//		v[i] = 0;
//		path.pop_back();
//		return;
//	}
//	for (int j = 0; j < n; j++)
//		if (v[j] == 0 && e[i][j] < inf) {
//			int nextDis = dis + e[i][j];
//			int nextCos = cos + c[i][j];
//			if (nextDis > minDis) continue;
//			dfs(j, nextDis, nextCos);
//		}
//	v[i] = 0;
//	path.pop_back();
//}
//int main()
//{
//	scanf("%d%d%d%d", &n, &m, &s, &d);
//	fill(e[0], e[0] + 500 * 500, inf);
//	fill(c[0], c[0] + 500 * 500, inf);
//	memset(v, 0, sizeof(v));
//	_for(0, m) {
//		scanf("%d%d%d%d", &c1, &c2, &D, &C);
//		e[c1][c2] = e[c2][c1] = D;
//		c[c1][c2] = c[c2][c1] = C;
//	}
//	dfs(s, 0, 0);
//	_for(0, ans.size())
//		cout << ans[i] << " ";
//	cout << minDis << " " << minCos;
//	return 0;
//}