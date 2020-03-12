//#include<iostream>
//#include<string>
//#include <map>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//const int inf = 999999999;
//int n, k, e[200][200], minCost=999999, numPathMinCost = 0, maxHappy=0, numMap = 0, cHappy[200] = { 0 }, t, t1, t2, vis[200] = { 0 };
//string start, s1, s2, endc = "ROM";
//map<string, int> m;
//map<int, string> mitos;
//vector<int> ans, tempPath;
//int trans(string s) {
//	if (m.find(s) != m.end())
//		return m[s];
//	m[s] = numMap;
//	mitos[numMap] = s;
//	return numMap++;
//}
//void dfs(int i, int cost, int numHappy) {
//	if (i == m[endc]) {
//		if (cost < minCost) {
//			numPathMinCost = 1;
//			ans = tempPath;
//			minCost = cost;
//			maxHappy = numHappy;
//		}
//		else if (cost == minCost) {
//			numPathMinCost++;
//			if (maxHappy < numHappy|| (maxHappy == numHappy && tempPath.size() < ans.size())) {
//				maxHappy = numHappy;
//				ans = tempPath;
//			}
//		}
//		return;
//	}
//
//	for (int j = 0; j < n; j++) 
//		if (vis[j] == 0 && e[i][j] < inf && cost < minCost)
//		{
//			vis[j] = 1;
//			tempPath.push_back(j);
//			dfs(j,cost+e[i][j],numHappy+cHappy[j]);
//			tempPath.pop_back();
//			vis[j] = 0;
//		}
//}
//int main()
//{
//	fill(e[0], e[0] + 200 * 200, inf);
//	scanf("%d%d", &n, &k);
//	cin >> start;
//	cHappy[trans(start)] = 0;
//	_for(0, n - 1) {
//		cin >> s1 >> t;
//		cHappy[trans(s1)] = t;
//	}
//	_for(0, k) {
//		cin >> s1 >> s2 >> t;
//		e[m[s1]][m[s2]] = e[m[s2]][m[s1]] = t;
//	}
//	tempPath.push_back(0);
//	dfs(m[start], 0, 0);
//	cout << numPathMinCost << " " << minCost << " " << maxHappy << " " << maxHappy / (ans.size()-1) << endl << mitos[ans[0]];
//	for (int j = 1; j < ans.size(); j++)
//		cout << "->" << mitos[ans[j]];
//	return 0;
//}