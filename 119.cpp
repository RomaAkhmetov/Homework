#define _CRT_SECURE_NO_WARNINGS
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

struct Time
{
	int h;
	int m;
	int s;
};

bool cmp(Time a, Time b)
{
	if ((a.h * 3600 + a.m * 60 + a.s) < (b.h * 3600 + b.m * 60 + b.s))
		return true;
	else
		return false;
}

int main()
{
	int n;
	cin >> n;

	vector <Time> a(n);
	for (int i = 0; i < n; i++)
	{
		Time time;
		cin >> time.h >> time.m >> time.s;

		a[i] = time;
	}
	
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i].h << ' ' << a[i].m << ' ' << a[i].s << endl;
	}
}