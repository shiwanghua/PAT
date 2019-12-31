//#include<iostream>
//#include<string>
//#include<memory.h>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//
//#define _for(i,a,b) for( int i=(a); i<(b); ++i)
//#define mfor(i,a,b) for(int i=(a);i>=(b);--i)
//
//using namespace std;
//
//// 12.28纠结了一天没找出原因
////12.30早看算法笔记后终于找出，没考虑系数相反项相消的情况（57行）
//
//int maina1002()
//{
//	int n1, n2;
//	cin >> n1;
//	double* coe1=new double[n1];
//	int* exp1 = new int[n1];
//	_for(i, 0, n1)
//	{
//		cin >> exp1[i];
//		cin >> coe1[i];
//	}
//	cin >> n2;
//	double* coe2 = new double[n2];
//	int* exp2 = new int[n2];
//	_for(i, 0, n2)
//	{
//		cin >> exp2[i];
//		cin >> coe2[i];
//	}
//
//	double* res_coe = new double[n1 + n2];
//	int* res_exp = new int[n1 + n2];
//	int n=0;
//
//	int i = 0, j = 0;
//	for (; i < n1 && j < n2;)
//	{
//		if (exp1[i] > exp2[j])
//		{
//			res_coe[n] = coe1[i];
//			res_exp[n] = exp1[i];
//			i++; n++;
//		}
//		else if (exp1[i]<exp2[j])
//		{
//			res_coe[n] = coe2[j];
//			res_exp[n] = exp2[j];
//			j++; n++;
//		}
//		else {
//			if (coe1[i] + coe2[j] != 0)
//			{
//				res_coe[n] = coe1[i] + coe2[j];
//				res_exp[n] = exp1[i];
//				n++;
//			}
//			i++; j++; 
//		}
//	}
//	while (i < n1)
//	{
//		res_coe[n] = coe1[i];
//		res_exp[n] = exp1[i];
//		i++; n++;
//	}
//	while (j < n2)
//	{
//		res_coe[n] = coe2[j];
//		res_exp[n] = exp2[j];
//		j++; n++;
//	}
//
//	printf("%d", n);
//	_for(i, 0, n)
//	{
//		printf(" %d %.1f",res_exp[i],res_coe[i]);
//	}
//
//	return 0;
//}
//
//int main1002()
//{
//	float res[1001] = { 0 };
//	int n1 = 0, n2 = 0;
//	float coe;
//	int exp;
//	cin >> n1;
//	_for(i, 0, n1)
//	{
//		cin >> exp >> coe; 
//		res[exp] += coe;
//	}
//	cin >> n2;
//	_for(i, 0, n2)
//	{
//		cin >> exp >> coe;  
//		res[exp] += coe;
//	}
//
//	int n = 0;
//	_for(i, 0, 1001)
//		if (res[i] != 0) n++;
//	printf("%d", n);
//	mfor(i, 1000, 0)
//		if (res[i] != 0.0) printf(" %d %.1f", i, res[i]);
//	return 0;
//}