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
//class MountainArray {
//    int arr[6];
//public:
//    MountainArray() {
//        arr[0] = 0;
//        arr[1] = 5;
//        arr[2] = 3;
//        arr[3] = 1;
//        //arr[4] = 2;
//        //arr[5] = 1;
//    }
//    int get(int index) {
//        return arr[index];
//    }
//    int length() {
//        return 4;
//    }
//    
//};
//
//class Solution {
//public:
//    int findInMountainArray(int target, MountainArray& mountainArr) {
//        int i = 0, j = mountainArr.length() - 1, mid, m1, m2;
//        int lv = mountainArr.get(0), rv = mountainArr.get(j);;
//        while (i < j) {
//            mid = i + ((j - i) >> 1);
//            m1 = mountainArr.get(mid);
//            m2 = mountainArr.get(mid + 1);
//            if (m1 == target) return mid;
//            else if (m2 == target) return mid + 1;
//            else if (m1 < m2) {
//                if (target >= lv && target < m2)
//                    j = mid;
//                else i = mid + 2;
//            }
//            else {
//                if (target >= rv && target < m1)
//                    i = mid + 1;
//                else j = mid - 1;
//            }
//        }
//        if (i < mountainArr.length() && mountainArr.get(i) == target) return i;
//        if (j >= 0 && mountainArr.get(j) == target) return j;
//        return -1;
//    }
//};
//int main()
//{
//	int n;
//    MountainArray m;
//    Solution s;
//    cout << s.findInMountainArray(1, m);
//    //int a = (3 - 2) >> 1;
//    //int b = 2;
//    //cout << "a=" << a << ", b=" << b << endl;
//    //cout << "a+b=" << a + b << endl;
//    //cout << (2+ (3 - 2) >> 1);
//	return 0;
//}