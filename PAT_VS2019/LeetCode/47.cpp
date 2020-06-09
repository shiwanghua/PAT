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
//    vector<int> vis;
//    int n;
//public:
//    void pu(vector<int>& nums, vector<vector<int>>& res, vector<int> path) {
//        if (path.size() == n) {
//            res.push_back(path);
//            return;
//        }
//        for (int j = 0; j < n; j++) {
//            if (vis[j]) continue;
//            if (j >= 1 && nums[j] == nums[j - 1] && !vis[j - 1])  //  少写了个等于号
//                continue;
//            vis[j] = 1;
//            path.push_back(nums[j]);
//            pu(nums, res, path);
//            vis[j] = 0;
//            path.pop_back();
//        }
//    }
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//        vector<vector<int>> res;
//        n = nums.size();
//        if (n == 0) return res;
//        vis.resize(n, 0);
//        sort(nums.begin(), nums.end());
//        vector<int> path;
//        pu(nums, res, path);
//        return res;
//    }
//};
//
//// 这种方法慢了一倍
//// class Solution {
//// public:
////     vector<vector<int>> permuteUnique(vector<int>& nums) {
////         sort(nums.begin(),nums.end());
////         vector<vector<int>> ans;
////         int len = nums.size();
////         dfs(nums,0,len,ans);
////         return ans;
////     }
//
////     void dfs(vector<int>& nums,int index,int &len,vector<vector<int>> &ans){
////         if(index == len-1)  // 最后一位不需要设置了
////             ans.push_back(nums);
////         unordered_map<int,int> hash;
////         for(int i = index;i<len;i++){
////             if(hash.count(nums[i]))
////                 continue;
////             else{
////                 swap(nums[index],nums[i]);
////                 dfs(nums,index+1,len,ans);
////                 swap(nums[index],nums[i]);
////                 hash[nums[i]]=1;
////             }
////         }
////     }
//// };
//int main()
//{
//	int n;
//    vector<int> s(3);
//    s[0] = s[1] = 1; s[2] = 2;
//    Solution so;
//    vector<vector<int>> a=so.permuteUnique(s);
//	return 0;
//}