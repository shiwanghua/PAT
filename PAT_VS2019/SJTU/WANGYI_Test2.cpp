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
//struct task {
//	int level, num = 0;
//}ts[100000];
//bool cmp(task t1, task t2) {
//	return t1.level < t2.level;
//}
//// 80%  20'
//int main()
//{
//	int n,m; cin >> n;
//	vector<int> p(n);
//	_for(i, 0, n)
//		cin >> p[i];
//	sort(p.begin(), p.end());
//	_for(i, 0, n) {
//		cin >> ts[i].level;
//		_for(j, 0, n)
//			if (p[j] >= ts[i].level) {
//				ts[i].num = n - j;
//				break;
//			}
//	}
//	cin >> m;
//	sort(ts, ts + n, cmp);
//	int k = ts[n-1].num;
//	mfor(i, n - 2, 0) {
//		k = k * (ts[i].num - n + i + 1);
//		if (k <= 0) {
//			k = 0; break;
//		}
//		k = k % m;
//	}
//	cout << k;
//	return 0;
//}