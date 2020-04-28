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
//
//int main()
//{
//	int m, n, s, cnt = 0; cin >> m >> n >> s;
//	string t;
//	vector<string> v;
//	_for(i, 1, m+1) {
//		cin >> t;
//		if (i < s) continue;
//		else if (i == s) v.push_back(t);
//		else cnt++;
//		if (cnt == n) {
//			if (count(v.begin(), v.end(), t) == 1) cnt--;
//			else {
//				v.push_back(t); cnt = 0;
//			}
//		}
//	}
//	if (v.size() == 0)cout << "Keep going...";
//	else _for(i, 0, v.size())
//		cout << v[i] << endl;
//
//	return 0;
//}