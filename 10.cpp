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
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	
	for (int i = -100; i <= 100; i++)
	{
		if ((a * pow(i, 3) + b * pow(i, 2) + c * i + d) == 0)
			cout << i << ' ';
	}
}
//отлично
