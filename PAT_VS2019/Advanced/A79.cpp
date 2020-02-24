//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	int deepth = 0, value = 0;
//	vector<int> c;
//}N[100000];
//void DFS(int i) {
//	int d = N[i].deepth + 1;
//	for (int j = 0; j < N[i].c.size(); j++) {
//		N[N[i].c[j]].deepth = d;
//		DFS(N[i].c[j]);
//	}
//}
//int main()
//{
//	int n, t, temp;
//	double p, r;
//	scanf("%d %lf %lf", &n, &p, &r);
//	_for(0, n) {
//		scanf("%d", &t);
//		if (t == 0)
//			scanf("%d", &N[i].value);
//		else {
//			for (int j = 0; j < t; j++) {
//				scanf("%d", &temp);
//				N[i].c.push_back(temp);
//			}
//		}
//	}
//	DFS(0);
//	double sale = 0.0, s[100000] = { 0.0 }, rr = 1 + r / 100;// Bug: s要开十万，表示十万层的深度
//	s[0] = p;
//	_for(1, 100000)
//		s[i] = s[i - 1] * rr;
//	_for(0, n)
//		if (N[i].value != 0)
//			sale += N[i].value * s[N[i].deepth];
//	printf("%.1lf", sale);
//	return 0;
//}