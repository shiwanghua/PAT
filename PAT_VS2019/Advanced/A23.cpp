//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	reverse(s.begin(), s.end());
//	int l = s.length(), jin = 0, d;
//	int num[10] = { 0 };
//
//	for (int i = 0; i < l; i++)
//	{
//		num[s[i] - '0']++;
//		d = jin + (s[i] - '0') * 2;
//		s[i] = d % 10 + '0';
//		jin = d / 10;
//	}
//	if (jin) {
//		cout << "No\n";
//		 while (jin > 0)
//		 {
//			 s += to_string(jin % 10);
//		 	jin = jin / 10;
//		 	l++;
//		 }
//		//可以直接把上面的while改成下面的cout
//		//cout << jin;
//		for (int i = l - 1; i >= 0; i--)
//			cout << s[i];
//	}
//	else {
//		for (int j = 0; j < l; j++)
//			num[s[j] - '0']--;
//		bool is = 1;
//		for (int k = 0; k < 10; k++)   // Bug: 这里是10不是小于l
//			if (num[k] != 0)
//				is = 0;
//		if (is) cout << "Yes\n";
//		else cout << "No\n";
//		for (int i = l - 1; i >= 0; i--)
//			cout << s[i];
//	}
//	return 0;
//}