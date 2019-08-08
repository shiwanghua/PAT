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
vector<int> v1, v2, v3, v4;// ���1-4������id�����е��±�

int compare(int I, int J) // �����i����¼���j����¼���Ⱥ�˳��i��jǰ�������0���������1��i��j��0��ʼȡֵ
{
	if (I == n)
		return 1; // i�ﵽ���ֵ����Ч�ˣ�˵����j����¼Ӧ�÷���ǰ�棬���� 1 
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
		if (id[I][ti] - id[J][ti] > 0)  //��׼��֤�ŵ��������
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
		MergeSort(v, m + 1, r);
		Merge(v, l, m, r);
	}
	else if (l < r)
	{
		// ��������
		int t=0;
		_for(i, l+1, r+1)
		{
			t = i;
			while (t>l&&compare(v[t-1], v[t]))
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
