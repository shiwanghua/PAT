//#include<iostream>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//int main()
//{
//	int n, num = 0, a = 10; scanf("%d", &n);
//	//// ��ʱ
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
//		else if (m % 10 == 1)num = num + n / a * (a / 10) + n % (a / 10) + 1; //  ��ǰλ��1�������0ʱ�ұ߲��ܹ��� a/10���������� �� 0,1,... ����ǰλ�ұߵ���
//		else num = num + (n / a + 1) * (a / 10);//+1����Ϊ��ߵ�������Ϊ0�������ұ��뵱ǰλ������ȫ���11 12 ... 19 20 ..., ��Ϊ��ǰλ����1����ǰλ��1��ͷ���ұ�������
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
//		if (b != a * 10) break;   //  Ϊ��֤�� b ���� a ����10 ,  ������� b����Խ���ˣ�����
//		int left = n / b, now = m % 10, right = n % a; // ������������ a ����д�� b/10 !!! Ҳ����aҪ��1��ʼ���ܴ�10��ʼ�������int�Ļ���
//		if (now == 0) num = num + left * a;
//		else if (now == 1)num = num + left * a + right + 1; //  ��ǰλ��1�������0ʱ�ұ߲��ܹ��� a/10���������� �� 0,1,... ����ǰλ�ұߵ���
//		else num = num + (left + 1) * a;//+1����Ϊ��ߵ�������Ϊ0�������ұ��뵱ǰλ������ȫ���11 12 ... 19 20 ..., ��Ϊ��ǰλ����1����ǰλ��1��ͷ���ұ�������
//		a = a * 10;
//		b = b * 10;
//		m = m / 10;
//	}
//	printf("%d", num);
//	return 0;
//}