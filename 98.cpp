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
	int n;
	cin >> n;

	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (n == 1)
	{
		cout << a[0] << ':' << 0;
	}
	
	else
	{
		int i = 0;
		int j = a.size() - 1;

		int pl1 = 0;
		int pl2 = 0; 
		while ((j - i) >= 0)
		{
			if (a[i] >= a[j])
			{
				pl1 += a[i];
				i++;
			}
			else
			{
				pl1 += a[j];
				j--;
			}

			if (i > j)
				break;

			if (a[i] >= a[j])
			{
				pl2 += a[i];
				i++;
			}
			else
			{
				pl2 += a[j];
				j--;
			}
		}
		cout << pl1 << ':' << pl2;
	}
	return 0;
}