//#include<iostream>
//#include<algorithm>
//
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n,t; scanf("%d", &n);
//	int* pos = new int[n];
//	_for(i,0, n)
//	{
//		scanf("%d", &t);
//		pos[t] = i;
//	}
//	
//	int same = 0;
//	_for(i,0, n)
//		if (pos[i] == i) 
//			same++;
//
//	int  s = 0,k=1; //  k֮ǰ�ķ���Ԫ�ض��Ѿ��ź�
//
//	if (pos[0] == 0) same--;    //  �ⲽ���˺þ�
//	_for(i,0, n-same-1)
//	{
//		if (pos[0] == 0)
//		{
//			for(; k< n;k++)
//				if (pos[k] != k)
//				{
//					pos[0] = pos[k];
//					pos[k] = 0;
//					s++;
//					//same--;  //  ���ã�������λ�õ�0�͵�һ��λ�û���ʱ������Ԫ�ع�λ��same++, ��һ��ѭ��same--, ����
//					break;
//				}
//		}
//
//		t = pos[0];
//		pos[0]= pos[t];
//		pos[t] = t;
//		s++;
//	}
//	cout << s;
//
//	return 0;
//}