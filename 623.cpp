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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 

int main()
{
	ull n;
	cin >> n;

	if (n == 1 || n == 0)
		cout << 1;
	else
	{
		ull i = 1;
		ull j = 1;
		ull res = 0;
		for (ull u = 2; u <= n; u++)
		{
			res = (i + j) % 10;
			i = j;
			j = res;
		}
		cout << res;
	}
}

//Z
