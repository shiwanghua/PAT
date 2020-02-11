//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, k; cin >> n >> k;
//	vector<string> course[2501];   //  Bug: 2500会有段错误，是从1算起的，最多2500门课
//	string name; int c,c_no,s;
//	_for(0, n)
//	{
//		cin >> name >> c;
//		for (int j = 0; j < c; j++)
//		{
//			cin >> c_no;
//			course[c_no].push_back(name);
//		}
//	}
//	_for(1, k + 1)
//	{
//		s = course[i].size();
//		cout << i << " " <<s<< endl;
//		if (!s) continue;
//		else if (s > 50) sort(course[i].begin(), course[i].end());
//		else
//		for (int j = 1; j < s; j++)
//		{
//			int J = j;
//			string t = course[i][J];
//			J--;
//			while (J >= 0 && t < course[i][J])
//			{
//				course[i][J + 1] = course[i][J];
//				J--;
//			}
//			course[i][J + 1] = t;
//		}
//		for (int j = 0; j < s; j++)
//			cout << course[i][j] << endl;
//	}
//	return 0;
//}