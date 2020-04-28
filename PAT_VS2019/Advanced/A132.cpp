//#include<iostream>
//#include<string>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n,k; cin >> n;
//	string s;
//	_for(i, 0, n) {
//		cin >> s;
//		k = s.length();
//		int a = stoi(s);
//		int b = stoi(s.substr(0, k / 2));
//		int c = stoi(s.substr(k / 2, k / 2));
//		if (b*c==0||a % (b * c)) cout << "No\n";  //  Bug: 没考虑b、c可能为0
//		else cout << "Yes\n";
//	}
//	return 0;
//}