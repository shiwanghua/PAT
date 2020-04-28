//#include<iostream>
//#include <vector>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//const long long inf = 99999999999;
//const int edge = 1000;
//int main()
//{
//	int n, m, a, b, e[edge][edge], cost, minI, minJ, c[edge][edge]; // e元素为-1时表示已经被覆盖
//	long long minValue, minCost;
//	vector<int> ans;
//	cin >> n >> m >> a >> b;
//	fill(e[0], e[0] + edge * edge, 0);
//	_for(i, 0, n)
//		_for(j, 0, m) cin >> e[i][j];
//
//	// 初始化cost c数组，c[i][j]表示放在[i][j]处的成本
//	_for(i, 0, n - a + 1) {
//		_for(j, 0, m - b + 1) {  // 从e[i][j]开始
//			minValue = inf;
//			cost = 0;
//			_for(q, i, i + a)
//				_for(w, j, j + b)
//				if (e[q][w] < minValue) minValue = e[q][w];
//			_for(q, i, i + a)
//				_for(w, j, j + b)
//				cost = cost + e[q][w] - minValue;
//			c[i][j] = cost;
//		}
//	}
//
//	while (true) {
//		minCost = inf;
//		_for(i, 0, n - a + 1) {
//			_for(j, 0, m - b + 1) {  // 从e[i][j]开始试着放置
//				bool could = 1; //  检查是否可以放置
//				minValue = inf;
//				cost = 0;
//				_for(q, i, i + a)
//				{
//					_for(w, j, j + b)
//						if (e[q][w] == -1) {
//							could = 0;
//							break;
//						}
//					if (!could) break; // Bug1: 少了个等于
//				}
//				if (!could) continue;
//				if (c[i][j] < minCost) { // 如果可以放，是否是最优
//					minCost = c[i][j];
//					minI = i;
//					minJ = j;
//				}
//			}
//		}// End for
//
//		if (minCost == inf) break;  //  没有位置可放置，结束while
//
//		ans.push_back(minI + 1);
//		ans.push_back(minJ + 1);
//		ans.push_back(minCost);
//		_for(q, minI, minI + a)
//			_for(w, minJ, minJ + b)
//			e[q][w] = -1;   //  重置为-1，不能再放在此处
//	}
//	cout << ans.size() / 3 << endl;
//	for (int i = 0; i < ans.size(); i += 3)
//		cout << ans[i] << " " << ans[i + 1] << " " << ans[i + 2] << endl;
//	return 0;
//}