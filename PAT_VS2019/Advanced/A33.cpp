//#include<iostream>
//#include <iomanip>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//struct sta {
//	double p, d;
//};
//bool cmp(sta a,sta b)
//{
//	return a.d < b.d;
//}
//// Bug: ����һ��ʼ�ͼ�������ѡ��������������������˵ļ���վ
//int main()
//{
//	double cmax, d, dave, gone = 0.0, can_go=0.0, cnow = 0.0, p = 0.0;
//	int n, i, j,min_i;
//	cin >> cmax >> d >> dave >> n;
//	const double max_d = cmax * dave;
//	sta* s = new sta[n];
//	_for(i,0, n)
//		cin >> s[i].p >> s[i].d;
//	sort(s, s + n, cmp);
//	if (s[0].d != 0) {
//		cout << "The maximum travel distance = 0.0";
//		return 0;
//	}
//	i = 0; 
//	while (gone < d)
//	{
//		if (s[i].d + max_d < s[i + 1].d && i + 1 < n)
//		{
//			cout << "The maximum travel distance = " << fixed << setprecision(2) << gone + max_d;
//			return 0;
//		}
//		min_i = j = i + 1;
//		while (j < n&&s[j].p >= s[i].p && gone + max_d >= s[j].d)
//		{
//			if (s[min_i].p > s[j].p)
//				min_i = j;
//			j++;
//		}
//		if (gone + max_d >= d&&s[i].p<=s[min_i].p)   // ֱ�Ӵ� i �ܵ�Ŀ�ĵ�
//		{
//			cout << p + s[i].p * (d - s[i].d-can_go) / dave;
//			return 0;
//		}
//		if (j == n|| gone + max_d < s[j].d) // �� i �ߵ�min_i, ����i��������
//		{
//			p = p + s[i].p * (cmax-can_go/dave);
//			can_go = max_d + s[i].d - s[min_i].d ;
//			gone = s[min_i].d;
//			i = min_i;
//			/*cout << "1����" << i << "������վ������" << gone << "�������" << p << endl;*/
//		}
//		else if (s[j].p < s[i].p)  // �� i �ߵ�j
//		{
//			p = p + s[i].p * (s[j].d - s[i].d-can_go) / dave;  //  can_goһ��С��i��j�ľ���
//			can_go = 0.0;
//			gone = s[j].d;
//			i = j;
//			/*cout << "2����" << i << "������վ������" << gone << "�������" << p << endl;*/
//		}
//
//		if (i == n - 1)
//		{
//			if (gone + max_d < d)  //  ��һ���������һ������վ���߲����ˣ�����
//				cout << "The maximum travel distance = " << fixed << setprecision(2) << gone + max_d;
//			else
//				cout << fixed << setprecision(2) << p + (d - s[i].d - can_go) / dave * s[i].p;
//			return 0;
//		}
//	}
//	return 0;
//}