//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//bool isP(int  i) {
//	for (int j = 2; j * j <= i; j++)
//		if (i % j == 0)
//			return false;
//	return true;
//}
//int main()
//{
//	int n, m, s, t;
//	cin >> s >> n >> m;
//	while (!isP(s)) s++;
//	vector<int> v(s);
//	for (int i = 0; i < n; i++) {
//		cin >> t;
//		bool f = 0;
//		for (int j = 0; j < s; j++) {
//			int p = (t + j * j) % s;
//			if (v[p] == 0) {
//				v[p] = t; f = 1;
//				break;
//			}
//		}
//		if (f == 0) cout << t << " cannot be inserted.\n";
//	}
//	int cnt = 0, j;
//	for (int i = 0; i < m; i++) {
//		cin >> t;
//		for(j=0;j<=s;j++)
//			if (v[(t + j * j)%s] == t|| v[(t + j * j) % s] == 0) {
//				cnt += j + 1;	
//				break;
//			}
//		if (j == s+1) cnt += s+1;
//	}
//	printf("%.1f", double(cnt) / double(m));
//	return 0;
//}