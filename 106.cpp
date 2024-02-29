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

	vector <int> moneys(n);
	int r = 0;
	int o = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> moneys[i];

		if (moneys[i] == 1)
			r++;
		else
			o++;
	}
	if (r > o)
		cout << o;
	else
		cout << r;
}
