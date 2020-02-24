//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//vector<int> v[101];
//int deepNum[101] = { 0 }, maxDeepth = 0;
//void DFS(int index, int deep) {
//	if (deep > maxDeepth)
//		maxDeepth = deep;
//	if (v[index].size() == 0) {
//		deepNum[deep]++;
//		return;
//	}
//	for (int i = 0; i < v[index].size(); i++) 
//		DFS(v[index][i], deep + 1);
//	return;
//}
//int main()
//{
//	int n,m,num,id,temp; scanf("%d", &n);
//	if (n == 0) return 0;
//	scanf("%d", &m);
//	_for(0, m) {
//		scanf("%d%d",&id, &num);
//		for (int j = 0; j < num; j++)
//		{
//			scanf("%d", &temp);
//			v[id].push_back(temp);
//		}
//	}
//	DFS(1, 0);
//	for (int j = 0; j < maxDeepth;j++)
//		cout << deepNum[j] << " ";
//	cout << deepNum[maxDeepth];
//	return 0;
//}