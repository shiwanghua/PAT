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
// https://leetcode-cn.com/problems/delivering-boxes-from-storage-to-ports/
// class Solution {
// public:
//     int maxB, pC, maxW, n, minT = INT_MAX;
//     void dfs(vector<vector<int>>& boxes, int i, int t) {
//         if(t>=minT) return;
//         if (i == n) {
//             minT = min(t, minT);
//             return;
//         }
//         int bi1 = boxes[i][0], w = boxes[i][1];
//         int j = i + 1;
//         t += 2;
//         while (j < min(i + maxB, n))
//             if (w <= maxW - boxes[j][1]) {
//                 w += boxes[j][1];
//                 if(boxes[j][0]!=boxes[j-1][0])
//                     t++;
//                 j++;
//             }
//             else break;
//         dfs(boxes, j, t);
//     }
//     int boxDelivering(vector<vector<int>>& boxes, int portsCount, int maxBoxes, int maxWeight) {
//         n = boxes.size();
//         maxB = maxBoxes;
//         pC = portsCount;
//         maxW = maxWeight;
//         dfs(boxes, 0, 0);
//         return minT;
//     }
// };

//class Solution {
//public:
//    int boxDelivering(vector<vector<int>>& boxes, int _, int bound_num, int bound_w) {
//        int n = boxes.size();
//        vector<int> p(n + 1), w(n + 1), neg(n + 1);
//        vector<long long> W(n + 1);
//        for (int i = 1; i <= n; ++i) {
//            p[i] = boxes[i - 1][0];
//            w[i] = boxes[i - 1][1];
//            if (i > 1) {
//                neg[i] = neg[i - 1] + (p[i - 1] != p[i]);
//            }
//            w[i] = w[i - 1] + w[i];
//        }
//
//        deque<int> opt = { 0 };
//        vector<int> f(n + 1), g(n + 1);
//
//        for (int i = 1; i <= n; ++i) {
//            while (!opt.empty() && (i - opt.front() > bound_num || W[i] - W[opt.front()] > bound_w)) {
//                opt.pop_front();
//            }
//
//            f[i] = g[opt.front()] + neg[i] + 2;
//
//            if (i != n) {
//                g[i] = f[i] - neg[i + 1];
//                while (!opt.empty() && g[i] <= g[opt.back()]) {
//                    opt.pop_back();
//                }
//                opt.push_back(i);
//            }
//        }
//
//        return f[n];
//    }
//};


//int main()
//{
//    int n;
//    Solution s;
//    //vector<vector<int>> b(6,vector<int>(2)); 
//    //b[0] = { 1,4 };
//    //b[1] = { 1,2 };
//    //b[2] = { 2,1 };
//    //b[3] = { 2,1 };
//    //b[4] = { 3,2 };
//    //b[5] = { 3,4 };
//    vector<vector<int>> b(3, vector<int>(2));
//    b[0] = { 1,1 };
//    b[1] = { 2,1 };
//    b[2] = { 1,1 };
//    cout << s.boxDelivering(b, 2, 3, 3);
//
//	return 0;
//}