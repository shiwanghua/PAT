//#include<iostream>
//#include<string>
//#include<map>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n; cin >> n;
//	string in, ans = "", skey = "";
//	map<char, int> m;
//	cin >> in;
//	//if (in.length() == n) { cout << in[0] << endl << in; return 0; }
//	_for(i, 0, in.length() - n + 1) m[in[i]] = 1;
//	//_for(i, in.length() - n + 1, in.length()) m[in[i]] = 0;  // 这一行是多余的。。检查了好久
//	_for(i, 0, in.length() - n + 1) {
//		bool is = 1;
//		char c = in[i];
//		if (m[c] == 0) continue;
//		_for(j, 1 + i, i + n)
//			if (in[j] != c) {
//				is = 0; break;
//			}
//		if (!is) m[c] = 0;
//		else i += n - 1; //  Bug1: 少了这一句
//	}
//	_for(i, 0, in.length())
//		if (m[in[i]] && skey.find(in[i]) == string::npos) 
//			skey += in[i];
//
//	_for(i, 0, in.length()) {
//		ans += in[i];
//		if (m[in[i]]) i += n - 1;
//	}
//	cout << skey << endl << ans;
//	return 0;
//}