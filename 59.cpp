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

string from_k_to_decimal(ll n, ll k)
{
	ll tn = n;
	vector<string>v;
	while (tn > 0)
	{
		v.push_back(to_string(tn % k));
		tn /= k;
	}
	string sum = "";
	for (ll i = v.size() - 1; i >= 0; i--)
		sum += v[i];
	return sum;
}

char ctoi(char a)
{
	return a - '0';
}

int main()
{
	ll n, k;
	cin >> n >> k;

	string p = from_k_to_decimal(n, k);
	ll composition = 1;
	for (ll i = 0; i < p.size(); i++)
		composition *= ctoi(p[i]);
	ll su = 0;
	for (ll j = 0; j < p.size(); j++)
		su += ctoi(p[j]);
	cout << composition - su;
}
