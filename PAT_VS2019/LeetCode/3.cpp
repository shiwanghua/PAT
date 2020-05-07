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
//    int lengthOfLongestSubstring(string s) {
//        int n = s.length();
//        int ans = 0;
//        map<char, int> m;
//        int r = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (i > 0)
//                m[s[i - 1]] = 0;
//            while (r < n && m[s[r]] == 0) 
//                m[s[r++]] = 1;
//            ans = max(ans, r - i);
//        }
//        return ans;
//    }
//};
//int main()
//{
//    Solution s;
//    cout << s.lengthOfLongestSubstring("abcabcbb");
//
//	return 0;
//}