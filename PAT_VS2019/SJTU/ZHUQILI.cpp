//
//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<unordered_map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//
//int main()
//{
//	string str, ans = "";
//	char c;
//	vector<int> s; //  set
//	unordered_map<char, bool> exist;
//	bool contain = 1;
//	int size;
//	cin >> str >> size;
//	for (auto& c : str) exist[c] = 1;
//
//	_for(i, 0, size) {
//		cin >> c;
//		s.push_back(c);
//		if (exist[c] == 0)
//			contain = 0;
//	}
//	if (!contain) cout << "NA";
//
//	int strCount[26] = { 0 }, setCount[26] = { 0 };
//	for (auto& c : s) setCount[c - 'a']++;
//	int l = 0, r = 0, containNumber = 0;
//
//	while (r < str.length()) {
//		int ci = str[r] - 'a';
//		if (setCount[ci] > strCount[ci])
//			containNumber++;
//		strCount[ci]++;
//		while (l < r) {
//			int ci2 = str[l] - 'a';
//
//			if (setCount[ci2] == 0) { // ���������ַ�����ֱ��ȥ��
//				strCount[ci2]--;
//				l++;
//				continue;
//			}
//			if (containNumber == size) {
//				if (ans == "") ans = str.substr(l, r - l + 1);
//				else if (ans.size() > (r - l + 1))
//					ans = str.substr(l, r - l + 1);
//				else if (ans.size() == (r - l + 1))
//					ans = min(ans, str.substr(l, r - l + 1));// ȡ�ֵ�����С
//			}
//
//			if (strCount[ci2] > setCount[ci2]) {  //  ����ȥ�������ַ������ࣩ
//				strCount[ci2]--;
//				l++;
//			}
//			else break;
//
//		}
//		r++;
//	}
//	cout << ans;
//
//	return 0;
//}