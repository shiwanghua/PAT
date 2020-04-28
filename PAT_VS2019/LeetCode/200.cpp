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
//    int x[3] = { 0,1,0 };
//    int y[3] = { -1,0,1 };
//    int numIslands(vector<vector<char>>& grid) {
//        int m = grid.size(), n = grid[0].size(), ans = 0, tx, ty;
//		  if(m==0) return 0;
//        vector<vector<int>> vis(m, vector<int>(n, 0));
//        for (int i = 0; i < m; i++)
//            for (int j = 0; j < n; j++) {
//                if (vis[i][j] || grid[i][j] == '0') continue;
//                queue<pair<int, int>> q;
//                q.push({ i,j });
//                vis[i][j] = 1;
//                while (!q.empty()) {
//                    pair<int, int> p = q.front();
//                    q.pop();
//                    for (int k = 0; k < 3; k++) {
//                        tx = x[k] + p.first;
//                        ty = y[k] + p.second;
//                        if (tx < 0 || tx >= m || ty >= n || ty < 0 || vis[tx][ty] || grid[tx][ty] == '0') continue;
//                        q.push({ tx,ty });
//                        vis[tx][ty] = 1;
//                    }
//                }
//                ans++;
//            }
//        return ans;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<vector<char>> grid(4, vector<char>(5));
//    for (int i = 0; i < 4; i++)
//        _for(j, 0, 5)
//        cin >> grid[i][j];
//    cout << s.numIslands(grid);
//	return 0;
//}