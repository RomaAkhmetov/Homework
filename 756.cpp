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
	ll m, n;
	cin >> m >> n;

	if (m == 1 || n == 1)
	{
		cout << 0;
		return 0;
	}

	ll vertical = (n - 2) * (m - 1);
	ll gorizontal = (n - 1) * (m - 2);
	ll sum = vertical + gorizontal + 1;
	cout << sum;
}