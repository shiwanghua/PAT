//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int T, m, i, n, k, t1, t2, r, e[50][50], exist[50];
//struct user {
//	int id, r;
//};
//vector<user> ans;
//void DFS(int j, int point, int rv)// 用户i与用户j的度数是point,推荐值是rv
//{
//	if(point == n&&exist[j]==0) {
//		ans.push_back({ j,rv });
//		exist[j] = 1;  //  路径长度最小
//		return;
//	}
//	if (point > n) return;
//	for (int q = 0; q < m; q++) {
//		if (e[i][q] == 0 && e[j][q] > 0&&q!=i&&q!=j) {
//			DFS(q, point + 1, rv + e[j][q]);
//		}
//	}
//	return;
//}
//bool cmp(user u1, user u2) {
//	if (u1.r != u2.r) return u1.r > u2.r;
//	else return u1.id < u2.id;
//}
//// 好友推荐
//int main()
//{
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d%d%d\n%d", &m, &i, &n,&k);
//		memset(exist, 0, sizeof(exist));
//		memset(e, 0, sizeof(e));
//		ans.clear();
//		_for(0, k) {
//			scanf("%d%d%d", &t1, &t2, &r);
//			e[t1][t2] = e[t2][t1] = r;
//		}
//		for (int w = 0; w < m; w++)
//			if (e[i][w] > 0)
//				DFS(w, 1, e[i][w]);
//		sort(ans.begin(), ans.end(),cmp);
//		if (ans.size() == 0) {
//			cout << -1 << endl;
//			return 0;
//		}
//		cout << ans[0].id;
//		for (int w = 1; w < ans.size(); w++)
//			cout << " " << ans[w].id;
//		cout << endl;
//	}
//
//
//	return 0;
//}