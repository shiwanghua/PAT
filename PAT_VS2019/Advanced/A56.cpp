//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<queue>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//struct mouse {
//	int r, m;
//};
//int main()
//{
//	int ng, np,t; cin >> np >> ng;
//	mouse* mou = new mouse[np];
//	_for(0, np) cin >> mou[i].m;
//	queue<int> q;
//	_for(0, np) {
//		cin >> t;
//		q.push(t);
//	}
//	int group, n = np;
//	while (q.size() > 1)
//	{
//		group = n / ng;
//		if (n % ng) group++;
//		_for(0, group)
//		{
//			t = q.front();
//			for (int j = 0; j < ng; j++)
//			{
//				if (i * ng + j >= n) break;
//				if (mou[q.front()].m > mou[t].m) t = q.front();
//				mou[q.front()].r = group + 1;
//				q.pop();
//			}
//			q.push(t);
//		}
//		n = group;
//	}
//	mou[q.front()].r = 1;
//	cout << mou[0].r;
//	_for(1, np)
//		cout <<" "<< mou[i].r;
//
//	return 0;
//}