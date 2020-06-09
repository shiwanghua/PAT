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
//    int findTheLongestSubstring(string s) {
//        int ans = 0, status = 0, n = s.length();
//        vector<int> pos(1 << 5, -1);
//        pos[0] = 0;
//        for (int i = 0; i < n; ++i) {
//            if (s[i] == 'a') {
//                status ^= 1 << 0;
//            }
//            else if (s[i] == 'e') {
//                status ^= 1 << 1;
//            }
//            else if (s[i] == 'i') {
//                status ^= 1 << 2;
//            }
//            else if (s[i] == 'o') {
//                status ^= 1 << 3;
//            }
//            else if (s[i] == 'u') {
//                status ^= 1 << 4;
//            }
//            if (~pos[status]) {
//                ans = max(ans, i +1- pos[status]);
//            }
//            else {
//                pos[status] = i+1;   //  这里必须加一，考虑到pos[0]=0而不是-1，如果在i=1时遇到status=0, 那么 i - pos[status] = 1 而不是2；而且不能把pos[0]设置为-1，因为-1是初始值，遇到status=0时不会进入if，相当于没赋值
//            }
//        }
//        return ans;
//    }
//};
//int main()
//{
//    Solution s;
//    cout << s.findTheLongestSubstring("aa");
//
//	return 0;
//}