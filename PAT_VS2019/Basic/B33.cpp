//#include<iostream>
//#include<string>
//#include <cctype>
//
//using namespace std;
//
//int shang = 1;
//bool al[26] = { 0 };   //  Bug�� ֱ�ӵ���1��ֻ�е�һ��Ԫ��Ϊtrue
//bool could(char a, string s)
//{
//	if (s.find(toupper(a)) != string::npos) return false;    //  Bug: û�м�toupper������û��ϵ
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
//		else if (isalpha(s[i])) al[s[i] - 'A'] = 1; //  s[i]һ���Ǵ�д
//	for (int i = 0; i < c.length(); i++)
//	{
//		if (could(c[i], s))
//			if (shang || (!shang &&!isupper(c[i])) ) //   ���������д��
//			{
//				cout << c[i];
//				out = 1;
//			}
//	}
//	if (!out) cout << endl;
//	return 0;
//}