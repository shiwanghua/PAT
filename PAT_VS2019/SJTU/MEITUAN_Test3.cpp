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
//const int MAXNUM = 1000000007;
//int n, k, r, l,num=0;
//void dfs(int i, int sum) {
//	if (num >= MAXNUM) return;
//	if (i == n) {
//		if (sum % k == 0) num++;
//		return;
//	}
//	_for(j, l, r + 1) {
//		dfs(i + 1, sum + j);
//	}
//}
////  求数组个数 通过18%
//int main()
//{
//	scanf("%d %d %d %d", &n, &k, &l, &r);
//	if (k == 1) {
//		int q = 1, t = r - l + 1;
//		_for(i, 0, n)
//			q = q * t;
//		cout << q%MAXNUM;
//		return 0;
//	}
//	if (k == 2) {
//		int q = 1, t = r - l + 1;
//		_for(i, 0, n)
//			q = q * t;
//		cout << q/2 % MAXNUM;
//		return 0;
//	}
//	dfs(0, 0);
//	cout << num;
//	return 0;
//}