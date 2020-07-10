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
//struct h {
//	int p, c;
//};
//bool cmp(h h1, h h2) {
//	return h1.p < h2.p;
//}
//int main()
//{
//	/*int n,m;
//	cin >> n >> m;
//	if (m == 1)  cout << (float)(n + 1) / 2;*/
//	int n, m;
//	cin >> n >> m;
//	vector<h> H(m);
//	for (int i = 0; i < m; i++) {
//		cin >> H[i].p >> H[i].c;
//	}
//	sort(H.begin(), H.end(), cmp);
//	int cost = 0,load=0,i=0;
//	while (load < n) {
//		if (load + H[i].c < n) cost += H[i].p * H[i].c;
//		else cost += H[i].p * (n - load);
//		load += H[i].c;
//		i++;
//		if (i == m) break;
//	}
//	cout << cost;
//	return 0;
//}