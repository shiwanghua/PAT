//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	int* v = new int[n+1];
//	_for(i,1, n+1) cin >> v[i];
//	vector<int> more;
//	int minMore = 9999999, get = 0, k = 1;
//	_for(i, 1, n+1)
//	{
//		_for(j, k, n+1)
//		{
//			get += v[j];
//			if (get == m) {
//				cout << i << "-" << j << endl;
//				minMore = 0;
//				k = j;
//				break;
//			}
//			else if (get > m)
//			{
//				k = j;
//				if (minMore > get - m)
//				{
//					minMore = get - m;
//					more.clear();
//				}
//				else if (minMore < get - m)
//					break;
//				more.push_back(i);  //  大于等于时push
//				more.push_back(j);
//				break;
//			}
//		}
//		get -= v[i];
//		if (k > i) get -= v[k];
//		else k = i+1;    //    Bug:  没有这句就不能输出只有一个数的情况
//	}
//	if (minMore > 0)
//	{
//		for(int i= 0; i<more.size();i+=2)
//			cout << more[i] << "-" << more[i + 1] << endl;
//	}
//	return 0;
//}