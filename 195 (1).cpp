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
	int n, a, b;
	cin >> n >> a >> b;

	int res = (n * (a * b)) * 2;
	cout << res;
}