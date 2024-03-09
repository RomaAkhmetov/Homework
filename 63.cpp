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
	int S, P;
	cin >> S >> P;

	int x = 0;
	int y = 0;
	for (int i = 1; i <= S - 1; i++)
	{
		if (P % i != 0)
			continue;
		else
		{
			if ((i + P / i) == S)
			{
				x = P / i;
				y = i;
			}
		}
	}
	if (x > y)
		cout << y << ' ' << x;
	else
		cout << x << ' ' << y;
}