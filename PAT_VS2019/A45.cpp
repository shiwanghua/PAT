//#include<iostream>
//#include<string>
//#include<iomanip>
//#include<vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int c, n, t; cin >> c >> n;
//	int* hash = new int[c + 1];
//	_for(1, n + 1) {
//		cin >> t;
//		hash[t] = i;
//	}
//	cin >> n;
//	int* in = new int[n], num = 0, * dp = new int[n];
//	_for(0, n)
//	{
//		cin >> t;
//		if (hash[t])
//			in[num++] = hash[t];
//	}
//	int len = 0, tempLen = 1;
//	dp[0] = 1;
//	for (int i = 1; i < num; i++) {
//		dp[i] = 1;
//		for (int j = 0; j < i; j++)
//			if (in[j] <= in[i] && dp[j] + 1 > dp[i])
//				dp[i] = dp[i] + 1;
//
//	}
//	cout << dp[num - 1];// Bug: 最后一个值不一定是dp数组的最大值！只是测试用例没检测出来
//	return 0;
//}