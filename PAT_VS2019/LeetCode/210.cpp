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
//    vector<int> findOrder(int numCourses, vector<vector<int>> prerequisites) {
//        vector<int> ans, need(numCourses, 0), vis(numCourses, 0);
//        vector<vector<int>> into(numCourses);
//        for (int i = 0; i < prerequisites.size(); i++) {
//            need[prerequisites[i][0]]++;
//            into[prerequisites[i][1]].push_back(prerequisites[i][0]);
//        }
//        for (int i = 0; i < numCourses; i++) {
//            int j = -1;
//            for (int q = 0; q < numCourses; q++) {
//                if (need[q] == 0 && vis[q] == 0) {
//                    vis[q] = 1;
//                    j = q;
//                    break;
//                }
//            }
//            if (j == -1) return {};
//            ans.push_back(j);
//            for (int q = 0; q < into[j].size(); q++)
//                need[into[j][q]]--;
//        }
//        return ans;
//    }
//};
//int main()
//{
//	int n;
//    Solution s;
//    vector<int> ans = s.findOrder(2, {});
//
//	return 0;
//}