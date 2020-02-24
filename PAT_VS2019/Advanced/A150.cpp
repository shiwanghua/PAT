//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int nCity, nEdge, nPath, d[201][201], c1, c2, min_c1, minDis = 30000;
//	memset(d, 0, sizeof(d));
//	cin >> nCity >> nEdge;
//	_for(0, nEdge) {
//		cin >> c1 >> c2;
//		cin >> d[c1][c2];
//		d[c2][c1] = d[c1][c2];//  Bug1: 忘了写这句
//	}
//	cin >> nPath;
//	c1 = 1;
//	while (nPath--)
//	{
//		int C[201], v[201] = { 0 }, nc, TotalDist = 0, cycleNumber = 0, visitAll = 1,havePath=1;
//		scanf("%d ", &nc);
//		_for(0, nc) scanf("%d", &C[i]);
//		_for(0, nc - 1) {
//			if(v[C[i]]==0)  v[C[i]] = 1;
//			else cycleNumber++;
//			if (d[C[i]][C[i + 1]]>0)
//				TotalDist += d[C[i]][C[i + 1]];
//			else {
//				TotalDist += 20000;  //  该距离不存在
//				havePath = 0;
//				break;
//			}
//		}
//		if (v[C[nc - 1]] > 0)cycleNumber++;
//		else v[C[nc - 1]] = 1;
//		if (TotalDist < 20000) printf("Path %d: %d ", c1, TotalDist);
//		else printf("Path %d: NA ", c1);
//
//		if (nc <= nCity)
//			visitAll = 0;
//		else
//			_for(1, nCity + 1)
//			if (v[i] == 0) {
//				visitAll = 0;
//				break;
//			}
//		if (visitAll == 1 && C[0] == C[nc - 1] && cycleNumber == 1&& havePath==1)
//			printf("(TS simple cycle)\n");
//		else if (visitAll == 1 && C[0] == C[nc - 1]&& havePath==1)
//			printf("(TS cycle)\n");
//		else printf("(Not a TS cycle)\n");
//
//		if (visitAll == 1 && C[0] == C[nc - 1]&& minDis>TotalDist&&TotalDist<20000) {
//			minDis = TotalDist;
//			min_c1 = c1;
//		}
//		c1++;
//	}
//	printf("Shortest Dist(%d) = %d", min_c1, minDis);
//	return 0;
//}  