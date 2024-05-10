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
	ll m, n, i, j, c;
	cin >> m >> n >> i >> j >> c;

	if ((m * n) % 2 == 0)
	{
		cout << "equal";
		return 0;
	}
	else
	{
		ll nach = 0;
		if (j != 1 && c == 0)
		{
			if ((j - 1) % 2 == 0)
			{
				if (i % 2 == 0 && nach == 0)
					cout << "white";
				else
					cout << "black";
				return 0;
			}
			else
			{
				nach = 1;
				if (i % 2 == 0 && nach == 1)
					cout << "black";
				else
					cout << "white";
				return 0;
			}
		}
		else if (j != 1 && c == 1)
		{
			nach = 1;
			if ((j - 1) % 2 == 0)
			{
				if (i % 2 == 0 && nach == 1)
					cout << "black";
				else
					cout << "white";
				return 0;
			}
			else
			{
				nach = 0;
				if (i % 2 == 0 && nach == 0)
					cout << "white";
				else
					cout << "black";
				return 0;
			}
		}
		else
		{
			if (i % 2 == 0 && c == 0)
				cout << "white";
			else if (i % 2 == 0 && c == 1)
				cout << "black";
			else if (i % 2 != 0 && c == 0)
				cout << "black";
			else
				cout << "white";
			return 0;
		}
	}
}

//Z