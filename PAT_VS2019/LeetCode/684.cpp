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
//    int v1, v2, n;
//    vector<int> ans, vis, vnum;
//    vector<vector<int>> e;
//    bool is;
//    void dfs(int vi, int last) {
//        if (vis[vi] || !is) {
//            is = 0; return;
//        }
//        vis[vi] = 1;
//        for (int i = 1; i <= n; i++)
//            if (e[vi][i] && i != last) dfs(i, vi);
//        return;
//    }
//    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
//        n = edges.size();
//        vnum.resize(n + 1, 0);
//        e.resize(n + 1);
//        for (int j = 1; j <= n; j++)
//            e[j].resize(n + 1);
//        for (int j = 0; j < n; j++)
//        {
//            e[edges[j][0]][edges[j][1]] = e[edges[j][1]][edges[j][0]] = 1;
//            vnum[edges[j][0]]++;
//            vnum[edges[j][1]]++;
//        }
//        int cen = 1;
//        while (vnum[cen] == 1) cen++;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            v1 = edges[i][0];
//            v2 = edges[i][1];
//            e[v1][v2] = e[v2][v1] = 0;
//            vis.resize(n + 1, 0);
//            fill(vis.begin(), vis.end(), 0);
//            is = 1;
//            dfs(cen, 0);
//            if (is) return edges[i];
//            e[v1][v2] = e[v2][v1] = 1;
//        }
//        return ans;
//    }
//};
//int main()
//{
//	int n;
//    vector<vector<int>> e(5,vector<int>(2));
//    for (int i = 0; i < 5; i++)
//        cin >> e[i][0] >> e[i][1];
//    Solution s;
//    vector<int> ans = s.findRedundantConnection(e);
//    if (ans.size() != 0) cout << ans[0] << " " << ans[1];
//	return 0;
//}
////[[1,2],[2,3],[3,4],[1,4],[1,5]]
////1 2
////2 3
////3 4
////1 4
////1 5