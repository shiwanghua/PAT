//#include<iostream>
//#include <vector>
//#include<algorithm>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct stu {
//	int gi, ge, * c, r, id, f;
//};
//bool cmp(stu s1, stu s2)
//{
//	return s1.f != s2.f ? s1.f > s2.f:s1.ge > s2.ge;
//}
//int main()
//{
//	int n, m, k;
//	cin >> n >> m >> k;
//	int* q = new int[m];
//	stu* s = new stu[n];
//	_for(0, m)cin >> q[i];
//	_for(0, n)
//	{
//		s[i].id = i;
//		cin >> s[i].ge >> s[i].gi;
//		s[i].f = s[i].ge + s[i].gi;
//		s[i].c = new int[k];
//		for (int j = 0; j < k; j++) cin >> s[i].c[j];
//	}
//	sort(s, s + n, cmp);
//	s[0].r = 1;
//	_for(1, n)
//	{
//		if (s[i].f < s[i - 1].f || (s[i].f == s[i - 1].f && s[i].ge < s[i - 1].ge)) s[i].r = i + 1;
//		else s[i].r = s[i - 1].r;
//	}	
//
//	vector<vector<int>> school(m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			int c = s[i].c[j];
//			if (school[c].size() < q[c] || (school[c].size()>0&&s[i].r == s[school[c][school[c].size() - 1]].r))   // Bug: 应该是和这个学校录取的最后一名的名次比
//			{                            // Bug: size()可能为0，不能减一，也就是这个学校没有录取人数！
//				school[c].push_back(s[i].id);  // i!=s[i].id
//				break;
//			}
//		}
//	}
//	_for(0, m)
//	{
//		if (school[i].size() == 0)
//		{
//			cout << endl;
//			continue;
//		}
//		sort(school[i].begin(), school[i].end());
//		for (int j = 0; j < school[i].size() - 1; j++)
//			cout << school[i][j] << " ";
//		cout << school[i][school[i].size() - 1] << endl;
//	}
//	delete q;
//	_for(0, n)
//		delete s[i].c;
//	delete s;
//	return 0;
//}