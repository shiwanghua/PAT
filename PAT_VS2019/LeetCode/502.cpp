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
//    int n;
//    vector<int> p, c, vis;
//    set<int> s;
//    int f(int k, int w) {
//        if (!k) return 0;
//        for (int i = 0; i < n; i++) {
//            if (w < c[i] || s.count(i)) continue;
//            else s.insert(i);
//        }
//        int sum = 0;
//        k--;
//        int maxi = -1;
//        for (auto i : s) {
//            if (!vis[i])
//            {
//                if (maxi == -1) {
//                    maxi = i;
//                    continue;
//                }
//                else if (p[maxi] < p[i]) maxi = i;
//            }
//        }
//        if (maxi == -1) return 0;
//        vis[maxi] = 1;
//        sum = max(sum, p[maxi] + f(k, w + p[maxi]));
//        vis[maxi] = 0;
//        return sum;
//    }
//public:
//    int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>& Capital) {
//        this->n = Profits.size();
//        this->p = Profits;
//        this->c = Capital;
//        vis.resize(n, 0);
//        for (int i = 0; i < n; i++)
//            if (Capital[i] <= W)
//                s.insert(i);
//        if (s.size() == n && n <= k) {
//            int sum = 0;
//            for (auto i : Profits)
//                sum += i;
//            return sum + W;
//        }
//        return f(k, W) + W;
//    }
//};
//int main()
//{
//    vector<int>  v(3),c(3);
//    v[0] = 1; v[1] = 2; v[2] = 3;
//    c[0] = 0; c[1] = 1; c[2] = 1;
//    Solution s;
//    cout<< s.findMaximizedCapital(2, 0, v, c);
//	return 0;
//}