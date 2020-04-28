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
//class Solution {
//public:
//    int rec(int dp[][10][10], vector<int>& b, int l, int r, int k) {
//        if (l > r) return 0;
//        if (dp[l][r][k] != 0) 
//            return dp[l][r][k];
//        while (r > l&& b[r] == b[r - 1]) {
//            r--;
//            k++;
//        }
//        dp[l][r][k] = rec(dp, b, l, r - 1, 0) + (k + 1) * (k + 1);
//
//        for (int i = l; i < r - 1; i++) {
//            if (b[i] == b[r])
//                dp[l][r][k] = max(dp[l][r][k], rec(dp, b, l, i, k + 1) + rec(dp, b, i + 1, r - 1, 0));
//        }
//        return dp[l][r][k];
//    }
//    int removeBoxes(vector<int>& boxes) {
//        int dp[10][10][10];
//        for (int i = 0; i < 10; i++)
//            for (int j = 0; j < 10; j++)
//                for (int k = 0; k < 10; k++)
//                    dp[i][j][k] = 0;
//        return rec(dp, boxes, 0, boxes.size() - 1, 0);
//    }
//};
//
//int main()
//{
//    vector<int> b(3);
//    cin >> b[0] >> b[1] >> b[2];
//    Solution s;
//    cout << s.removeBoxes(b);
//	return 0;
//}