//#include<iostream>
//#include<string>
//#include <iomanip>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//struct node {
//	int add, data, next;
//	bool in = 0;
//}nodes[100000];
//bool cmp(node n1, node n2)
//{
//	return n1.data < n2.data;
//}
//bool cmp2(node n1, node n2)
//{
//	return n1.in > n2.in;
//}
//int main()
//{
//	int n, f, num = 0, t;
//	cin >> n >> f;
//	//bool have = 0;//  �ж��Ƿ����f
//	_for(0, n)
//	{
//		cin >> t;
//		//if (t == f) have = 1;
//		nodes[t].add = t;
//		cin >> nodes[t].data >> nodes[t].next;
//	}
//	//if (!have)   //   Bug3: �ж��Ƿ�����ͷԪ��
//	//{
//	//	cout << 0 << " " << -1;
//	//	return 0;
//	//}
//	if (f == -1) {   //  ֱ���ж��Ƿ�Ϊ�ռ���
//		cout << 0 << " " << -1;
//		return 0;
//	}
//	while (f != -1)   //  Bug1: ֮ǰû����Ҫȥ���������ϵ�
//	{
//		nodes[f].in = 1;
//		num++;
//		f = nodes[f].next;
//	}
//	sort(nodes, nodes + 100000, cmp2);  // Bug2: ���ﲻ�Ǽ�n�ˣ�
//	sort(nodes, nodes + num, cmp);
//	//cout << n <<" "<< setw(5) << setfill('0') << nodes[0].add << endl;
//	printf("%d %05d\n", num, nodes[0].add);
//	if (num == 0) return 0;
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//		//cout << setw(5) << setfill('0') << nodes[i].add << " " << nodes[i].data << " " << setw(5) << setfill('0') << nodes[i + 1].add << endl;
//		if (nodes[i].in)
//			printf("%05d %d %05d\n", nodes[i].add, nodes[i].data, nodes[i + 1].add);
//	printf("%05d %d -1", nodes[i].add, nodes[i].data);
//	//cout << setw(5) << setfill('0') << nodes[n - 1].add <<" "<< nodes[n - 1].data << " " << -1;
//
//	return 0;
//}