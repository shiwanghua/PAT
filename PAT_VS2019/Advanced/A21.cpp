//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//vector<int> e[10001], ans;
//bool v[10001];
//int deepH=0;
//void DFS(int i) {
//	v[i] = 1;
//	for (int j = 0; j < e[i].size(); j++)
//		if (v[e[i][j]] == 0)
//			DFS(e[i][j]);
//}
//int dfs(int i) {
//	if (e[i].size() == 0)
//		return 0;
//	int h = 0;
//	v[i] = 1;
//	for (int j = 0; j < e[i].size(); j++) {
//		if (v[e[i][j]] == 0)
//		{
//			int ht = dfs(e[i][j]);
//			if (h < ht) h = ht;
//		}
//	}
//	v[i] = 0;
//	return h+1;
//}
//int main()
//{
//	int n,t1,t2,b=0; cin >> n;
//	_for(0, n-1) {
//		cin >> t1 >> t2;
//		e[t1].push_back(t2);
//		e[t2].push_back(t1);
//	}
//	memset(v, 0, sizeof(v));
//	for (int q = 1; q < 1 + n; q++)
//	{
//		if (v[q] == 0) {
//			b++;
//			DFS(q);  //  Bug2: q写成了1
//		}
//	}
//	if (b > 1) {
//		printf("Error: %d components", b);  // Bug: 多写了个&
//		return 0;
//	}
//	memset(v, 0, sizeof(v));
//	for (int i = 1; i < n + 1; i++) {
//		int ht = dfs(i);
//		if (deepH < ht) {
//			ans.clear();
//			ans.push_back(i);
//			deepH = ht;
//		}
//		else if (deepH == ht)
//			ans.push_back(i);
//	}
//	_for(0, ans.size())
//		cout << ans[i] << endl;
//
//	return 0;
//}