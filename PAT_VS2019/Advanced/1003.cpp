//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//
//#define _for(i,a,b) for( int i=(a); i<(b); ++i)
//#define mfor(i,a,b) for(int i=(a);i>=(b);--i)
//
//using namespace std;
//
//int main()
//{
//	const int inf = 999999999;
//	int n, m,c1,c2;
//	cin >> n >> m >> c1 >> c2;
//	// e是无向图的路径权重的邻接矩阵, weight是每个城市救援队数量
//	//w[i]是从c1到第i个城市的各种最短路径上的救援队数之和的最大值
//	//dis[i]是c1到第i个城市的最短距离, num[i]是c1到第i个城市的最短路径的条数
//	int e[501][501], weight[501], w[501] = { 0 }, dis[501], num[501] = { 0 };
//	bool visit[501] = { 0 };
//	fill(e[0], e[0] + 501 * 501, inf);  //  二维数组用e[0], 不能用e
//	fill(dis, dis + 501, inf);
//	dis[c1] = 0;
//	num[c1] = 1;
//	
//	_for(i, 0, n) cin >> weight[i];
//	w[c1] = weight[c1];
//	_for(i, 0, m)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		e[a][b] = e[b][a] = c;
//	}
//
//	_for(i, 0, n)
//	{
//		int min_dis = inf, min_i=-1;
//		_for(j, 0, n)
//		{
//			if (visit[j] == 0 && min_dis > dis[j])
//			{
//				min_i = j;
//				min_dis = dis[j];
//			}
//		}
//		if (min_i == -1) // 可以visit的顶点全部访问过了
//			break;
//		visit[min_i] = 1;
//
//		_for(j, 0, n)
//		{
//			if (visit[j]==0 && dis[j] > e[min_i][j] + dis[min_i])
//			{
//				dis[j] = e[min_i][j] + dis[min_i];
//				w[j] = weight[j]+w[min_i];
//				num[j] = num[min_i];
//			}
//			else if (visit[j] == 0 && dis[j] == e[min_i][j] + dis[min_i])
//			{
//				if(w[j]<weight[j]+w[min_i])
//					w[j] = weight[j] + w[min_i];
//				num[j] += num[min_i];
//			}
//		}
//	}
//	
//	printf("%d %d", num[c2], w[c2]);
//	return 0;
//}