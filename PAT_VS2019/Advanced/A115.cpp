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
//struct node {
//	int l=-1, r=-1, d, h=1;
//}no[1000];
//int main()
//{
//	int n, t; cin >> n >> t;
//	no[0].d = t;   //  Bug1:  根节点需要额外考虑
//	_for(i, 1, n) {
//		cin >> t;
//		no[i].d=t;
//		int root = 0;
//		while (1) {
//			if (t <= no[root].d) {
//				if (no[root].l > -1) root = no[root].l;
//				else {
//					no[root].l = i;
//					break;
//				}
//			}
//			else {
//				if (no[root].r > -1) root = no[root].r;
//				else {
//					no[root].r = i;
//					break;
//				}
//			}
//		}
//		no[i].h = no[root].h + 1;
//	}
//	int maxH = -1, num1 = 0, num2 = 0;
//	_for(i, 0, n) 
//		if (maxH < no[i].h) maxH = no[i].h;
//	_for(i, 0, n) if (no[i].h == maxH) num1++;
//	maxH--;
//	_for(i, 0, n) if (no[i].h == maxH) num2++;
//	cout << num1 << " + " << num2 << " = " << num1 + num2;
//	return 0;
//}