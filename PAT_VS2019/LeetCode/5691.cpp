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
//    bool fadd(vector<int>& v, int sum, const int& t, int& i) {
//        if (t == sum)
//            return 1;
//        if (i == v.size() || 6 == v[i])
//            return 0;
//        if (6 - v[i] + sum <= t)
//        {
//            i++;
//            return fadd(v, sum + 6 - v[i-1], t, i);
//        }
//        else {
//            i++;
//            return 1;
//        }
//    }
//    bool fsub(vector<int>& v, int sum, const int& t, int& i) {
//        if (t == sum)
//            return 1;
//        if (i == -1 || 1 == v[i])
//            return 0;
//        if (sum - v[i] + 1 >= t)
//        {
//            i--;
//            return fsub(v, sum + 1 - v[i+1], t, i);
//        }
//        else {
//            i--;
//            return 1;
//        }
//    }
//
//    int minOperations(vector<int>& nums1, vector<int>& nums2) {
//        int n = nums1.size(), m = nums2.size();
//        sort(nums1.begin(), nums1.end());
//        sort(nums2.begin(), nums2.end());
//        int s1 = 0;
//        int s2 = 0;
//        // fsub(nums1,21,10,s1);
//        // cout<<s1;
//        for (auto s : nums1)
//            s1 += s;
//        for (auto s : nums2)
//            s2 += s;
//        if (s1 > s2)
//        {
//            vector<int> t = nums2;
//            nums2 = nums1;
//            nums1 = t;
//            int te = s1;
//            s1 = s2;
//            s2 = te;
//            swap(n, m);
//        }
//        else if (s1 == s2)return 0;
//
//        int best = 100000000;
//        int bestS = -1;
//        int bestq1 = -1, bestq2 = -1;
//        for (int sum = s1; sum <= s2; sum++)
//        {
//            int q1 = 0, q2 = m - 1;
//            if (fadd(nums1, s1, sum, q1) && fsub(nums2, s2, sum, q2)) {
//                if (best > q1 + m - q2 - 1) {
//                    best = q1 + m - q2 - 1;
//                    bestS = sum;
//                    bestq1 = q1;
//                    bestq2 = m - 1 - q2;
//                    break;
//                }
//            }
//        }
//        cout << bestS << endl << bestq1 << endl << bestq2 << endl;
//        return best == 100000000 ? -1 : best;
//
//    }
//};
//int main()
//{
//	int n;
//    Solution s;
//    vector<int> a = { 5,6,4,3,1,2 }, b = { 6,3,3,1,4,5,3,4,1,3,4 };
//    cout << s.minOperations(a, b);
//	return 0;
//}