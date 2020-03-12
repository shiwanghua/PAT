//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//const int inf = 99999999;
//int dis[1011], n, m, k, vis[1011], goodId=-1,  DS, e[1011][1011], t, t1, t2;
//double minAvgAns = inf, maxMinDisAns = 0;
//string s1, s2;
//
//int getID(string s) {
//	if (s[0] != 'G') return stoi(s);
//	return stoi(s.substr(1, s.length() - 1))+n;
//}
//void djs(int i) {
//	fill(vis, vis + 1011, 0);
//	fill(dis, dis + 1011, inf);
//	dis[i] = 0;
//	for (int j = 1; j <= m + n; j++) {
//		int minD = inf, minI = -1;
//		for(int q=1;q<=n+m;q++)
//			if (vis[q] == 0 && dis[q] < minD)
//			{
//				minD = dis[q];
//				minI = q;
//			}
//		if (minI == -1) return;
//		vis[minI] = 1;
//		for (int q = 1; q <= m + n; q++) {
//			if (vis[q] == 0 && e[minI][q] < inf)
//				if (dis[q] > dis[minI] + e[minI][q])
//					dis[q] = dis[minI] + e[minI][q];
//		}
//	}
//}
//int main()
//{
//	scanf("%d%d%d%d", &n, &m, &k, &DS);
//	fill(e[0], e[0] + 1011 * 1011, inf);
//	_for(0, k) {
//		cin >> s1 >> s2 >> t;
//		t1 = getID(s1); t2 = getID(s2);
//		e[t1][t2] = e[t2][t1] = t;
//	}
//	
//	for (int i = n + 1; i <= n + m; i++) {
//		djs(i);
//		double avgDis = 0, maxMin = inf;
//		for (int j = 1; j <= n; j++) {
//			if (dis[j] > DS) { maxMin = inf; break; }
//			if (maxMin > dis[j])maxMin = dis[j];
//			avgDis += 1.0*dis[j] / n;   //  ГЫвд1.0
//		}
//		if (maxMin == inf) continue;
//		else if (maxMin > maxMinDisAns) {
//			maxMinDisAns = maxMin;
//			minAvgAns = avgDis;
//			goodId = i;
//		}
//		else if (maxMin == maxMinDisAns && avgDis < minAvgAns) {
//			minAvgAns = avgDis;
//			goodId = i;
//		}
//	}
//	if (goodId == -1) cout << "No Solution";
//	else cout << "G" << goodId-n << endl <<fixed<<setprecision(1)<< maxMinDisAns << " " << minAvgAns;
//
//	return 0;
//}