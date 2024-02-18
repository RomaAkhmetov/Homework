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
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		sum += a[i];
	}
	int z = n - 1;
	int res = sum - z;
	cout << res;
}