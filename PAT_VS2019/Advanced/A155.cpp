//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int n, * t;
//vector<int> v;
//void dfs(int index)
//{
//	int index2 = 2 * index;
//	if (index2 > n)   //  index是叶节点
//	{
//		_for(0, v.size())
//			printf("%d%s", v[i], i < v.size() - 1 ? " " : "\n");
//	}
//	else {
//		int index3 = index2 + 1;
//		if (index3 <= n)  //  存在右孩子
//		{
//			v.push_back(t[index3]);
//			dfs(index3);
//			v.pop_back();
//		}
//		if (index2 <= n)  //  存在左孩子
//		{
//			v.push_back(t[index2]);
//			dfs(index2);
//			v.pop_back();
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	t = new int[n+1];
//	_for(1, n+1) cin >> t[i];
//	v.push_back(t[1]);
//	dfs(1);
//	bool isMin = 1, isMax = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		if (t[i / 2] < t[i])isMax = 0;
//		else if (t[i / 2] > t[i])  isMin = 0;
//	}
//	if (isMin) cout << "Min Heap";
//	else if (isMax) cout << "Max Heap";
//	else cout << "Not Heap";
//	return 0;
//}