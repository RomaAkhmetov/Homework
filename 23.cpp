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
	ll n;
	cin >> n;

	ll tn = n;
	ll sum = 0;
	while (tn >= 1)
	{
		tn--;
		if (tn == 0)
			break;
		else
		{
			if (n % tn == 0)
				sum += tn;
		}
	}
	cout << sum + n;
}

//Z