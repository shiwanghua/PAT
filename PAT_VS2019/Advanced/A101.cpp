#include<iostream>
#include <vector>
#include<algorithm>

#define _for(a,b) for( int i=a; i<b; ++i)
using namespace std;

int main()
{
	int n, num = 0; cin >> n;
	int* q = new int[n];
	vector<int> ans;
	_for(0, n) cin >> q[i];
	bool is;
	_for(0, n)
	{
		is = true;
		for(int j=0;j<i;j++)
			if (q[j] > q[i])
			{
				is = false;
				break;
			}
		if(is) for(int j=i+1;j<n;j++)
			if (q[j] < q[i])
			{
				is = false;
				break;
			}
		if (is) ans.push_back(q[i]);
	}
	sort(ans.begin(),ans.end());
	cout << ans.size() << endl;
	_for(0,ans.size()-1)
		cout << ans[i] << " ";
	if(ans.size()>0) cout << ans[ans.size() - 1];
	return 0;
}