#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int s, n, m, c = 0;
	set <int> ob;
	vector <int> per;
	vector <int> raz1;
	per.clear();

	cout << "size a= ";
	cin >> n;
	cout << "size b= ";
	cin >> m;

	s = max(n, m);
	vector <int> a(n);
	vector <int> b(m);

	for (int i = 0; i < n; i++)
	{
		cout << "enter number a ";
		cin >> a[i];
	}

	for (int i = 0; i < m; i++)
	{
		cout << "enter number b ";
		cin >> b[i];
	}

	if (a.size() == s)
	{
		raz1 = a;
	}
	else
	{
		raz1 = b;
	}

	for (auto i : a)
		for (auto j : b)
		{
			ob.insert(i);
			ob.insert(j);
			if (i == j)
				per.push_back(i);
		}

	for (auto i : raz1)
	{
		for (auto j : per)
		{
			if (i == j)
			{
				for (int x = 0; x < raz1.size(); x++)
				{
					if (raz1[x] == j)
						raz1.erase(raz1.begin() + x);
				}
			}
		}
	}

	for (auto x : per)
	{
		cout << x << " ";
	}
	cout << endl;
	for (auto x : ob)
	{
		cout << x << " ";
	}
	cout << endl;
	for (auto x : raz1)
	{
		cout << x << " ";
	}
}
