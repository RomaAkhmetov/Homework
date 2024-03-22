#define _USE_MATH_DEFINES 
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <numeric>
#include <queue>
#include <map>
#include <iomanip>
#include <sstream>


using namespace std;

typedef long long ll;
typedef unsigned long long ull;



int main()
{
	ll n;
	cin >> n;

	vector <ll> m(n);
	vector <ll> ch;
	vector <ll> not_ch;
	for (ll i = 0; i < m.size(); i++)
	{
		cin >> m[i];

		if (m[i] % 2 == 0)
			ch.push_back(m[i]);
		else
			not_ch.push_back(m[i]);
	}

	if (ch.size() > not_ch.size())
	{
		for (ll j = 0; j < not_ch.size(); j++)
		{
			cout << not_ch[j] << ' ';
		}
		cout << endl;
		for (ll o = 0; o < ch.size(); o++)
		{
			cout << ch[o] << ' ';
		}
		cout << endl;
		cout << "YES";
	}
	else
	{
		for (ll g = 0; g < not_ch.size(); g++)
		{
			cout << not_ch[g] << ' ';
		}
		cout << endl;
		for (ll z = 0; z < ch.size(); z++)
		{
			cout << ch[z] << ' ';
		}
		cout << endl;
		cout << "NO";
	}
}


