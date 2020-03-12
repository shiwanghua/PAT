//#include<iostream>
//#include <vector>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//
//using namespace std;
//int e[2][50], num = 0, n;
//void dfs(int i, int j) {
//	if (i == 1 && j == n - 1) {
//		num++;
//		return;
//	}
//	if (j == n - 1) return;
//	j++;
//	if (e[i][j] == 0) dfs(i, j);
//	if (i == 0 && e[1][j] == 0)  dfs(1, j);
//	else if (i == 1 && e[0][j] == 0) dfs(0, j);
//	return;
//}
//  //Í¨¹ý27%
//int main()
//{
//	char c;
//	scanf("%d\n", &n);
//	_for(i, 0, 2)
//	{
//		_for(j, 0, n)
//		{
//			scanf("%c", &c);
//			if (c == '.') e[i][j] = 0;
//			else if (c == 'X') e[i][j] = 1;
//		}
//		getchar();
//	}
//	dfs(0, 0);
//	if (num == 0) num = -1;
//	cout << num;
//	return 0;
//}