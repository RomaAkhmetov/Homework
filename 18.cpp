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

	if (n == 0)
		cout << 1;
	else
	{
		ull zs = 1 * n;
		vector <ull> z;
		ull pr = 1;
		for (ull i = 2; i < n; i++)
		{
			z.push_back(i);
		}
		for (ull j = 0; j < z.size(); j++)
		{
			pr *= z[j];
		}
		ull res = zs * pr;
		cout << res;
	}
}


