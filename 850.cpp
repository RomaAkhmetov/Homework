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

	int mx = max(a, b);
	if (mx % 2 == 0)
	{
		cout << mx / 2;
	}
	else
	{
		cout << mx / 2 + 1;
	}
	cout  << ' ' << min(a, b);
}
//Хорошо
