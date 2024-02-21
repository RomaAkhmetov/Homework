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
	int a, b;
	cin >> a >> b;

	int ed = a % 10;
	if (ed == 0 || ed == 1 || ed == 5 || ed == 6)
		cout << ed;
	else
	{
		if (ed == 4 && (b % 2 != 0))
			cout << 4;
		else if(ed == 4 && (b % 2 == 0))
			cout << 6;
		else if (ed == 9 && (b % 2 != 0))
			cout << 9;
		else if (ed == 9 && (b % 2 == 0))
			cout << 1;
		else if (ed == 3)
		{
			int step = b / 4;
			int ti = b - 4 * step;
			if (ti == 1)
				cout << 3;
			else if (ti == 2)
				cout << 9;
			else if (ti == 3)
				cout << 7;
			else if (ti == 0)
				cout << 1;
		}
		else if (ed == 7)
		{
			int step = b / 4;
			int ti = b - 4 * step;
			if (ti == 1)
				cout << 7;
			else if (ti == 2)
				cout << 9;
			else if (ti == 3)
				cout << 3;
			else if (ti == 0)
				cout << 1;
		}
		else if (ed == 8)
		{
			int step = b / 4;
			int ti = b - 4 * step;
			if (ti == 1)
				cout << 8;
			else if (ti == 2)
				cout << 4;
			else if (ti == 3)
				cout << 2;
			else if (ti == 0)
				cout << 6;
		}
		else if (ed == 2)
		{
			int step = b / 4;
			int ti = b - 4 * step;
			if (ti == 1)
				cout << 2;
			else if (ti == 2)
				cout << 4;
			else if (ti == 3)
				cout << 8;
			else if (ti == 0)
				cout << 6;
		}
	}
}
