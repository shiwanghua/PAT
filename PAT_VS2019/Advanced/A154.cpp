//#include<iostream>
//#include<cstring>
//#include<set>
//#include<vector>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//// Bug: ��3��4��������ʱ�������ʹ������c����10���С��
////       ������vector����coȥ������ɫ����num����ôֻ������2ͨ������c��Խ��
//// �����setȫ��ͨ��
//int main()
//{
//	int n, k, m, edge[10001][2];
//	cin >> n >> m;
//	_for(0, m)
//		scanf("%d%d", &edge[i][0], &edge[i][1]);
//	scanf("%d", &k);
//	int* v = new int[n], num = 0;
//	// int *c = new int[100000];  //  Bug: ������һ����ɫ����Խ��
//
//	_for(0, k)
//	{
//		bool is = 1;
//		/*memset(c, 0, 4 * 100000);*/
//		//vector<int> co;
//		set<int> s;
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &v[j]);
//			//if (count(co.begin(), co.end(), v[j]) == 0)  // ���������
//			//	co.push_back(v[j]);
//			s.insert(v[j]);
//		}
//		for (int j = 0; j < m; j++)
//		{
//			if (v[edge[j][0]] == v[edge[j][1]])
//			{
//				printf("No\n");
//				is = 0;
//				break;
//			}
//		}
//		if (is) {
//			/*	for (int j = 0; j < 100000; j++)
//				{
//					if (c[j] == 1)
//						num++;
//				}*/
//			printf("%d-coloring\n", s.size());
//			num = 0;
//		}
//	}
//	return 0;
//}