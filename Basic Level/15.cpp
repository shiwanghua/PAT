#include<iostream>
#include<string>
#include<memory.h>
#include <iomanip>
#include <vector>

#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define __for(i,a,b) for( int i=(a); i<=(b); ++i)

using namespace std;

int l, h, n;
string* id;
int* de;
int* cai;
vector<int> v1, v2, v3, v4;// 存第1-4类人在id数组中的下标

int compare(int I, int J) // 考察第i条记录与第j条记录的先后顺序，i在j前面则输出0，否则输出1；i、j从0开始取值
{
	if (I == n)
		return 1; // i达到最大值，无效了，说明第j条记录应该放在前面，返回 1 
	else if (J == n)
		return 0;

	if (de[I] + cai[I] > de[J] + cai[J])
		return 0;
	else if (de[I] + cai[I] < de[J] + cai[J])
		return 1;
	else if (de[I] > de[J])
		return 0;
	else if (de[I] < de[J])
		return 1;
	else
	{
		int ti = 0;
		while (id[I][ti] == id[J][ti])
			ti++;
		if (id[I][ti] - id[J][ti] > 0)  //按准考证号的升序输出
			return 1;
		else return 0;
	}
}

void Merge(vector<int>& v, int l, int m, int r)
{
	int nl = m - l + 1;
	int nr = r - m;
	int* al = new int[nl + 1];
	int* ar = new int[nr + 1];
	_for(i, 0, nl)
		al[i] = v[l + i];
	_for(i, 0, nr)
		ar[i] = v[m + i + 1];
	al[nl] = n;
	ar[nr] = n;

	for (int i = 0, j = 0, k = l; k <= r; k++)
	{
		if (compare(al[i], ar[j]))
			v[k] = ar[j++];
		else
			v[k] = al[i++];
	}

	delete[]al;
	delete[]ar;
}


void MergeSort(vector<int>& v, int l, int r)
{
	if (r-l>=50)
	{
		int m = (l + r) / 2;
		MergeSort(v, l, m);
		// cout << "m= " << m << endl;
		MergeSort(v, m + 1, r);
		// cout << "l= " << l << " m= " << m << "  r= " << r << endl;
		Merge(v, l, m, r);
	}
	else if (l < r)
	{
		// 插入排序
		int t;
		_for(i, l+1, r+1)
		{
			t = i;
			while (compare(v[t-1], v[t])&&t>l)  // Bus: compare的两个顺序反了
			{
				v[t] = v[t - 1] ^ v[t];
				v[t - 1] = v[t - 1] ^ v[t];
				v[t] = v[t - 1] ^ v[t];
				t--;
			}
		}

	}
}

void print()
{
	cout << v1.size() + v2.size() + v3.size() + v4.size() << endl;
	_for(i, 0, v1.size())
		cout << id[v1[i]] << " " << de[v1[i]] << " " << cai[v1[i]] << endl;
	_for(i, 0, v2.size())
		cout << id[v2[i]] << " " << de[v2[i]] << " " << cai[v2[i]] << endl;
	_for(i, 0, v3.size())
		cout << id[v3[i]] << " " << de[v3[i]] << " " << cai[v3[i]] << endl;
	_for(i, 0, v4.size())
		cout << id[v4[i]] << " " << de[v4[i]] << " " << cai[v4[i]] << endl;
}

int main()
{
	cin >> n >> l >> h;

	id = new string[n];
	de = new int[n];
	cai = new int[n];

	_for(i, 0, n)
		cin >> id[i] >> de[i] >> cai[i];

	_for(i, 0, n)
	{
		if (de[i] >= h && cai[i] >= h)
		{
			v1.push_back(i);
		}
		else if (de[i] >= h && cai[i] < h && cai[i] >= l)
		{
			v2.push_back(i);
		}
		else if (de[i] >= cai[i] && de[i] < h && cai[i] >= l)
		{
			v3.push_back(i);
		}
		else if (cai[i] >= l && de[i] >= l)
		{
			v4.push_back(i);
		}
	}

	MergeSort(v1, 0, v1.size() - 1);
	MergeSort(v2, 0, v2.size() - 1);
	MergeSort(v3, 0, v3.size() - 1);
	MergeSort(v4, 0, v4.size() - 1);
	print();

	delete[] id;
	delete[] de;
	delete[] cai;
	return 0;
}
