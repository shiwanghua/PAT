//#include<iostream>
//#include<string>
//#include <map>
//#include <vector>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int n, k, w[2002], e[2002][2002], numP = 0, t;
//string t1, t2;
//bool v[2002] = { 0 };
//map<int, string> i_s;
//map<string, int>s_i, gang;
//int change(string s) {
//	if (s_i.find(s) != s_i.end())
//		return s_i[s];
//	s_i[s] = numP;
//	i_s[numP] = s;
//	return numP++;
//}
//void DFS(int index, int& num, int& head, int& totalValue) {
//	v[index] = 1;
//	num++;
//	if (w[index] > w[head])
//		head = index;
//	for (int i = 0; i < numP; i++) {
//		if (e[index][i] > 0) {
//			totalValue += e[index][i];
//			e[i][index] = e[index][i] = 0;
//			if (v[i] == 0)
//				DFS(i, num, head, totalValue);
//		}
//	}
//}
//int main()
//{
//	scanf("%d %d ", &n, &k);
//	_for(0, n) {
//		cin >> t1 >> t2 >> t;
//		int q1 = change(t1);
//		int q2 = change(t2);
//		w[q1] += t;
//		w[q2] += t;
//		e[q1][q2] += t; //  Bug2:  û����+=
//		e[q2][q1] += t;
//	}
//	for (int i = 0; i < numP; i++) {   //  Bug: ����С��n
//		if (v[i] == 0)
//		{
//			int value = 0, head = i, number = 0;
//			DFS(i, number, head, value);
//			if (value > k&& number > 2) {
//				gang[i_s[head]] = number;
//			}
//		}
//	}
//	cout << gang.size() << endl;
//	for (auto it : gang) {
//		cout << it.first << " " << it.second << endl;
//	}
//	return 0;
//}