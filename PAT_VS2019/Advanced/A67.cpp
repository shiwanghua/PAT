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
//	int  s = 0,k=1; //  k之前的非零元素都已经排好
//
//	if (pos[0] == 0) same--;    //  这步想了好久
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
//					//same--;  //  不用，把其他位置的0和第一个位置互换时有两个元素归位，same++, 下一个循环same--, 抵消
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