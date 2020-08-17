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
//    int searchInsert(vector<int>& nums, int target) {
//        int r = nums.size() - 1, l = 0;
//        while (l < r) {
//            int mid = l + ((r - l) >> 1); //  要多加一个括号！
//            if (nums[mid] < target) l = mid + 1;
//            else if (nums[mid] > target) r = mid - 1;
//            else return mid;
//        }
//        return nums[l] < target ? l + 1 : l;
//    }
//};
//int main()
//{
//	int n;
//    vector<int> nums = {1,3,5,6};
//    Solution sol;
//   /* cout << sol.searchInsert(nums, 5);*/
//    cout << (2+(3 - 2) >> 1);
//	return 0;
//}