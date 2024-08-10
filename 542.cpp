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

char ctoi(char a)
{
	return a - '0';
}

vector<char> f(ll m)
{
	ll t_m = m;
	vector<char> v;
	while (t_m > 0)
	{
		v.push_back((char)(t_m % 2 + 48));
		t_m /= 2;
	}
	vector<char> res;
	for (ll i = v.size() - 1; i >= 0; i--)
		res.push_back(v[i]);
	return res;
}

int main()
{
	ll m;
	cin >> m;

	vector<char> a = f(m);
	string sum = "";
	for (ll j = a.size() - 1; j >= 0; j--)
		sum += to_string(ctoi(a[j]));
	ll stepen = 0;
	ll r_sum = 0;
	for (ll p = sum.size() - 1; p >= 0; p--)
	{
		r_sum += (ctoi(sum[p]) * pow(2, stepen));
		stepen++;
	}
	cout << r_sum;
}

//Z