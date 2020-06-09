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
//    vector<vector<int>> ans;
//    int n, t;
//public:
//    void r(vector<int> v, int sum, int s, vector<int>& candidates) {
//        if (sum > t) return;
//        else if (sum == t) {
//            ans.push_back(v);
//            return;
//        }
//        for (int i = s; i < n; i++) {
//            v.push_back(candidates[i]);
//            r(v, sum + candidates[i], i, candidates);   //  sumÐ´³ÉÁËs
//            v.pop_back();
//        }
//    }
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        n = candidates.size();
//        t = target;
//        sort(candidates.begin(), candidates.end());
//        vector<int> v;
//        r(v, 0, 0, candidates);
//        return ans;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> ca = { 2,3,6,7};
//    vector<vector<int>> v = s.combinationSum(ca, 7);
//
//	return 0;
//}