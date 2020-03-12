//#include<iostream>
//#include <unordered_map>
//#include <vector>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//vector<vector<int>> v(10000);
//unordered_map<int, int> line;
//vector<int> tempPath, ans;
//int numStation, numTrans, start, des, visit[10000] = { 0 };
//int getTransNum(vector<int> path) {
//	int preLine = line[path[0] * 10000 + path[1]], num = 0;
//	for (int i = 2; i < path.size(); i++) {
//		int l = line[path[i - 1] * 10000 + path[i]];
//		if (preLine != l) {
//			preLine = l;
//			num++;
//		}
//	}
//	return num;
//}
//void dfs(int i,int numS) {
//	if (i == des) {
//		if (numS == numStation) {
//			int tempNumTrans = getTransNum(tempPath);
//			if (tempNumTrans < numTrans) {
//				ans = tempPath;
//				numTrans = tempNumTrans;
//			}
//		}
//		else if (numS < numStation) {
//			ans = tempPath;
//			numStation = numS;
//			numTrans = getTransNum(tempPath);;
//		}
//		return;
//	}
//	for(int j=0;j<v[i].size();j++)
//		if (visit[v[i][j]] == 0) {
//			visit[v[i][j]] = 1;
//			tempPath.push_back(v[i][j]); //  Bug2: 把v[i][j]写成了j，下面一行也是
//			dfs(v[i][j], numS + 1);
//			visit[v[i][j]] = 0;
//			tempPath.pop_back();
//		}
//}
//int main()
//{
//	int n, m, k,pre,next;
//	scanf("%d", &n);
//	_for(1, n+1) {
//		scanf("%d%d", &m, &pre);
//		for (int j = 1; j < m; j++) {
//			scanf("%d", &next);
//			v[pre].push_back(next);
//			v[next].push_back(pre);
//			line[pre * 10000 + next] = line[pre + next * 10000] = i;
//			pre = next; //  Bug: 忘写了
//		}
//	}
//	scanf("%d", &k);
//	while (k--) {
//		scanf("%d%d", &start, &des);
//		tempPath.clear();
//		tempPath.push_back(start);
//		visit[start] = 1;
//		numTrans=numStation = 99999;
//		dfs(start,0);
//		visit[start] = 0;
//		printf("%d\n", numStation);
//		pre = line[ans[0] * 10000 + ans[1]];
//		for (int j = 2; j < ans.size(); j++) {
//			if (line[ans[j - 1] * 10000 + ans[j]] != pre) {
//				printf("Take Line#%d from %04d to %04d.\n", pre, start, ans[j - 1]);
//				start = ans[j - 1];
//				pre = line[ans[j - 1] * 10000 + ans[j]];
//			}
//		}
//		printf("Take Line#%d from %04d to %04d.\n", pre, start, des);
//	}
//	return 0;
//}