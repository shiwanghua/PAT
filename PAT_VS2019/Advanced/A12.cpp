//#include<iostream>
//#include<string>
//#include <iomanip>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//
//using namespace std;
//
//struct stu {
//	int id, C, M, E, A, rA, rC, rM, rE;
//	char r;
//};
//
//bool cmpC(stu s1, stu s2)
//{ return s1.C > s2.C;}
//bool cmpM(stu s1, stu s2)
//{
//	return s1.M > s2.M;
//}
//bool cmpE(stu s1, stu s2)
//{
//	return s1.E > s2.E;
//}
//bool cmpA(stu s1, stu s2)
//{
//	return s1.A > s2.A;
//}
//
//void printStu(stu s)
//{
//	if (s.r == 'A') cout << s.rA << " A\n";
//	else if (s.r == 'C')cout << s.rC << " C\n";
//	else if (s.r == 'E')cout << s.rE << " E\n";
//	else cout << s.rM << " M\n";
//}
//
////Bug1:  ȷ���ṹ����ַ�rֵʱif��Ҫ�ӵȺ�
////Bug2: ��ƽ����ʱû���������룬�����������1��3����ͨ�����ˣ�����ֻ�е�����ͨ����
////Bug3: ������ʱû�п��ǲ������Σ��������˺���ͨ��������������
////Bug4: ������ʱ����A����CME������CME�����AҪ���һ������
//int main()
//{  
//	int n, m;
//	cin >> n >> m;
//	stu* s = new stu[n];
//	int* id = new int[m];
//	_for(0, n)
//	{
//		scanf("%d %d %d %d", &s[i].id, &s[i].C, &s[i].M, &s[i].E);
//		//s[i].A = round((s[i].C + s[i].E + s[i].M) / 3.0)+0.5;   // �ĳ�����������һ����������ͨ������
//		s[i].A =(s[i].C + s[i].E + s[i].M) / 3;
//	}
//	_for(0, m) cin >> id[i];
//
//	sort(s,s+n,cmpC);
//	s[0].rC = 1;
//	_for(1, n)
//	{
//		if (s[i].rC != s[i - 1].rC)
//			s[i].rC = i + 1;
//		else s[i].rC = s[i - 1].rC;
//	}
//	sort(s, s + n, cmpM);
//	s[0].rM = 1;
//	_for(1, n)
//	{
//		if (s[i].rM != s[i - 1].rM)
//			s[i].rM = i + 1;
//		else s[i].rM = s[i - 1].rM;
//	}
//	sort(s, s + n, cmpE);
//	s[0].rE = 1;
//	_for(1, n)
//	{
//		if (s[i].rE != s[i - 1].rE)
//			s[i].rE = i + 1;
//		else s[i].rE = s[i - 1].rE;
//	}
//	sort(s, s + n, cmpA);
//	s[0].rA = 1;
//	_for(1, n)
//	{
//		if (s[i].rA != s[i - 1].rA)
//			s[i].rA = i + 1;
//		else s[i].rA = s[i - 1].rA;
//	}
//
//	_for(0, n)
//	{
//		if (s[i].rA <= s[i].rC && s[i].rA <= s[i].rE && s[i].rA <= s[i].rM)
//			s[i].r = 'A';
//		else if(s[i].rC < s[i].rA && s[i].rC <= s[i].rE && s[i].rC <= s[i].rM) 
//			s[i].r = 'C';
//		else if (s[i].rM < s[i].rA && s[i].rM <= s[i].rE && s[i].rM < s[i].rC)
//			s[i].r = 'M';
//		else s[i].r = 'E';
//	}
//	bool p;
//	_for(0, m)
//	{
//		p = false;
//		for(int j=0;j< n;j++)
//			if (s[j].id == id[i])
//			{
//				printStu(s[j]);
//				p = true;
//			}
//		if (!p) cout << "N/A\n";
//	}
//	return 0;
//}