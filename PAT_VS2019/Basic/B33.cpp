//#include<iostream>
//#include<string>
//#include <cctype>
//
//using namespace std;
//
//int shang = 1;
//bool al[26] = { 0 };   //  Bug： 直接等于1则只有第一个元素为true
//bool could(char a, string s)
//{
//	if (s.find(toupper(a)) != string::npos) return false;    //  Bug: 没有加toupper，不过没关系
//	else if (isalpha(a) && al[toupper(a) - 'A'] == 1) return false;
//	else return true;
//}
//int main()
//{
//	string s,c;
//	bool out = 0;
//	cin >> s >> c;
//	for (int i = 0; i < s.length(); i++)
//		if (s[i] == '+')
//		    shang = 0;
//		else if (isalpha(s[i])) al[s[i] - 'A'] = 1; //  s[i]一定是大写
//	for (int i = 0; i < c.length(); i++)
//	{
//		if (could(c[i], s))
//			if (shang || (!shang &&!isupper(c[i])) ) //   不能输出大写了
//			{
//				cout << c[i];
//				out = 1;
//			}
//	}
//	if (!out) cout << endl;
//	return 0;
//}