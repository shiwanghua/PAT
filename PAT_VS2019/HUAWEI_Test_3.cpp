//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//// num[i]=max{num[i-1]+1,num[i-2]+1,num[i]}
//int main()
//{
//	string s;
//	cin >> s;
//	int len = s.length();
//	if (len == 1) return 1;
//	else if (len == 2) return 2;
//
//	int* num = new int[len];
//	_for(0, len) num[i] = 0;
//	
//	num[0] = 1;
//	num[1] = 2;
//	for (int i = 2; i <len; i++) {  //  �ж�ÿ��s[i]�ǻ���Ϊ1��ֵ�û�����ǰ���ֵ����һ���
//		for (int j = len - 1; j >= i; j--)  // �������s[i]�����ַ���, ÿ�����ַ�����s[0]-s[j]
//		{
//			int theLarger = num[i];
//			if (s[i - 1] <= '2' && s[i - 1] >= '0' ) // ��������ַ�����ȽϺ�
//				theLarger = num[i - 2] + 1;
//			if (theLarger < num[i - 1]+1 )
//				theLarger = num[i - 1]+1;
//			num[i] = theLarger;
//		}
//	}
//	printf("%d", num[len - 1]);
//	return 0;
//}