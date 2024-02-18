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

	if (n % 2 == 0)
	{
		cout << n / 2;
	}
	else if(n == 1)
	{
		cout << 0;
	}
	else
	{
		cout << n;
	}
}