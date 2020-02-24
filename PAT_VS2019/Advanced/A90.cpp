//#include<iostream>
//#include<string>
//#include <cmath>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, fa[100000], maxD = -1, num = 0, deep[100000] = { 0 };
//	double p, r;
//	scanf("%d %lf %lf\n", &n, &p, &r);
//	_for(0, n)scanf("%d", &fa[i]);
//	_for(0, n) {
//		int d = 0, g = i;
//		while (fa[g] != -1) {
//			if (deep[g] != 0) {
//				deep[i] = deep[g] + d;
//				break;
//			}
//			g = fa[g];
//			d++;
//		}
//		if (deep[i] == 0)deep[i] = d;
//		if (deep[i] > maxD) {
//			maxD = deep[i];
//			num = 1;
//		}
//		else if (deep[i] == maxD) num++;
//	}
//	printf("%.2f %d", p*pow((1+r/100),maxD),num);
//
//	return 0;
//}