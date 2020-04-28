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
//struct project {
//	int p, l, d;
//}p[51];
//
//int main()
//{
//	int n; cin >> n;
//	_for(i, 1, n+1) 
//		cin >> p[i].p >> p[i].l >> p[i].d;
//	sort(p+1, p + n+1, [](const project& p1, const project& p2) {return p1.d < p2.d; });
//	int maxD = p[n].d;
//	vector<vector<int>> dp(n+1, vector<int>(maxD+1));
//	for(int i=1;i<=n;i++)
//		for (int j = 1; j <= maxD; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			int k = min(p[i].d, j) - p[i].l;
//			if (k >= 0)   // Bug: 可以等于0
//				dp[i][j] = max(dp[i][j], dp[i-1][k]+p[i].p);
//		}
//	cout << dp[n][maxD];
//	return 0;
//}