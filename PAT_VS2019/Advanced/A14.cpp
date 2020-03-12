//#include<iostream>
//#include<string>
//#include <queue>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//const int inf = 99999999;
//int main()
//{
//	int n, m, k, q,t, time[1001] = { 0 },p[1001];
//	scanf("%d%d%d%d", &n, &m, &k, &q);
//	queue<int> w[20];
//	int firstDoneTime[20] = { 0 }, lastDoneTime[20] = { 0 };
//	_for(1, k + 1) scanf("%d", &p[i]);
//	_for(1, k + 1) {
//		int minSize = inf, minSize_J=-1;
//		for (int j = 0; j < n; j++)
//			if (minSize > w[j].size()) {
//				minSize = w[j].size();
//				minSize_J = j;
//			}
//		if (minSize < m)
//		{
//			w[minSize_J].push(i);
//			if (w[minSize_J].size() == 1) //  第一个进入窗口的
//				time[i] = firstDoneTime[minSize_J] = lastDoneTime[minSize_J] = p[i];
//			else time[i] = lastDoneTime[minSize_J] += p[i];
//		}
//		else{//  都满了
//			int minTime = inf, min_j = -1;
//			for (int j = 0; j < n; j++)
//				if (minTime > firstDoneTime[j]) {
//					min_j = j;
//					minTime = firstDoneTime[j];
//				}
//			w[min_j].pop();
//			w[min_j].push(i);
//			firstDoneTime[min_j] += p[w[min_j].front()];
//			time[i] = lastDoneTime[min_j] += p[i]; //  把p[i]写成了p[min_j]
//		}
//	}
//	_for(0, q) {
//		cin >> t;
//		if ((time[t] - p[t]) / 60+8 >= 17) {
//			cout << "Sorry\n";
//			continue;
//		}
//		printf("%02d:%02d\n", time[t] / 60 + 8, time[t] % 60);
//	}
//	return 0;
//}