//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int n, m, k, t1, t2, into[1001] = { 0 }, topo[1001];  //   into 有多少条边指向它
//vector<int> edge[1001], ans;
//int main()
//{
//	scanf("%d%d", &n, &m);
//	_for(0, m) {
//		scanf("%d%d", &t1, &t2);
//		edge[t1].push_back(t2);
//		into[t2]++;
//	}
//	cin >> k;
//	for(int i=0;i<k;i++){
//		for (int j = 0; j < n;j++)
//			scanf("%d", &topo[j]);
//		int* copyInto = new int[1+n];
//		for (int w = 0; w < 1+n; w++) 
//			copyInto[w] = into[w];
//		for (int j = 0; j < n; j++) {
//			if (copyInto[topo[j]]) {
//				ans.push_back(i);
//				break;
//			}
//			else {
//				for (int q = 0; q < edge[topo[j]].size(); q++)
//					copyInto[edge[topo[j]][q]]--;
//			}
//		}
//	}
//	cout << ans[0];
//	for (int j = 1; j < ans.size(); j++) cout << " " << ans[j];
//	return 0;
//}