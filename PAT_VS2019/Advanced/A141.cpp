//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include<set>
//#include<map>
//#include<queue>
//#include<stack>
//#include<algorithm>
//#define _for(i,a,b) for( int i=a; i<b; ++i)
//#define mfor(i,b,a) for(int i=b;i>=a;i--)
//
//using namespace std;
//struct ins {
//	string school;
//	float score = 0.0;
//	int num = 0;
//}s[100000];
//map<string, int> stuExist, exist;
//bool cmp(ins s1, ins s2) {
//	if ((int)s1.score != (int)s2.score) return s1.score > s2.score;
//	return s1.num != s2.num ? s1.num < s2.num : s1.school < s2.school;
//}
//int main()
//{
//	int n, insNum = 0; float sco; string t1, t2;
//	cin >> n;
//	_for(i, 0, n) {
//		cin >> t1 >> sco >> t2;
//		transform(t2.begin(), t2.end(), t2.begin(), ::tolower);
//		if (exist[t2] == 0)
//			exist[t2] = ++insNum;  //  Bug2: Ӧ���ȼӺ�ֵ����Ȼ��һ����0
//		int j = exist[t2] - 1;
//if (stuExist[t1] == 0) {
//	stuExist[t1] = 1;
//	s[j].num++;
//}// ��һ������Ҫ���μ���A��B��ͬһ�������������˼�¼����������Ҳû��ʵ��������ܣ�Ҫȡ��5���ַ���ɵ����ַ���
////s[j].num++; // ֱ����������
//		s[j].school = t2;
//		if (t1[0] == 'A') s[j].score += sco;
//		else if (t1[0] == 'B') s[j].score += sco / 1.5;
//		else s[j].score += sco * 1.5;
//	}
//	sort(s, s + insNum, cmp);
//	cout << insNum << endl << 1 << " " << s[0].school << " " << (int)s[0].score << " " << s[0].num << endl;
//	int r = 1;
//	for (int i = 1; i < insNum; i++)
//	{
//		// if ((int)s[i].score != (int)s[i - 1].score)cout << r;// Bug1�� Ҫת��int
//		// else {
//		// 	cout << i + 1;//Bug3: ������������
//		// 	r = i + 1;
//		// }
//		if ((int)s[i].score != (int)s[i - 1].score) r = i + 1;
//		cout << r << " " << s[i].school << " " << (int)s[i].score << " " << s[i].num << endl;
//	}
//	return 0;
//}