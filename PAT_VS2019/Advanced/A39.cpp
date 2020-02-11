//#include<iostream>
//#include<string>
//#include <map>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, c,cou,ncou; cin >> n >> c;
//	map<string, vector<int>> m;
//	string name;
//	while (c--)
//	{
//		cin >> cou>>ncou;
//		_for (0, ncou)
//		{
//			cin >> name;
//			m[name].push_back(cou);
//		}
//	}
//	string* names = new string[n];
//	_for(0,n)
//		cin >> names[i];
//	_for(0,n)
//	{
//		vector<int> v = m[names[i]];
//		int l = v.size();
//		for (int q = 1; q < l; q++)
//		{
//			int Q = q, t = v[Q];
//			Q--;
//			while (Q>=0&&t < v[Q])
//			{
//				v[Q+1] = v[Q];
//				Q--;
//			}
//			v[Q + 1] = t;
//			m[names[i]] = v;
//		}
//		cout << names[i] << " " << l;
//		for (int j = 0; j < l;++j) cout <<" "<< m[names[i]][j];
//		cout << endl;
//		
//	}
//	return 0;
//}     