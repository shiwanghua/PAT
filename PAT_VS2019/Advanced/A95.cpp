//#include<iostream>
//#include<cstring>
//#include <iomanip>
//#include <vector>
//#include<algorithm>
//#include<map>
//
//#define _for(a,b) for( int i=a; i<b; ++i)
//using namespace std;
//
//struct record {
//	char id[8];
//	int s, t,v=0;  // t1是in，t0是out，v表示有效配对的记录
//};
//
//bool cmp(record r1, record r2)
//{
//	return strcmp(r1.id,r2.id)==0?r1.s<r2.s: strcmp(r1.id, r2.id)<0;
//}
//bool cmp2(record r1, record r2)
//{
//	return  r1.s < r2.s;
//}
//int main()
//{
//	int n, k, h, m, s; cin >> n >> k;
//	char state[4];
//	record* r = new record[n];
//	int max=0;
//	map<string, int> car_time;     //  Bug: 把char*改成了string
//	_for(0, n)
//	{
//		scanf("%s %d:%d:%d %s",r[i].id,&h,&m,&s,state);
//		r[i].s = s + m * 60 + h * 3600;
//		if (strcmp(state, "in") == 0) r[i].t = 1;
//		else r[i].t = 0;
//	}
//	sort(r, r + n, cmp);
//	_for(0, n-1)
//	{
//		if (r[i].t == 1&&r[i+1].t==0&&strcmp(r[i].id,r[i+1].id)==0)  
//		{
//			r[i].v = r[i + 1].v = 1;
//			/*r[i].time= r[i+1].s - r[i].s;   */
//			//if (car_time.count(r[i].id) == 0) car_time[r[i].id] = 0;   //  map中还没有这个车牌号，置零
//			car_time[r[i].id] += r[i + 1].s - r[i].s;
//			max = max < car_time[r[i].id] ? car_time[r[i].id] : max;
//			i++;
//		}
//	}
//
//	sort(r, r + n, cmp2);
//	int j = 0;    //  Bug: 超时, 利用查询一定是递增的，只要一次循环遍历
//	int num = 0;
//	_for(0, k)
//	{
//		scanf("%d:%d:%d", &h, &m, &s);
//		s= s + m * 60 + h * 3600;
//		while(r[j].s<=s)
//		{
//			if (r[j].v == 1)
//			{
//				if (r[j].t == 1) num++;
//				else num--;
//			}
//			j++;
//			if (j == n ) break;
//		}
//		cout << num << endl;
//	}
//	
//	for (auto it : car_time)
//		if (it.second == max)  printf("%s ", it.first.c_str());
//	//map<string, int>::iterator it;
//	//for(it=car_time.begin();it!=car_time.end();it++)
//		 //if(it->second==max) cout << it->first <<"  ";
//	printf("%02d:%02d:%02d", max/3600, max% 3600/60, max %60);
//
//	return 0;
//}