//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//bool cmp(string a, string b)
//{
//	return a + b < b + a;
//}
//int main()
//{
//	int n; cin >> n;
//	string* s = new string[n];
//	_for(0, n) cin >> s[i];
//	sort(s, s + n, cmp);
//	//_for(0, n - 1)
//	//{
//	//	bool is = 1;
//	//	int l = s[i].length() < s[i + 1].length() ? s[i].length() : s[i + 1].length();
//	//	int j = 0;
//	//	for (; j < l; j++)
//	//		if (s[i][j] != s[i + 1][j])
//	//		{
//	//			is = 0;
//	//			break;
//	//		}
//	//	if (is)
//	//	{
//	//		if (s[i].length() == s[i + 1].length()) continue;
//	//		bool isMin = 1;
//	//		j = i;
//	//		for (; j < n; j++)
//	//			if (s[i+1][l] > s[j][0])
//	//				isMin = 0;
//	//		if (isMin) swap(s[i], s[i + 1]);
//	//	}
//	//}
//
//	// Bug: 可能前几个string都是0！！！
//	int i = 0;
//	while (stoi(s[i]) == 0 && i < n)i++;
//	if (i == n)cout << 0;
//	else {
//		cout << stoi(s[i]);
//		for (int j = i+1; j < n; j++)
//			cout << s[j];
//	}
//
//	return 0;
//}