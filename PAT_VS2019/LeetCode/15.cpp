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
//    static bool cmp(vector<int> a, vector<int> b) {
//        if (a[0] != b[0]) return a[0] < b[0];
//        return a[1] != b[1] ? a[1] < b[1] : a[2] < b[2];
//    }
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        int len = nums.size();
//        vector<vector<int>> ans;
//        if (len==0) return ans;
//        sort(nums.begin(), nums.end());
//        if (nums[0] > 0 || nums[len - 1] < 0) return ans;
//        vector<int> last(3, -1);
//        int tsum;
//        for (int i = 0; i < len - 2; i++)
//        {
//            if (nums[i] > 0) break;
//           /* for (int j = i + 1; j < len - 1; j++)
//            {
//                tsum = nums[i] + nums[j];
//                if (tsum > 0) break;
//                for (int k = j + 1; k < len; k++)
//                {
//                    if (tsum + nums[k] == 0) 
//                        ans.push_back({ nums[i],nums[j],nums[k] });
//                    if (tsum > 0&&nums[k] > 0) break;
//                }
//            }*/
//            int l = i + 1,r=len-1;
//            while (l < r) {
//                int sum = nums[i] + nums[l] + nums[r];
//                if (sum == 0) {
//                    ans.push_back({ nums[i],nums[l],nums[r] });
//                }
//                else if (sum < 0) l++;
//                else r--;
//            }
//        }
//
//        int numAns = ans.size();
//        if (numAns == 0) return ans;
//        sort(ans.begin(), ans.end(), cmp);
//        vector<vector<int>> ans2;
//        ans2.push_back(ans[0]);
//        for (int i = 1; i < numAns; i++) {
//            if (ans[i] == ans[i - 1]) continue;
//            ans2.push_back(ans[i]);
//        }
//        return ans2;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<int> v(6);
//    for (int i = 0; i < 6; i++)
//        cin >> v[i];
//    vector<vector<int>> ans = s.threeSum(v);
//    cout << ans.size();
//
//	return 0;
//}