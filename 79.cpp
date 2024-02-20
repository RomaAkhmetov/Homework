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
	
	ull res = pow(a, b);
	if (res == 0 || res == 1 || res == 2 || res == 3 || res == 4 || res == 5 || res == 6 || res == 7 || res == 8 || res == 9)
	{
		cout << res;
	}
	else
	{
		cout << res % 10;
	}
}