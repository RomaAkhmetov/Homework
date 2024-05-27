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
 
char ctoi(char a)
{
	return a - '0';
}

int main()
{
	ull n, m;
	cin >> n >> m;

	vector <ull> v;
	string sn = to_string(n);
	string sm = to_string(m);
	ull t_size_n = sn.size() - 1;
	ull t_size_m = sm.size() - 1;
	ull razr = 0;
	ull j = 0;
	while (t_size_n >= 0)
	{
		razr = ctoi(sn[j]) * pow(3, t_size_n);
		v.push_back(razr);
		if (t_size_n == 0)
			break;
		else
		{
			j++;
			t_size_n--;
		}
	}
	ull sum = 0;
	for (ull i = 0; i < v.size(); i++)
		sum += v[i];

	vector <ull> v1;
	ull razr_m = 0;
	ull z = 0;
	while (t_size_m >= 0)
	{
		razr_m = ctoi(sm[z]) * pow(3, t_size_m);
		v1.push_back(razr_m);
		if (t_size_m == 0)
			break;
		else
		{
			z++;
			t_size_m--;
		}
	}

	ull sum_m = 0;
	for (ull p = 0; p < v1.size(); p++)
		sum_m += v1[p];

	cout << sum_m + sum;
}

//Z