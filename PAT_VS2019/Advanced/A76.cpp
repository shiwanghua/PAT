//#include<iostream>
//#include<cstring>
//#include <vector>
//#include <queue>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int n, l, k, num, mi, temp, q;
//vector<int> f[1001];   //  f[i] 存关注i的人的id
//bool v[1001];
////void dfs(int i, int lev) {
////	if (v[i] == 0)
////	{
////		num++;
////		v[i] = 1;
////	}
////	for (int j = 0; j < f[i].size(); j++)
////		if (lev < l)
////			dfs(f[i][j], lev + 1);
////}
//struct node {
//	int id,level;  // Bug:  顺序反了
//};
//int main()
//{
//	scanf("%d%d", &n, &l);
//	_for(1, 1 + n) {
//		scanf("%d", &mi);
//		for (int j = 0; j < mi; j++)
//		{
//			scanf("%d", &temp);
//			f[temp].push_back(i);
//		}
//	}
//	scanf("%d", &k);
//	_for(0, k) {
//		scanf("%d", &q);
//		num = 0;
//		memset(v, 0, sizeof(v));
//		v[q] = 1;
//		queue<node> que;
//		que.push({ q,0 });
//		while (!que.empty())
//		{
//			node a = que.front();
//			int id = a.id;
//			que.pop();
//			for(int j=0;j<f[id].size();j++)
//				if (v[f[id][j]] == 0&&a.level<l)
//				{
//					que.push({ f[id][j],a.level + 1 });
//					v[f[id][j]] = 1;
//					num++;
//				}
//		}
//		/*for (int j = 0; j < f[q].size(); j++)
//			dfs(f[q][j], 1);*/
//		cout << num << endl;
//	}
//	return 0;
//}