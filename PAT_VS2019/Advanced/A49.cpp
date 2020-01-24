//#include<iostream>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, num = 0, a = 10; scanf("%d", &n);
//	// ³¬Ê±
//	/*_for(1, n+1)
//	{
//		int j = i;
//		while (j > 0)
//		{
//			if (j % 10 == 1)
//				num++;
//			j = j / 10;
//		}
//	}*/
//	int m = n;
//	while (m > 0)
//	{
//		if (m % 10 == 0) num = num + n / a * (a/10);
//		else if (m % 10 == 1)num = num + n / a * (a/10) + n % (a/10) + 1;
//		else num += (n / a + 1) * (a/10);
//		a = a * 10;
//		m = m / 10;
//	}
//	printf("%d", num);
//	return 0;
//}