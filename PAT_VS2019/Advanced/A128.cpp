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
//	int n, k,in[1001],row[1001],is,t1,t2; cin >> k;
//	_for(0, k) {
//		cin >> n;
//		is = 1;
//		memset(row, 0, sizeof(row));
//		for (int j = 1; j < 1+n; j++) {
//			cin >> in[j];
//			row[in[j]] = 1;
//		}
//		for (int j = 1; j < n + 1; j++)if (row[j] == 0) is = 0;
//		if (is == 0) { cout << "NO\n"; continue; }
//		for(int j=1;j<=n;j++)
//			for (int m = j+1; m <= n; m++) {
//				t1 = m -j ;
//				t2 = in[m] - in[j];
//				if (t2 == t1 || t2 + t1 == 0)
//				{
//					is = 0;
//					break;
//				}
//			}
//		if (is == 0) cout << "NO\n";
//		else cout << "YES\n";
//	}
//
//
//	return 0;
//}