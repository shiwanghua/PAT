//#include<iostream>
//#include<map>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n, k, start, t;
//	map<int, int> data,next; //  Bug1: ֱ�ӿ�����Ļ��ᳬ���ڴ����в���
//	scanf("%d%d%d\n", &start, &n, &k);
//	_for(i, 0, n)
//	{
//		cin >> t;
//		cin >> data[t] >> next[t];
//	}
//	int s = start, order[100000], index = 0;
//	while (s != -1) {
//		if (data[s] < 0) order[index++] = s;
//		s = next[s];
//	}
//	s = start;
//	while (s != -1) {
//		if (data[s] >= 0 && data[s] <= k) order[index++] = s;
//		s = next[s];
//	}
//	s = start;
//	while (s != -1) {
//		if (data[s] > k) order[index++] = s;
//		s = next[s];
//	}
//	_for(i, 0, index-1) 
//		printf("%05d %d %05d\n", order[i], data[order[i]],order[i+1]);
//	printf("%05d %d %d\n", order[index-1], data[order[index-1]], -1);  // Bug2: �����-1����Ҫ���5λ
//	return 0;
//}