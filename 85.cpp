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


int main()
{
	int n, m;
	cin >> n >> m;

	int mn = min(m, n);
	int mx = max(m, n);
	int d1 = 0;
	for (int i = 1; i <= mn; i++)
	{
		if (mn % i == 0)
		{
			if (mx % i == 0)
				d1 = i;
		}
	}

	cout << d1;
}