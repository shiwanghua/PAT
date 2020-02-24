//#include<iostream>
//#include <vector>
//#include <cmath>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n; scanf("%d", &n);
//	vector<int> in(n + 1);
//	_for(1, n+1) scanf("%d", &in[i]);
//	for(int i=1;i<n+1;i++)
//		for (int j = 1+i; j < n + 1; j++)    //j从i+1开始
//		{
//			vector<int> lie, id(n + 1, 1); // lie后面不能加“(n+1)", 否则后面lie.size()不会是2 赋值为1表示人
//			id[i] = id[j] = -1;   //  假设i和j player是狼
//			for (int k = 1; k < n + 1; k++)
//				if (in[k] * id[abs(in[k])] < 0)	
//					lie.push_back(k);
//			if (lie.size() == 2 && id[lie[0]] + id[lie[1]] == 0)
//			{
//				cout << i << " " << j;
//				return 0;
//			}
//		}
//	cout << "No Solution";
//	return 0;
//}