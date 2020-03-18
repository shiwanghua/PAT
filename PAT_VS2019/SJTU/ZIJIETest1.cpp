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
////bool cmp(map<string, vector<string>> ::iterator t1, map<string, vector<string>> ::iterator t2) {
////	return t1->first < t2->first;
////}
//// 33%
//int main()
//{
//	int n; cin >> n;
//	string a, b;
//	map<string, vector<string>> v;
//	map<string, int> m;
//	string* s = new string[n]; int s_num = 0;
//	_for(i, 0, n) {
//		cin >> a >> b;
//		if (m[b] == 0) {
//			m[b] = 1; s[s_num++] = b;
//		}
//		v[b].push_back(a);
//	}
//	sort(s,s+s_num);
//	for (auto it : v)
//		sort(it.second.begin(), it.second.end());
//	for (int i = 0; i < s_num;i++) {
//		cout << s[i];
//		for (int j = 0; j < v[s[i]].size(); j++)
//			cout << " " << v[s[i]][j];
//		cout << endl;
//	}
//
//	return 0;
//}