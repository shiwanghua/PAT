//#include<iostream>
//#include<algorithm>
//#include<iomanip>
//#define _for(a,b) for( int i=a; i<b; ++i)
//
//using namespace std;
//
//struct stu {
//	long long int reg;
//	int score, lr, fr, loc;
//};
//
//bool cmp(stu s1, stu s2)
//{
//	return s1.score == s2.score ? s1.reg<s2.reg : s1.score>s2.score;
//}
//
//int main()
//{
//	int loc,N=0; cin >> loc;
//	int* n = new int[loc];
//	stu** s = new stu * [loc];
//	_for(0, loc)
//	{
//		cin >> n[i];
//		N += n[i];
//		s[i] = new stu[n[i]];
//		int loc_number = i + 1;
//		for (int j = 0; j < n[i]; j++)
//		{
//			cin >> s[i][j].reg >> s[i][j].score;
//			s[i][j].loc = loc_number;
//		}
//		sort(s[i], s[i] + n[i], cmp);
//		s[i][0].lr = 1;
//		for (int j = 1; j < n[i]; j++)   
//		{
//			if (s[i][j].score == s[i][j - 1].score)
//				s[i][j].lr = s[i][j-1].lr;      // Bug3: j忘了-1
//			else s[i][j].lr = j + 1;
//		}
//	}
//
//	stu* all = new stu[N]; int all_i=0;
//	_for(0, loc)
//		for (int j = 0; j < n[i]; j++)   //  Bug2: n[i] 写成了n[j]
//			all[all_i++] = s[i][j];  
//	
//	_for(0, loc)
//		delete[] s[i];
//	delete[] s;
//
//	sort(all, all+ N, cmp);
//	all[0].fr = 1;
//	for (int j = 1; j < N; j++)
//	{
//		if (all[j].score == all[j - 1].score)
//			all[j].fr = all[j-1].fr;     //  Bug1: fr 写成了lr
//		else all[j].fr = j + 1;
//	}
//	cout << N << endl;
//	_for(0, N)
//		cout <<setw(13)<<setfill('0') << all[i].reg << " " << all[i].fr << " " << all[i].loc << " " << all[i].lr << endl; // Bug4: 注册号不一定有13位！！！
//	return 0;
//}