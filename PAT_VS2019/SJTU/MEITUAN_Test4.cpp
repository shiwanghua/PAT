//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//const int maxN = 5000;
//int n, m, k, t1, t2, e[maxN][maxN], kind[maxN] = { 0 },have[maxN], cost = 0;
//int main()
//{
//	fill(e[0], e[0] + maxN * maxN, 0);
//	scanf("%d %d %d\n", &n,&m,&k);
//	_for(i, 1, 1 + n) {
//		cin >> t1; kind[i] = t1;
//	}
//	_for(i, 0, m) {
//		cin >> t1 >> t2;
//		e[t1][t2] = e[t2][t1] = 1;
//	}
//	_for(i,1, 1 + n) {
//		cost = 0;
//		_for(j, 1, k + 1) {
//			if (j == i) continue;
//			fill(have, have + maxN, 0);
//			have[i] = 1;
//			bool find=0;
//			queue<int> path;
//			path.push(i);
//			int lastFirst = i;
//			while (find==0) {
//				int node = path.front();
//				path.pop();
//				if(lastFirst ==node) cost++; // 上层的最后一个节点
//				int getin = 0;
//				_for(q, 1, n + 1) {
//					if (e[node][q] == 1&&have[q]==0) {
//						have[q] = 1;
//						path.push(q);
//						if (getin == 0) {
//							lastFirst = q; getin = 1;
//						}
//						if (kind[q] == j) {
//							find = 1;
//							break;
//						}
//					}
//				}
//			}
//		}
//		cout << cost-1;
//		if (i < n) cout << " ";
//	}
//	return 0;
//}