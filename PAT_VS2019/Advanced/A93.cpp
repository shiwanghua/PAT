//#include<iostream>
//#include<string>
//#include <iomanip>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	string s; cin >> s;
//	int l = s.length();
//	int* p = new int[l];
//	int* a = new int[l];
//	int* t = new int[l];
//	int pn = 0, an = 0, tn = 0, num = 0;
//	_for(0, l)
//	{
//		if (s[i] == 'P') p[pn++] = i;
//		else if (s[i] == 'A')a[an++] = i;
//		else if (s[i] == 'T') t[tn++] = i;
//	}
//	int ai = 0, ti = 0;
//	_for(0, pn)
//	{
//		while (ai<an&& a[ai] < p[i] ) ai++;
//		if (ai == an) break;
//		while (ti < tn && t[ti] < a[ai]) ti++;
//		if (ti == tn) break;
//		int fa = ai, ft = ti;
//		for (; fa < an; fa++)
//		{
//			while (ft < tn && t[ft] < a[fa])ft++;
//			num = num + tn - ft;
//		}
//	}
//	cout << num% 1000000007;
//	return 0;
//}#include<iostream>
//#include<string>
//#include <iomanip>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	string s; cin >> s;
//	int l = s.length();
//	int* p = new int[l];
//	int* a = new int[l];
//	int* t = new int[l];
//	int pn = 0, an = 0, tn = 0, num = 0;
//	_for(0, l)
//	{
//		if (s[i] == 'P') p[pn++] = i;
//		else if (s[i] == 'A')a[an++] = i;
//		else if (s[i] == 'T') t[tn++] = i;
//	}
//	int ai = 0, ti = 0;
//	_for(0, pn)
//	{
//		while (ai<an&& a[ai] < p[i] ) ai++;
//		if (ai == an) break;
//		while (ti < tn && t[ti] < a[ai]) ti++;
//		if (ti == tn) break;
//		int fa = ai, ft = ti;
//		for (; fa < an; fa++)
//		{
//			while (ft < tn && t[ft] < a[fa])ft++;
//			num = num + tn - ft;
//		}
//	}
//	cout << num% 1000000007;
//	return 0;
//}