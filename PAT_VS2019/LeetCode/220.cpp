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
//    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
//        set<int> s;
//        for (int i = 0; i < nums.size(); i++) {
//            auto f = s.upper_bound(nums[i]);
//            if (f != s.begin() && *--f + t >= nums[i])  //  减一就是小于等于nums[i]的最大元素了
//                return 1;
//            f = s.lower_bound(nums[i]);
//            if (f != s.end() && *f <= t + nums[i])
//                return 1;
//            s.insert(nums[i]);
//            if (s.size() > k)
//                s.erase(nums[i - k]);
//        }
//        return 0;
//    }
//};
//int main()
//{
//    vector<int> a(6);
//    a[0] = 7;
//    a[1] = 1;
//    a[2] = 3;
//    Solution s;
//    cout << s.containsNearbyAlmostDuplicate(a, 2, 3);
//	return 0;
//}