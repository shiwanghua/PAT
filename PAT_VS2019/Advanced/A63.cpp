//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <set>
//#include<algorithm>
//#define N 51 
//#define _for(a,b) for( int i=a; i<b; ++i)
//
//using namespace std;
//set<int> s[N];
//int main()
//{
//	int n, k, q, v, q1, q2;
//	cin >> n;
//	_for(1, n + 1)
//	{
//		cin >> k;
//		for (int j = 0; j < k; j++)
//		{
//			cin >> v;
//			s[i].insert(v);
//		}
//	}
//	cin >> q;
//	while (q--)
//	{
//		cin >> q1 >> q2;
//		int same = 0, total = s[q1].size();
//		for (set<int>::iterator it = s[q2].begin(); it != s[q2].end(); it++)
//			if (s[q1].find(*it) != s[q1].end()) same++;
//			else total++;
//		cout <<fixed<<setprecision(1)<< 100.0 * same / total << "%\n";
//	}
//	return 0;
//}