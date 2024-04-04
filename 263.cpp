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
	ll n, i, j;
	cin >> n >> i >> j;

	ll s = i;
	vector <ll> w1;
	while (s != j)
	{
		if (s > n)
			s = 1;
		w1.push_back(s);
		s++;
	}

	vector <ll> w2;
	ll s1 = i;
	while (s1 != j)
	{
		if (s1 < 1 )
			s1 = n;
		w2.push_back(s1);
		s1--;
	}

	cout << min(w1.size(), w2.size())-1;
}