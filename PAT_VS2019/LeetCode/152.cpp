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
//    int maxProduct(vector<int> nums) {
//        // vector <int> maxF(nums), minF(nums);
//        // for (int i = 1; i < nums.size(); ++i) {
//        //     maxF[i] = max(maxF[i - 1] * nums[i], max(nums[i], minF[i - 1] * nums[i]));
//        //     minF[i] = min(minF[i - 1] * nums[i], min(nums[i], maxF[i - 1] * nums[i]));
//        // }
//        // return *max_element(maxF.begin(), maxF.end());
//
//        //// 这不是连续的子串
//        //int ma = nums[0], mi = nums[0];
//        //for (int i = 1; i < nums.size(); i++) {
//        //    if (nums[i] > 0) {
//        //        ma = max(ma * nums[i], ma);
//        //        ma = max(ma, nums[i]);
//        //        mi = min(mi * nums[i], mi);
//        //        mi = min(mi, nums[i]);
//        //    }
//        //    else if (nums[i] < 0) {
//        //        int ma_c = ma;
//        //        ma = max(mi * nums[i], ma);
//        //        // ma=max(ma,nums[i]);
//        //        mi = min(ma_c * nums[i], mi);
//        //        mi = min(mi, nums[i]);
//        //    }
//        //}
//        //return ma;
//        int maxF = nums[0], minF = nums[0], ans = nums[0];
//        for (int i = 1; i < nums.size(); ++i) {
//            int mx = maxF, mn = minF;
//            maxF = max(mx * nums[i], max(nums[i], mn * nums[i]));
//            minF = min(mn * nums[i], min(nums[i], mx * nums[i]));
//            ans = max(maxF, ans);
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//	int n;
//    Solution s;
//    vector<int> a = { 2,3,-2,4 };
//    cout << s.maxProduct({ 2,3,-2,4 });
//	return 0;
//}