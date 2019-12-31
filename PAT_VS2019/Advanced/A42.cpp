//#include<iostream>
//#include<string.h>
//
//#define _for(i,a,b) for( int i=(a); i<(b); ++i)
//
//using namespace std;
//
//// 主要时间花在处理输出上，答案只要一两行，我写了60行
////while里本来没有用两个aux也出错了
//int mainA42()
//{
//	int n;
//	cin >> n;
//	int poke[55], aux1[55],aux2[55];
//	_for(i, 1, 55)
//	{
//		cin >> poke[i];
//		aux2[i] = i;
//	}
//
//	while (n--)
//	{
//		_for(i, 1, 55)
//			aux1[poke[i]] = aux2[i];
//		memcpy(aux2,aux1,sizeof(int)*55);
//	}
//
//	_for(i, 1, 54)
//	{
//		if (aux2[i] <= 13)
//		{
//			printf("S");
//			aux2[i] = aux2[i] % 13;
//			if (aux2[i] == 0)
//				aux2[i] = 13;
//			printf("%d ", aux2[i]);
//		}
//		else if (aux2[i] <= 26)
//		{
//			printf("H");
//			aux2[i] = aux2[i] % 13;
//			if (aux2[i] == 0)
//				aux2[i] = 13;
//			printf("%d ", aux2[i]);
//		}
//		else if (aux2[i] <= 39)
//		{
//			printf("C");
//			aux2[i] = aux2[i] % 13;
//			if (aux2[i] == 0)
//				aux2[i] = 13;
//			printf("%d ", aux2[i]);
//		}
//		else if (aux2[i] <= 52) {
//			printf("D");
//			aux2[i] = aux2[i] % 13;
//			if (aux2[i] == 0)
//				aux2[i] = 13;
//			printf("%d ", aux2[i]);
//		}
//		else {
//			printf("J");
//			if (aux2[i] == 53) printf("1 ");
//			else printf("2 ");
//		}
//	}
//	if (aux2[54] <= 13)
//		printf("S");
//	else if (aux2[54] <= 26)
//		printf("H");
//	else if (aux2[54] <= 39)
//		printf("C");
//	else  if (aux2[54] <= 52) printf("D");
//	else {
//		printf("J");
//		if (aux2[54] == 53) printf("1");
//		else printf("2");
//		return 0;
//	}
//	aux2[54] = aux2[54] % 13;
//	if (aux2[54] == 0)
//		aux2[54] = 13;
//	printf("%d", aux2[54]);
//	
//	return 0;
//}