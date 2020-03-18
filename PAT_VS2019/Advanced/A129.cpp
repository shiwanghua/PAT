////#include<iostream>
////#include<string>
////#include <iomanip>
////#include <vector>
////#include <cmath>
////#include<set>
////#include<map>
////#include<queue>
////#include<stack>
////#include<algorithm>
////#define _for(i,a,b) for( int i=a; i<b; ++i)
////#define mfor(i,b,a) for(int i=b;i>=a;i--)
////using namespace std;
////vector<int> num,in;
////bool cmp(int i, int j) {
////	if (num[i] != num[j]) return num[i] > num[j];
////	else return i < j;
////}
////int main()
////{
////	int n, k,t; cin >> n >> k;
////	num.resize(n + 1); 
////	cin >> t; num[t]++; in.push_back(t);
////	for (int i = 1; i < n; i++) {
////		cin >> t; 
////		sort(in.begin(), in.end(), cmp);
////		cout << t << ": " << in[0];
////		if (in.size() > k) { //  BUG: k全写成了3
////			/*int c = 1, j = 1;
////			while (c < k && j < in.size())
////			{
////				if (in[j] != in[j - 1]) {
////					c++; cout << " " << in[j];
////				}
////				j++;
////			}*/
////			_for(j, 1, k) cout << " " << in[j];
////		}
////		else {
////			_for(j, 1, in.size())
////				if(in[j]!=in[j-1]) cout << " " << in[j];
////		}
////		cout << endl;
////		if (count(in.begin(), in.end(), t) == 0) in.push_back(t);  // 查重
////		num[t]++;
////	}
////
////	return 0;
////}
//
//#include<iostream>
//#include<set>
//using namespace std;
//int book[50001] = { 0 };
//struct node {
//	int value; int cnt;
//	bool operator < (const node & a) const{
//		return cnt != a.cnt ? cnt > a.cnt:value < a.value;
//	}
//};
//int main() {
//	int n, k,num; cin >> n >> k >> num;
//	set<node> s;
//	s.insert({ num,1 });
//	book[num]++;
//	for (int i = 1; i < n;i++) {
//		cin >> num;
//		cout << num << ":";
//		int tempc = 0;
//		for (auto it : s) {
//			if (tempc < k)cout << " " << it.value;
//			else break;
//			tempc++;
//		}
//		cout << endl;
//		auto it = s.find({ num,book[num] });
//		//auto it = s.find(node{num, book[num]}); // 多了个node
//		if (it != s.end()) s.erase(it);
//		book[num]++;
//		s.insert({ num,book[num] });
//	}
//
//	return 0;
//}