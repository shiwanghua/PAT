//#include<iostream>
//#include <vector>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//vector<int> children[100];
//int generationNumber[101] = { 0 };
//void DFS(int root, int gen) {
//	generationNumber[gen]++;
//	for (int i = 0; i < children[root].size(); i++) 
//		DFS(children[root][i], gen + 1);
//}
//int main()
//{
//	int n, m, num = 0, index, tempC, maxNumber = 0, maxGen; scanf("%d%d", &n, &m);
//	_for(0, m) {
//		scanf("%d %d ", &index, &num);
//		for (int j = 0; j < num; j++) {
//			scanf("%d", &tempC);
//			children[index].push_back(tempC);
//		}
//	}
//	DFS(1, 1);  //  假设1号节点全是根节点, 结果全通过测试
//	_for(1, n + 1) // 最多有n代人
//		if (generationNumber[i] > maxNumber)
//		{
//			maxNumber = generationNumber[i];
//			maxGen = i;
//		}
//	cout << maxNumber << " " << maxGen;
//	return 0;
//}