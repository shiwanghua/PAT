//#include<iostream>
//#include<cstring>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//vector<int> e[1001];
//bool vis[1001];
//int q;
//void DFS(int j) {
//	if (j == q) return;
//	vis[j] = 1;
//	for (int i = 0; i < e[j].size(); i++)
//		if(vis[e[j][i]]==0)
//		DFS(e[j][i]);
//}
//int main()
//{
//	int n, m, k, t1, t2;
//	scanf("%d%d%d", &n, &m, &k);
//	_for(0, m) {
//		scanf("%d%d", &t1, &t2);
//		e[t1].push_back(t2);
//		e[t2].push_back(t1);
//	}
//	_for(0, k) {
//		scanf("%d", &q);
//		memset(vis, false, sizeof(vis));
//		int b = 0;
//		for (int j = 1; j <= n; j++) {
//			if (j != q && vis[j] == false)
//			{
//				DFS(j);
//				b++;
//			}
//		}
//		cout << b-1 << endl;
//	}
//
//	return 0;
//}