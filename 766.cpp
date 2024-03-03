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
	int n, m, k;
	cin >> n >> m >> k;

	if (n * m >= k)
		cout << "YES";
	else
		cout << "NO";
}