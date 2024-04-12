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
	ull n;
	cin >> n;

	ull cnt = 0;
	ull ost = 0;
	ull n1 = n;
	while (n1 != 0)
	{
		ost = n1 % 2;
		n1 /= 2;
		if (ost == 1)
			cnt++;
	}
	ull n_shtr = n + cnt;
	cout << n_shtr;
}