//#include<iostream>
//#include<string>
//#include <map>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct stu {
//	string id;
//	int Gp = -1, Gm = -1, Gf = -1, G;
//}s[30000];
//bool cmp(stu s1, stu s2) {
//	return s1.G != s2.G ? s1.G > s2.G: s1.id < s2.id;
//}
//int main()
//{
//	int p, m, n,num=0,score; cin >> p >> m >> n;
//	string t;
//	map<string, int> have;
//	_for(i, 0, p) {
//		cin >> t >> score;
//		if (score >= 200) { // have[t] == 0 && 
//			s[++num].id = t; 
//			s[num].Gp = score;
//			have[t] = num;
//		}
//	}
//	_for(i, 0, m) {
//		cin >> t >> score;
//		if (have[t] > 0) // 可以舍去
//			s[have[t]].Gm = score;
//	}
//	_for(i, 0, n) {
//		cin >> t >> score;
//		if (have[t] > 0)
//			s[have[t]].Gf = score;
//	}
//	_for(i, 1, num + 1) 
//		s[i].G = s[i].Gm > s[i].Gf ? 0.4 * double(s[i].Gm) + 0.6 * double(s[i].Gf)+0.5 : s[i].Gf; //  Bug: 应该加0.5
//	sort(s + 1, s + num + 1, cmp);
//	_for(i, 1, num + 1)
//		if (s[i].G >= 60)
//			cout << s[i].id << " " << s[i].Gp << " " << s[i].Gm << " " << s[i].Gf << " " << s[i].G << endl;
//		else break;
//	return 0;
//}