//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//#define __for(a,b) for(int i=a; i<=b;++i)
//#define mfor(a,b) for(int i=a;i>=b;--i)
//
//using namespace std;
//
//// ������λ��С�Ĳ�0�������ǲ����ˣ�
//// ����if-else�︳ֵ����ֱ�Ӹ���b�ˣ�b���ܱ�a��
//int main()
//{
//	string a, b,d; bool f = true;
//	cin >> a >> b;
//	int l1 = a.length(), l2 = b.length(), t,A,B;
//	char c[14] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' }; // c[13]�ƺ�Ҳ����
//    //or  char c[14] = {"0123456789JQK"};  // ������c[13];
//	for (int i = l1-1, j = l2-1; i>=0 || j >=0 ; i--, j--)
//	{
//		if (i >= 0)A = a[i] - '0';
//		else A = 0;
//		if (j >= 0)B = b[j] - '0';
//		else B = 0;
//		if (f)  //  ����λ
//		{
//			t=(A+B)%13;
//			d.push_back(c[t]);
//		}
//		else   //  ż��λ
//		{
//			t = B-A;
//			if (t < 0) t += 10;
//			d.push_back(t + '0');
//		}
//		f = !f;
//	}
//	mfor(d.length()-1,0)
//	cout << d[i];
//	return 0;
//}