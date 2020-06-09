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
//    string countAndSay(int n) {
//        if (n == 1) return "1";
//        string s = "1", s2 = "";
//        for (int i = 1; i < n; i++) {
//            for (int j = 0; j < s.length();) {
//                int c = j; char ch = s[j++];
//                while (j < s.length() && ch == s[j]) j++;
//                c = j - c;
//                s2 += to_string(c) + ch;
//            }
//            s = s2; s2 = "";
//        }
//        return s;
//    }
//};
//int main()
//{
//    Solution s;
//    cout << s.countAndSay(4);
//
//
//	return 0;
//}