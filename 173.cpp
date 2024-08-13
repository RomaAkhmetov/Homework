#define _USE_MATH_DEFINES_
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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool is_palindrom(vector<string> system)
{
	string sum = "";
	for (ll i = 0; i < system.size(); i++)
		sum += system[i];

	string sum1 = "";
	for (ll j = system.size() - 1; j >= 0; j--)
		sum1 += system[j];

	if (sum1 == sum)
		return true;
	else
		return false;
}

string letter(ll per)
{
	ll index = per - 10;
	vector <string> let = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };
	return let[index];
}

int main()
{
	ll n;
	cin >> n;

	vector<ll> res;
	for (ll p = 2; p <= 10; p++)
	{
		ll tn = n;
		vector<string> system;
		while (tn > 0)
		{
			system.push_back(to_string((tn % p)));
			tn /= p;
		}
		if (is_palindrom(system) == true)
			res.push_back(p);
	}
	for (ll p2 = 11; p2 <= 36; p2++)
	{
		ll t_n = n;
		vector<string> sys;
		while (t_n > 0)
		{
			if ((t_n % p2) > 9)
			{
				sys.push_back(letter((t_n % p2)));
				t_n /= p2;
			}
			else
			{
				sys.push_back(to_string((t_n % p2)));
				t_n /= p2;
			}
		}
		if (is_palindrom(sys) == true)
			res.push_back(p2);
	}
	if (res.size() == 1)
	{
		cout << "unique" << "\n";
		for (ll u = 0; u < res.size(); u++)
			cout << res[u] << ' ';
	}
	else if (res.size() == 0)
		cout << "none";
	else
	{
		cout << "multiple" << "\n";
		for (ll k = 0; k < res.size(); k++)
			cout << res[k] << ' ';
	}
}

//Z