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
 
ull Fibonachchi(ull ind_m)
{
	double phi = (1 + sqrt(5)) / 2;
	double r_phi = (1 - sqrt(5)) / 2;
	double Fn = round((pow(phi, ind_m) - pow(r_phi, ind_m)) / sqrt(5));
	return Fn;
}

int main()
{
	ull f_n;
	cin >> f_n;

	ull l = 1;
	ull r = 46;
	while (l + 1 < r)
	{
		ull m = (l + r) / 2;
		if (Fibonachchi(m) == f_n)
		{
			cout << 1;
			cout << "\n";
			cout << m;
			return 0;
		}
		if (Fibonachchi(m) > f_n)
			r = m;
		else
			l = m;
	}
	cout << 0;
}

//Z