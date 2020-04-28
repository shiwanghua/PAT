//#include<iostream>
//#include <vector>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//long long n, t, minSum = 0;
//vector<int> v[3];
//void dfs(int i, int last, int sum) {
//	if (sum >= minSum) return;
//	if (i == n) {
//		if (sum < minSum) minSum = sum;
//		return;
//	}
//	dfs(i + 1, v[0][i], sum + abs(v[0][i] - last));
//	dfs(i + 1, v[1][i], sum + abs(v[1][i] - last));
//	dfs(i + 1, v[2][i], sum + abs(v[2][i] - last));
//}
//// 20%
//int main()
//{
//	cin >> n;
//	_for(i, 0, 3)
//		_for(j, 0, n)
//	{
//		cin >> t;
//		v[i].push_back(t);
//	}
//	_for(i, 1, n) minSum += abs(v[0][i] - v[0][i - 1]);
//	dfs(1, v[0][0], 0);
//	dfs(1, v[1][0], 0);
//	dfs(1, v[2][0], 0);
//	cout << minSum;
//	return 0;
//}
//


////  动态规划的方法， v数组可以舍去
//#include<iostream>
//#include <vector>
//#include <algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//long long n, t, minSum = 0;
//const int maxn = 1e5;
//long long dp[maxn][3];
//long long v[maxn][3];
////long long abs(long long x)
////{
////    if (x < 0) x = -x;
////    return x;
////}
//int main()
//{
//   
//    cin >> n;
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            int x;
//            cin >> x;
//            v[j][i] = x;
//        }
//    }
//    dp[0][0] = 0;
//    dp[0][1] = 0;
//    dp[0][2] = 0;
//    for (int i = 1; i < n; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            long long minn = 1LL << (61);
//            for (int k = 0; k < 3; k++)
//            {
//                minn = min(minn, abs(v[i][j] - v[i - 1][k]) + dp[i - 1][k]);
//            }
//            dp[i][j] = minn;
//        }
//    }
//    long long minn = 1LL << (61);
//    for (int i = 0; i < 3; i++)
//    {
//        minn = min(minn, dp[n - 1][i]);
//    }
//    cout << minn << endl;
//}