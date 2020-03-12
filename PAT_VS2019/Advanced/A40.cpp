//#include<iostream>
//#include<string.h>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int dp[1001][1001], ans = 1;  // Bug:  ³õÖµÎª1
//int main()
//{
//	string s;
//	getline(cin, s);
//	memset(dp, 0, sizeof(dp));
//	_for(0, s.length()) {
//		dp[i][i] = 1;
//		if (i < s.length() - 1 && s[i] == s[i + 1])
//		{
//			dp[i][i + 1] = 1;
//			ans = 2;
//		}
//	}
//
//	for (int L = 3; L <= s.length(); L++) {
//		int j = L - 1;
//		for (int i = 0; j < s.length(); i++) {
//			if (s[i] == s[j] && dp[i + 1][j - 1] == 1) {
//				dp[i][j] = 1;
//				ans = L;
//			}
//			j = i + L;
//		}
//	}
//	cout << ans;
//	return 0;
//}