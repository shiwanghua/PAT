//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <map>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//map<string, int> si;
//int main()
//{
//	int n, j = 0;
//	string s; getline(cin, s);
//	int len = s.length();
//	while (j < len)
//	{
//		while (!isalnum(s[j])&&j<len) j++;   // Bug: ȥ��������������ĸ�ַ���ֱ���ҵ�������ĸ�ַ�
//		int J = j, num = 0;  //  ��ʱ�ż�¼�Ϸ�j
//		while (isalnum(s[j])&&j<len) {
//			j++;
//			num++;
//		}
//		string get = s.substr(J, num);
//		if (get != "") {    //  ��������жϺ�����ĵڶ���while�ɼӿɲ���
//			transform(get.begin(), get.end(), get.begin(), ::tolower);
//			if (si.find(get) != si.end())   //  if ��else����ʡȥ��ֱ��+1����
//				si[get]++;
//			else si[get] = 1;   //   Bug2:   ��ʼֵӦ����1����0
//		}
//		j++;
//	}
//	string maxs; int maxnum = 0;
//	for (auto it : si)
//	{
//		if (it.second > maxnum)
//		{
//			maxnum = it.second;
//			maxs = it.first;
//		}
//	}
//	cout << maxs << " " << maxnum;
//	return 0;
//}