#include<iostream>
#include<vector>
#include<algorithm>
#define MAX_COST 999999
using namespace std;

struct edge {
	int city_a, city_b, cost, avali;
	bool operator <(edge &s) const {
		return avali != s.avali ? avali > s.avali : cost < s.cost; //  如果avali不相同，把avali为1 即可用的放到前面，把avali为0的放到后面，如果avali相同，按cost从小到大排序
	}
	void input() {
		scanf("%d %d %d %d", &city_a, &city_b, &cost, &avali);
	}
};
vector<edge> ve;
vector<int> fath, co;
int getfath(int x)
{
	return x == fath[x] ? x : fath[x] = getfath(fath[x]);
}
int main() {
	int cityNum, edgeNum;
	scanf("%d %d", &cityNum, &edgeNum);
	ve.resize(edgeNum); //  设定边容器的大小，一共edgeNum条边
	fath.resize(cityNum + 1);// 城市容器，从1-cityNum
	co.resize(cityNum + 1, 0);
	for (int i = 0; i < edgeNum; i++)
		ve[i].input();   //  调用edge结构的input函数
	sort(ve.begin(), ve.end()); //  用edge结构的 < 运算符进行排序

	int maxres = 0;
	vector<int> ans;
	for (int i = 1; i <= cityNum; i++) {//生成最小生成树
		int counter = 1;
		for (int j = 1; j <= cityNum; j++)//记录当前节点的根节点
			fath[j] = j;
		for (int j = 0; j < ve.size(); j++) {
			int a = ve[j].city_a, b = ve[j].city_b;
			if (a == i || b == i)//去除失陷的城市节点, 即假设i城市被敌军占领了
				continue;
			if (getfath(a) == getfath(b))//这条边是不需要的, 两个城市已经连在一起了而且是有效的，因为fath数组记录的全是有效的路径
				continue;
			if(ve[j].avali == 0)//加上这条边的开销
				co[i] += ve[j].cost; //  起初一段全是avali为1的连接，所以不需要加cost，后来avali为0了，就从cost最小的开始累加，这里加的全是那些两个城市还未建立连接的路径的cost
			counter++;//  每建立一条连接，counter加一，counter代表有连接的（非完全孤立的）城市数，可能有多条连接
			fath[getfath(a)] = fath[getfath(b)];//把每条还未连接的不涉及i城市的 边 连起来，不管有效还是无效
		}
		// It is guaranteed that the whole country was connected before the war 在战争前（即没有城市被占领时）所有城市之间都有连接，
		if (counter < cityNum - 1)// counter小于城市数-1，代表除了i城市以外的其他所有城市没有完全连起来，说明没有i城市，  尽最大努力也不能让其他所有城市完全连起来
			co[i] = MAX_COST;  // 如果i城市的缺失不能让其他所有城市连接起来，则把i城市的cost列为最大值
		//  判断i城市沦陷对应的cost是不是超过了之前的最大cost记录maxres
		if (maxres < co[i]) {   // 如果没有i城市的情况下其他城市还能全连接，则maxres还是小于MAX_COST的
			ans.clear();        // 如果没有i城市后其他城市不能全连接，则将之前那些沦陷后其他城市还能全连接的城市清空，以后也只能有那种沦陷后使其他城市不能全连接的城市能被列为输出（并列最大cost）
			ans.push_back(i);
			maxres = co[i]; 
		}
		else if (maxres == co[i])
			ans.push_back(i);
	}
	if (maxres == 0)
		cout << 0 << endl;
	else {
		cout << ans[0];
		for (int i = 1; i < ans.size(); i++) {
			cout << " " << ans[i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}