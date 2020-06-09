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
//    double findMedianSortedArrays(vector<int> nums1, vector<int> nums2) {
//        int i = 0, j = 0, s1 = nums1.size(), s2 = nums2.size(), k = 1;
//        double d1, d2;
//        int mid = (s2 + s1 + 1) / 2;
//        while (k < mid && i < s1 && j < s2) {
//            if (nums1[i] < nums2[j]) i++;
//            else j++;
//            k++;
//        }
//        while (k < mid && i < s1) {
//            i++;
//            k++;
//        }
//        while (k < mid && j < s2) {
//            j++;
//            k++;
//        }
//        if (i == s1) d1 = nums2[j++];
//        else if (j == s2) d1 = nums1[i++];
//        else {
//            if (nums1[i] < nums2[j]) d1 = nums1[i++];
//            else d1 = nums2[j++];
//        }
//        if ((s1 ^ s2) & 1) return d1;
//        if (i == s1) d2 = nums2[j++];
//        else if (j == s2) d2 = nums1[i++];
//        else {
//            if (nums1[i] < nums2[j]) d2 = nums1[i++];
//            else d2 = nums2[j++];
//        }
//        return (d1 + d2) / 2;
//    }
//};
//int main()
//{
//	int n;
//    Solution s;
//    cout << s.findMedianSortedArrays({ 3 }, { -2,-1 });
//
//	return 0;
//}