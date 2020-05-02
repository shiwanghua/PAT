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
//
//class Solution {
//    int s(int n) {
//        int t = 0, q = 0;
//        while (n) {
//            t = n % 10;
//            n = n / 10;
//            q += t * t;
//        }
//        return q;
//    }
//    map<int, int> m;
//public:
//    bool isHappy(int n) {
//        while (1) {
//            if (m[n] == 0) m[n] = 1;
//            else break;
//            if (n == 1) return 1;
//            n = s(n);
//        }
//        return 0;
//    }
//};
//
//int main() {
//    Solution s;
//    cout<< s.isHappy(19);
//    return 0;
//}