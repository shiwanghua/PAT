//#include<iostream>
//#include <vector>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int n, m, len[500][500], Time[500][500], visit[500] = { 0 }, t1, t2, t3, t4, t5, start, End, minD = 9999999, minT = 9999999, minTimeWithShortPath = 99999999,minNum=999;
//vector<int> path, ans1, ans2;
//void dfs(int i, int d, int t) {
//	visit[i] = 1;
//	path.push_back(i);
//	if (i == End) {
//		if (d < minD) {   // ������� �� ʱ��϶̵�·��
//			ans1 = path;
//			minTimeWithShortPath = t;
//			minD = d;
//		}
//		else if (minD == d&& minTimeWithShortPath>t) {
//			minTimeWithShortPath = t;
//			ans1 = path;
//		}
//		if (t < minT) {  //  ʱ������ �� �ڵ����ٵ�·��
//			ans2 = path;
//			minNum = path.size();
//			minT = t;
//		}
//		else if (minT == t && minNum > path.size()) {
//			minNum = path.size();
//			ans2 = path;
//		}
//		visit[i] = 0; // Bug1: ����д������
//		path.pop_back();
//		return;
//	}
//
//	for (int j = 0; j < n; j++) {
//		if (visit[j] == 0 && len[i][j] >0)
//			dfs(j, d + len[i][j], t + Time[i][j]);
//	}
//	visit[i] = 0;
//	path.pop_back();
//	return;
//}
//int main()
//{
//	scanf("%d%d", &n, &m);
//	_for(i, 0, m) {
//		scanf("%d%d%d%d%d\n", &t1, &t2, &t3, &t4, &t5);
//		len[t1][t2] = t4;
//		Time[t1][t2] = t5;
//		if (!t3) {
//			len[t2][t1] = t4;
//			Time[t2][t1] = t5;
//		}
//	}
//	scanf("%d%d", &start, &End);
//	dfs(start, 0, 0);
//	if (ans1 == ans2) {
//		printf("Distance = %d; Time = %d: %d", minD, minT, start);
//		_for(i, 1, ans1.size()) cout << " -> " << ans1[i];
//	}
//	else {
//		printf("Distance = %d: %d", minD, start);
//		_for(i, 1, ans1.size()) cout << " -> " << ans1[i];
//		cout << endl;
//		printf("Time = %d: %d", minT, start);
//		_for(i, 1, ans2.size()) cout << " -> " << ans2[i];
//	}
//	return 0;
//}
//
//
////  Bug2: ֮ǰ�ķ���������·���ŵ�һ�������жϣ�size()���������һ�Ͳ������if������ans2Ϊ�ճ���
//
////#include<iostream>
////#include <vector>
////#define _for(i,a,b) for( int i=a; i<b; ++i)
////using namespace std;
////int n, m, len[500][500], Time[500][500], visit[500] = { 0 }, t1, t2, t3, t4, t5, start, End, minD = 9999999, minT = 9999999;
////vector<int> path, ans1, ans2, shortPathTime;
////vector<vector<int>> shortPath, fastPath;
////void dfs(int i, int d, int t) {
////	visit[i] = 1;
////	path.push_back(i);
////	if (i == End) {
////		if (d < minD) {
////			shortPath.clear();
////			shortPath.push_back(path);
////			shortPathTime.clear();
////			shortPathTime.push_back(t);
////			minD = d;
////		}
////		else if (minD == d) {
////			shortPath.push_back(path); shortPathTime.push_back(t);
////		}
////		if (t < minT) {
////			fastPath.clear();
////			fastPath.push_back(path);
////			minT = t;
////		}
////		else if (minT == t) fastPath.push_back(path);
////		visit[i] = 0; // Bug1: ����д������
////		path.pop_back();
////		return;
////	}
////
////	for (int j = 0; j < n; j++) {
////		if (visit[j] == 0 && len[i][j] > 0)
////			dfs(j, d + len[i][j], t + Time[i][j]);
////	}
////	visit[i] = 0;
////	path.pop_back();
////	return;
////}
////int main()
////{
////	scanf("%d%d", &n, &m);
////	_for(i, 0, m) {
////		scanf("%d%d%d%d%d\n", &t1, &t2, &t3, &t4, &t5);
////		len[t1][t2] = t4;
////		Time[t1][t2] = t5;
////		if (!t3) {
////			len[t2][t1] = t4;
////			Time[t2][t1] = t5;
////		}
////	}
////	scanf("%d%d", &start, &End);
////	dfs(start, 0, 0);
////	if (fastPath.size() > 1) {   //  Bug2: ����size����Ϊ1�� ����һ��Ӧ�������
////		ans2 = fastPath[0];
////		_for(i, 1, fastPath.size())
////			if (fastPath[i].size() < ans2.size()) ans2 = fastPath[i];
////	}
////	if (shortPath.size() > 1) { 
////		ans1 = shortPath[0];     // ����Ҳ�ǣ�����û��Ӧ�Ĳ�������
////		int index = 0;
////		_for(i, 1, shortPath.size())
////			if (shortPathTime[index] > shortPathTime[i]) {
////				index = i;
////				ans1 = shortPath[i];
////			}
////	}
////	if (ans1 == ans2) {
////		printf("Distance = %d; Time = %d: %d", minD, minT, start);
////		_for(i, 1, ans1.size()) cout << " -> " << ans1[i];
////	}
////	else {
////		printf("Distance = %d: %d", minD, start);
////		_for(i, 1, ans1.size()) cout << " -> " << ans1[i];
////		cout << endl;
////		printf("Time = %d: %d", minT, start);
////		_for(i, 1, ans2.size()) cout << " -> " << ans2[i];
////	}
////	return 0;
////}