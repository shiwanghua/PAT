//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//string d[9] = {"ctrip","editor","happy","program","student","surprise","system","travel","wellcome"};
//// 100%
//int main() {
//	string s;
//	int f[10][10],temp;
//	while (cin >> s) {
//		if (s.length() < 3 || s.length() > 10) {
//			cout << "null\n";
//			continue;
//		}
//		bool find = 0;
//		for (int i = 0; i < 9; i++) {
//			fill(f[0], f[0] + 100, 0);
//			string w = d[i];
//			if (s[0] != w[0]) f[0][0] = 1;
//			for (int j = 1; j < w.length(); j++) f[0][j] = f[0][j - 1] + 1;
//			for (int j = 1; j < s.length(); j++) f[j][0] = f[j-1][0] + 1;
//			for(int j=1;j<d[i].length();j++)
//				for (int k = 1; k < s.length(); k++) {
//					if (w[j] == s[k]) 
//						f[k][j] = f[k - 1][j - 1];   // Bug: 多写了个等号！
//					else {
//						temp = min(f[k - 1][j], f[k][j - 1]);
//						f[k][j] = min(temp, f[k - 1][j - 1]) + 1;
//					}
//				}
//			if (f[s.length() - 1][w.length() - 1] <= 2) {
//				cout << w << endl;
//				find = 1;
//				break;
//			}
//		}
//		if (!find) cout << "null\n";
//	}
//	return 0;
//}