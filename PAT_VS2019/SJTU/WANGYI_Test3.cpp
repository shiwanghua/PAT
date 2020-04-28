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
//int n, m, a, b, c, d;
//string s1,s2; char y;
//string v[7], ans[7];
//vector<char, string> fit, unfit;
//// 0%
//int main()
//{
//	cin >> n >> m;	
//	_for(i, 0, n) cin >> v[i];
//	s1 = v[0];
//	_for(i, 0, m)
//	{
//		s2.resize(n);
//		s2[0] = s1[i];
//		ans[i]=s2;
//	}
//	
//	while (true) {
//		cin >> a >> b >> y >> c >> d;
//		if (!a && !b && !c && !d) break;
//		s1 = v[a-1]; s2 = v[c-1];
//		b--; d--;
//		if (y == 'N') {
//			unfit[s1[b]] += s2[d];
//			unfit[s2[d]] += s1[b];
//		}
//		else {
//			fit[s1[b]] += s2[d];
//			fit[s2[d]] += s1[b];
//		}
//	}
//
//	_for (i, 0, n) {
//
//	}
//	return 0;
//}