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
	int k;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		int n, m;
		cin >> n >> m;

		int d = 19 * m + (n + 239) * (n + 366) / 2;
		cout << d << endl;
	}
	
}