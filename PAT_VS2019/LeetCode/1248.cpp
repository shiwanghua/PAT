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
//    int numberOfSubarrays(vector<int>& nums, int k) {
//        int len = nums.size();
//        if (len < k) return 0;
//        vector<int> num, dis(len);
//        for (int i = 0; i < len; i++)
//            if (nums[i] % 2) num.push_back(1);
//            else num.push_back(0);
//        for (int i = 0; i < len; i++)
//        {
//            int j = i + 1;
//            while (j < len && num[j] == 0) 
//                j++;
//            if (j == len) dis[i] = len - 1 - i;
//            else dis[i] = j - i; // ����һ��1�ľ���
//        }
//        int i = 0, j = 0, ans = 0, t = 0;
//        while (j < len) {
//            if (num[j]) t++;
//            j++;
//            if (t == k) {
//                ans++;
//                if (num[i] == 0) ans += dis[i];
//                break;
//            }
//        }
//        // i ~ j-1 ��k��1
//        while (j < len) {
//            if (num[j]) { //  �ұ߶�һ��1��߾�Ҫ��һ��1
//                if (num[i]) {
//                    ans += dis[i];
//                    i += dis[i];
//                }
//                else {
//                    i += dis[i];
//                    ans += dis[i];
//                }
//            }
//            else {
//                // Bug: num[i]==1ʱҪ�������������ߵ�0����ϣ�̫�鷳��
//                ans++;
//                if (num[i] == 0) 
//                    ans += dis[i]-1;
//            }
//            j++;
//        }
//        return ans;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<int> v; int n,k;
//    cin >> n >> k; v.resize(n);
//    _for(i, 0, n) cin >> v[i];
//    cout << s.numberOfSubarrays(v,k);
//	return 0;
//}