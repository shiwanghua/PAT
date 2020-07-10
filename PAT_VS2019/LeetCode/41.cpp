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
//    int firstMissingPositive(vector<int>& nums) {
//        for (auto& i : nums)
//            if (i <= 0) i = nums.size() + 1;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (abs(nums[i]) <= nums.size())
//                nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i])- 1]);
//        }
//        for (int i = 0; i < nums.size(); i++)
//            if (nums[i] > 0) return i + 1;
//        return nums.size() + 1;
//    }
//};
//int main()
//{
//	int n;
//    Solution s;
//    vector<int> nums = {3,4,-1,1};
//    cout << s.firstMissingPositive(nums);
//	return 0;
//}