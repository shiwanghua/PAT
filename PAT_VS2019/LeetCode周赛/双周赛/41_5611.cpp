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
////https://leetcode-cn.com/contest/biweekly-contest-41/problems/delivering-boxes-from-storage-to-ports/
//// 我的错误解法
//// 不是只考虑单个最大的，而是考虑和最大的
//// 反例：
//// 90 62 61 60
//// 1  75 76 80
//// class Solution {
//// public:
////     int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
////         int n=aliceValues.size();
////         priority_queue<pair<int, int>> a,b;
////         for(int i=0;i<n;i++)
////         {
////             a.emplace(aliceValues[i],i);
////             b.emplace(bobValues[i],i);
////         }
//
////         vector<bool> pos(n,1);
////         int av=0,bv=0;
////         for(int i=0;i<n;i++){
////             int ja,jb;
////             while(pos[a.top().second]==0) a.pop();
////             ja=a.top().second;
////             while(pos[b.top().second]==0) b.pop();
////             jb=b.top().second;
////             if(i%2==0){
////                 if(aliceValues[ja]>=bobValues[jb]){
////                     av+=aliceValues[ja];
////                     pos[ja]=0;
////                     a.pop();
////                 }
////                 else{
////                     av+=aliceValues[jb];
////                     pos[jb]=0;
////                     b.pop();
////                 }
////             }
////             else{
////                 if(aliceValues[ja]<=bobValues[jb]){
////                     bv+=bobValues[jb];
////                     pos[jb]=0;
////                     b.pop();
////                 }
////                 else{
////                     bv+=bobValues[ja];
////                     pos[ja]=0;
////                     a.pop();
////                 }
////             }
////         }
////         // cout<<av<<" "<<bv<<endl;
////         return (av>bv)?1:(av==bv)?0:-1;
////     }
//// };
//
//// class Solution {
//// public:
////     int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
//// 		vector<pair<int, int>> mp; //记录价值和以及下标
//// 		int n = aliceValues.size();
//// 		for(int i = 0; i < n; i++){
//// 			int dis = aliceValues[i] + bobValues[i];
//// 			mp.emplace_back(dis, i);
//// 		}
//// 		sort(mp.rbegin(), mp.rend()); //从大到小排序
//// 		int sum1 = 0, sum2 = 0;
//// 		for(int i = 0; i < n; i++){
//// 			if(i % 2 == 0) sum1 += aliceValues[mp[i].second];//偶数下标a来取
//// 			else sum2 += bobValues[mp[i].second];  //奇数下标b来取
//// 		}
//// 		// if(sum1 == sum2) return 0; //比较结果
//// 		// else if(sum1 > sum2) return 1;
//// 		// else return -1;
////         return (sum1>sum2)?1:(sum1==sum2)?0:-1;
////     }
//// };
//int main()
//{
//	int n;
//
//
//	return 0;
//}