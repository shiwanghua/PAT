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
//bool e[200][200]; 
//int mincnt = 1000000, starti, startj, endi, endj, m, mi[200][200], n;
//map<int, int> mai,maj, ma2i,ma2j;  //  �洢���������ŵ�����λ��
//void dfs(int i, int j,int cnt) {
//	if (j == endj && i == endi) {
//		if (cnt < mincnt) mincnt = cnt;
//		return;
//	}
//	e[i][j] = 1;
//	if (i > 0 && e[i - 1][j] == 0 && mi[i - 1][j] != -1) // ����
//		dfs(i - 1, j, cnt + 1);
//	if (i < n - 1 && e[i + 1][j] == 0 && mi[i + 1][j] != -1) // ����
//		dfs(i + 1, j, cnt + 1);
//	if (mi[i][j] > 0) {  //  ˲��
//		int t = mi[i][j];
//		if (mai[t]-1!=i)
//		{
//			if(e[mai[t]-1][maj[t]-1]==0)
//			dfs(mai[t]-1, maj[t]-1, cnt + 1);
//		}
//		else {
//			if (e[ma2i[t]-1][ma2j[t]-1] == 0)
//				dfs(ma2i[t]-1, ma2j[t]-1, cnt + 1);
//		}
//	}
//	if (j < m - 1 && e[i][j + 1] == 0 && mi[i][j + 1] != -1) //  �ұ���
//		dfs(i, j + 1, cnt + 1);
//	
//	if (j > 0 && e[i][j - 1] == 0 && mi[i][j - 1] != -1)  // ����
//		dfs(i, j - 1, cnt + 1);
//	e[i][j] = 0;
//	return;
//}
//// 25%
//int main()
//{
//	int  t;
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> t;
//			mi[i][j]=t;
//			if (t == -2) {
//				starti = i;
//				startj = j;
//				continue;
//			}
//			else if (t == -3) {
//				endi = i;
//				endj = j;
//				continue;
//			}
//			if (t <= 0) continue;
//			if (mai[t] == 0) {  // Bug1: mai[t]�п���������0���������Ƿ�Ϊ0���ж��Ƿ��м�¼�����������涼+1
//				mai[t] = i+1; // ��һ�γ���
//				maj[t] = j+1;
//			}
//			else  // �ڶ��γ���
//			{
//				ma2i[t] = i+1;
//				ma2j[t] = j+1; // Bug2: tд����j 
//			}
//		}
//	}
//	fill(e[0], e[0] + 200 * 200, 0);
//	dfs(starti, startj, 0);
//	cout << mincnt;
//	return 0;
//}
//
////4 3
////1 0 -1 1
////-2 0 -1 -3
////2 2 0 0