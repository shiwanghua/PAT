//#include<iostream>
//#include<iomanip>
//#include<string>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int num[255] = { 0 },max=0;
//	char c;
//	string s; 
//	getline(cin, s);
//	_for(0, s.length())
//	{
//		s[i] = tolower(s[i]);
//		num[s[i]]++;
//		if (isalpha(s[i])&&num[s[i]] >= max) {
//			if (num[s[i]] == max)
//				c = c < s[i] ? c : s[i];
//			else c = s[i];
//			max = num[s[i]];
//		}
//	}
//	cout << c << " " << max << endl;
//	return 0;
//}