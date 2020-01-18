//#include<iostream>
//#include<string>
//#include <map>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	string s, a;
//	cin >> s >> a;
//	map<char, int> q;
//	for (int i = 0; i < s.length(); i++)
//		q[s[i]]++;
//	bool OK = 1;
//	int need = 0;
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (q[a[i]] > 0) q[a[i]]--;
//		else {
//			OK = 0;
//			need++;
//		}
//	}
//	if (OK) cout << "Yes " << s.length() - a.length();
//	else cout << "No " << need;
//
//	return 0;
//}