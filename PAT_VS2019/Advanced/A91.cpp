//#include<iostream>
//#include <queue>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node { int x, y, z; }Node;
//int n, m, l, t, ti,  p[60][1286][128], visit[60][1286][128] = { 0 }, i, j, k;
//int main()
//{
//	int v = 0;
//	 cin >> m >> n >> l >> t;
//	_for(0, l) 
//		for (int j = 0; j < m; j++)
//			for (int k = 0; k < n; k++)
//				cin >> p[i][j][k];
//	for(int a=0;a<l;a++)
//		for (int b = 0; b < m; b++)
//			for (int c = 0; c < n; c++)
//			{
//				ti = 0;
//				if (p[a][b][c] == 0||visit[a][b][c]==1) continue;
//				queue<node> q;
//				Node.x = a, Node.y = b, Node.z = c;
//				q.push(Node);
//				visit[a][b][c] = 1;
//				while (!q.empty())
//				{
//					node top = q.front();
//					q.pop();
//					ti = ti + 1;
//					i = top.x, j = top.y, k = top.z;
//					if (i > 0 && p[i - 1][j][k] == 1 && visit[i - 1][j][k] == 0) {
//						Node.x = i - 1, Node.y = j, Node.z = k;
//						q.push(Node);
//						visit[i - 1][j][k] = 1;
//					}
//					if (i < l - 1 && p[i + 1][j][k] == 1 && visit[i + 1][j][k] == 0) {
//						Node.x = i + 1, Node.y = j, Node.z = k;
//						q.push(Node);
//						visit[i + 1][j][k] = 1;
//					}
//					if (j > 0 && p[i][j - 1][k] == 1 && visit[i][j - 1][k] == 0) {
//						Node.x = i, Node.y = j-1, Node.z = k;
//						q.push(Node);
//					    visit[i][j - 1][k] =1;
//					}
//					if (j < m - 1 && p[i][j + 1][k] == 1 && visit[i][j + 1][k] == 0) {
//						Node.x = i, Node.y = j + 1, Node.z = k;
//						q.push(Node);
//						visit[i][j + 1][k] = 1;
//					}
//					if (k > 0 && p[i][j][k-1] == 1&&visit[i][j][k-1]==0) {
//						Node.x = i, Node.y = j, Node.z = k-1;
//						q.push(Node);
//						visit[i][j][k - 1] = 1;
//					}
//					if (k < n - 1 && p[i][j][k + 1] == 1 && visit[i][j][k + 1] == 0) {
//						Node.x = i, Node.y = j, Node.z = k+1;
//						q.push(Node);
//						visit[i][j][k + 1] = 1;
//					}
//				}
//				if (ti >= t) v = v + ti;
//			}
//	cout << v;
//	return 0;
//}