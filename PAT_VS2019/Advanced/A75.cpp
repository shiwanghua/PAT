//#include<iostream>
//#include<string>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//
//using namespace std;
//struct user {
//	int* p , total_score = 0,id,rank,solved=0;
//	bool submit = false;
//}u[10001];
//
//bool cmp(user u1, user u2)
//{
//	if (u1.total_score != u2.total_score) return u1.total_score > u2.total_score;
//	else if (u1.solved != u2.solved) return u1.solved > u2.solved;
//	else return u1.id < u2.id;
//}
//int main()
//{
//	int N, K, M; cin >> N >> K >> M;
//	int* p = new int[K+1];
//	_for(1, K+1) cin >> p[i];
//	_for(0, N+1)
//	{
//		u[i].id = i;
//		u[i].p = new int[K+1];
//		for (int j = 0; j < K+1; j++) u[i].p[j] = -2; 
//	}
//
//	int id, no, score;
//	_for(0, M)
//	{
//		cin >> id >> no >> score;
//		u[id].p[no] = u[id].p[no]>score? u[id].p[no]:score;
//	}
//	_for(1, N + 1)
//	{
//		for (int j = 1; j <= K; j++)
//		{
//			if (u[i].p[j] >= 0) {                            //  Bug: 本来没加等号，错了两个用例
//				u[i].total_score += u[i].p[j];
//				u[i].submit = true;         
//			}
//			if (u[i].p[j] == p[j]) u[i].solved++;
//		}
//	}
//	sort(u + 1, u + N + 1, cmp);
//	u[1].rank = 1;
//	_for(2, N + 1)
//	{
//		if (u[i].total_score == u[i - 1].total_score)
//			u[i].rank = u[i - 1].rank;
//		else u[i].rank = i;
//	}
//	_for(1, N + 1)
//	{
//		if (u[i].submit)
//		{
//			cout << u[i].rank << " " << setw(5) << setfill('0') << u[i].id << " " << u[i].total_score;
//			for (int j = 1; j <= K; j++)
//				if (u[i].p[j] > 0) cout << " " << u[i].p[j];
//				else if (u[i].p[j] >= -1) cout << " " << 0;
//				else if (u[i].p[j] == -2) cout << " -";
//			cout << endl;
//		}
//	}
//
//	return 0;
//}