//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n; cin >> n; string s; vector<double> v;
//	_for(i, 0, n) {
//		cin >> s;
//		bool is = 1;   // 是否合法
//		bool have = 0; // 是否存在小数点
//		for (int j = 0; j < s.length(); j++) {
//			if (j == 0 && (s[j] == '-' || s[j] == '+') && isdigit(s[j + 1])) continue;
//			//if ((j == s.length() - 3 || j == s.length() - 2) && s[j] == '.') continue;
//			if (s.length() > 2 && j == s.length() - 2 && s[j] == '.' && have == 0) { continue; }  //  有一位小数
//			else if (s.length() > 3 && j == s.length() - 3 && s[j] == '.') { have = 1; continue; }// 有两位小数
//			else if (j == s.length() - 1 && s[j] == '.' && have == 0) continue;  //  Bug: 没考虑最后一位可以是小数点的情况
//			if (!isdigit(s[j]))
//			{
//				is = 0;
//				break;
//			}
//		}
//		// 不需要判断前导0
//		//int j = 0; if (s[j] == '-') j++;
//		//if (j+1<s.length()&&s[j] == '0' && s[j+1] != '.') is = 0; 
//		if (is == 0) { cout << "ERROR: " << s << " is not a legal number\n"; continue; }
//		double t = stof(s);
//		if (t <= 1000 && t >= -1000) v.push_back(t);
//		else cout << "ERROR: " << s << " is not a legal number\n";
//	}
//	if (v.size() == 0) cout << "The average of 0 numbers is Undefined";
//	else if (v.size() == 1) cout << "The average of 1 number is " << fixed << setprecision(2) << v[0];  //  Bug:  少考虑了这一情况，而且这里也要输出两位小数
//	else {
//		double d = 0.0;
//		for (auto it : v)
//			d += it;
//		cout << "The average of " << v.size() << " numbers is " << fixed << setprecision(2) << d / v.size();
//	}
//	return 0;
//}