//#include<iostream>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, num = 0, a = 10; scanf("%d", &n);
//	//// 超时
//	//_for(1, n+1)
//	//{
//	//	int j = i;
//	//	while (j > 0)
//	//	{
//	//		if (j % 10 == 1)
//	//			num++;
//	//		j = j / 10;
//	//	}
//	//}
//	int m = n;
//	m = n = (int)pow(2, 30);
//	while (m > 0)
//	{
//		if (m % 10 == 0) num = num + n / a * (a / 10);
//		else if (m % 10 == 1)num = num + n / a * (a / 10) + n % (a / 10) + 1; //  当前位是1，左边是0时右边不能构成 a/10个数，而是 从 0,1,... 到当前位右边的数
//		else num = num + (n / a + 1) * (a / 10);//+1是因为左边的数可以为0，而且右边与当前位可以完全组成11 12 ... 19 20 ..., 因为当前位大于1，当前位是1开头的右边数都行
//		a = a * 10;
//		m = m / 10;
//	}
//	printf("%d", num);
//	return 0;
//}//1048973443


//#include<iostream>
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//int main()
//{
//	int n, num = 0, a = 1, b = 10; scanf("%d", &n);
//	int m = n;
//	m = n = (int)pow(2, 30);
//	while (m > 0)
//	{
//		if (b != a * 10) break;   //  为了证明 b 等于 a 乘以10 ,  但这里的 b可能越界了！！！
//		int left = n / b, now = m % 10, right = n % a; // 所以这里最后的 a 不能写成 b/10 !!! 也就是a要从1开始不能从10开始，如果是int的话！
//		if (now == 0) num = num + left * a;
//		else if (now == 1)num = num + left * a + right + 1; //  当前位是1，左边是0时右边不能构成 a/10个数，而是 从 0,1,... 到当前位右边的数
//		else num = num + (left + 1) * a;//+1是因为左边的数可以为0，而且右边与当前位可以完全组成11 12 ... 19 20 ..., 因为当前位大于1，当前位是1开头的右边数都行
//		a = a * 10;
//		b = b * 10;
//		m = m / 10;
//	}
//	printf("%d", num);
//	return 0;
//}