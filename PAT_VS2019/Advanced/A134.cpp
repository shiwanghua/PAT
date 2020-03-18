//#include<iostream>
//#include<cstring>
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
//
//int main()
//{
//	int n, m, q,t,t2; cin >> n >> m;
//	m = m * 2;
//	vector<int> v; v.resize(m);
//	vector<int> e; 
//	_for(i, 0, m) cin >> v[i];
//	cin >> q;
//	_for(i, 0, q) {
//		bool is = 1;
//		cin >> t;
//		e.clear(); e.resize(n);
//		_for(j, 0, t) {
//			cin >> t2;
//			e[t2] = 1;
//		}
//		for (int j = 0; j < m; j += 2)
//		{
//			if (e[v[j]] == 0 && e[v[j + 1]] == 0) {
//				is = 0; break;
//			}
//		}
//		if (is) cout << "Yes\n";
//		else cout << "No\n";
//	}
//	return 0;
//}