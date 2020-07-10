//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//
////bool cmp(char a, char b) {
////	return a < b;
////}
////int main()
////{
////	int n;
////	stack<char> S;
////	string t="",s;
////	cin >> s;
////	
////
////	return 0;
////}
//bool check(vector<int> & count, int length) {
//	int sum = 0;
//	_for(i, 1, 50)
//		sum += i * count[i];
//	if (sum % length > 0) return 0;
//	for(int i=length;i>length/2;i--)
//		if (count[i] && count[length - i]) {
//			int less = min(count[i], count[length - i]);
//			count[i] -= less;
//			count[length - i] -= less;
//		}
//
//
//}
//int main() {
//	int n; cin >> n;
//	vector<int> count(51);
//	int l, minl = 51, maxl = 0;
//	_for(i, 0, n) {
//		cin >> l;
//		minl = min(minl, l);
//		maxl = max(maxl, l);
//		count[l]++;
//	}
//	for(int l=minl;l<51;l++)
//		if (check(count, l))
//		{
//			cout << l;
//			break;
//		}
//
//	
//	return 0;
//}