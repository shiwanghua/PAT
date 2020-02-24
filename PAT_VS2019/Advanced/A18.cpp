//#include<iostream>
//#include<string>
//#include <cmath>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//const int inf = 199999999;
//int c_max, n, sp, m, ci[501], t[501][501], t1, t2, t3, v[501] = { 0 }, enough, minDis = inf, minSendBikesNum = inf, sendNum = 0, minBackNum = inf, backNum = 0;
//vector<int> path, ans;
//void dfs(int i, int minPathLen, int getBikes) {
//	path.push_back(i);
//	getBikes = getBikes + ci[i];
//	int copySend = sendNum;
//	if (ci[i] < 0&&getBikes+sendNum<0) sendNum =-getBikes;
//	v[i] = 1;
//	if (i == sp)
//	{
//		backNum = getBikes + sendNum;
//		bool update = 0;
//		if (sendNum < minSendBikesNum)update = 1;
//		else if (sendNum == minSendBikesNum && backNum < minBackNum)update = 1;
//
//		if (minPathLen < minDis || (minPathLen == minDis && update == 1)) {
//			ans = path;
//			minBackNum = backNum;
//			minSendBikesNum = sendNum;
//			minDis = minPathLen;
//		}
//		getBikes = getBikes - ci[i];
//		sendNum = copySend;
//		v[i] = 0;
//		path.pop_back();
//		return;
//	}
//	for (int j = 1; j < n + 1; j++) {
//		if (t[i][j] < inf && v[j] == 0) {
//			dfs(j, minPathLen + t[i][j], getBikes);
//		}
//	}
//	getBikes = getBikes - ci[i];
//	sendNum = copySend;
//	v[i] = 0;
//	path.pop_back();
//}
//int main()
//{
//	scanf("%d%d%d%d", &c_max, &n, &sp, &m);
//	enough = c_max / 2;
//	fill(t[0], t[0] + 501 * 501, inf);
//	_for(1, 1 + n) {
//		scanf("%d", &ci[i]);
//		ci[i] = ci[i] - enough;
//	}
//	_for(0, m) {
//		scanf("%d%d%d", &t1, &t2, &t3);
//		t[t1][t2] = t[t2][t1] = t3;
//	}
//	dfs(0, 0, 0);
//	cout << minSendBikesNum << " ";
//	_for(0, ans.size() - 1)
//		cout << ans[i] << "->";
//	cout << ans[ans.size() - 1] << " ";
//	cout << minBackNum;
//	return 0;
//}