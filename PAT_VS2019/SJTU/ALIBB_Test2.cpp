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
//using namespace std;
//int n, m, q, a[500][500], t1, t2;
////  50%
//// 这题未来得及改的bug:  不应收到一个坐标就单单根据一行一列判断一个坐标，而是在查询前先计算出整个数组，一得到一个公差就立刻把那一行和一列的未知0全部更新
//int main()
//{
//	cin >> n >> m >> q;
//	_for(i, 0, n)
//		_for(j, 0, m)
//		cin >> a[i][j];
//	_for(t1, 0, n) {
//		_for(t2,0,m)
//		if (a[t1][t2] != 0) {
//			//cout << a[t1][t2] << endl;
//			continue;
//		}
//		int d, g1 = 0, g2 = 0, j1 = 0, j2 = 0, find = 0;
//		while (j1 < n) if (a[j1][t2] != 0) {
//			g1 = a[j1][t2];
//			break;
//		}
//		else j1++;
//		if (j1 < n - 1) {  // 找列公差
//			j2 = j1 + 1;
//			while (j2 < n) if (a[j2][t2] != 0) {
//				g2 = a[j2][t2];
//				break;
//			}
//			else j2++;
//			if (j2 < n) {
//				d = (g2 - g1) / (j2 - j1);
//				a[t1][t2] = g1 + d * (t1 - j1);
//				if (abs(a[t1][t2]) > 1000000000) a[t1][t2] = 0;
//				/*else {
//					cout << a[t1][t2] << endl;
//					find = 1;
//				}*/
//			}
//		}
//		if (!find) {  // 找行公差
//			j1 = j2 = 0;
//			while (j1 < m) if (a[t1][j1] != 0) {
//				g1 = a[t1][j1];
//				break;
//			}
//			else j1++;
//			if (j1 < m - 1) {  // 找行公差
//				j2 = j1 + 1;
//				while (j2 < m) if (a[t1][j2] != 0) {
//					g2 = a[t1][j2];
//					break;
//				}
//				else j2++;
//				if (j2 < m) {
//					d = (g2 - g1) / (j2 - j1);
//					a[t1][t2] = g1 + d * (t2 - j1);
//					if (abs(a[t1][t2]) > 1000000000) a[t1][t2] = 0;
//					/*else {
//						cout << a[t1][t2] << endl;
//						find = 1;
//					}*/
//				}
//			}
//		}
//		//if (!find) cout << "Unknown\n";
//	}
//	_for(i, 0, q) {
//		cin >> t1 >> t2;
//		t1--; t2--;
//		if (a[t1][t2] != 0) cout << a[t1][t2];
//		else cout << "Unknown\n";
//	}
//	return 0;
//}