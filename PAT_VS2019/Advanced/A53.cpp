//#include<iostream>
//#include <vector>
//#include<algorithm>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//struct node {
//	vector<int> children;
//	int w;
//}N[100];
//vector<int> path;
//int n, m, s;
//bool cmp(int i, int j) {
//	return N[i].w > N[j].w;
//}
//void DFS(int index, int weight) {
//	int nowW = N[index].w + weight;
//	if (N[index].children.size() == 0|| nowW>s) {
//		if (nowW == s) {
//			_for(0, path.size()-1) 
//				printf("%d ", N[path[i]].w);
//			printf("%d\n", N[*(path.end()-1)].w);
//		}
//		return;
//	}
//	sort(N[index].children.begin(), N[index].children.end(),cmp);
//	_for(0, N[index].children.size()) {
//		path.push_back(N[index].children[i]);
//		DFS(N[index].children[i], nowW);
//		path.pop_back();
//	}
//	return;
//}
//int main()
//{
//	int t,k,id; scanf("%d%d%d", &n, &m, &s);
//	_for(0, n)
//		scanf("%d", &N[i].w);
//	_for(0, m) {
//		scanf("%d%d", &id,&k);
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &t);
//			N[id].children.push_back(t);  //  Bug: id 少写了一个d
//		}
//	}
//	path.push_back(0);
//	DFS(0, 0);
//	return 0;
//}