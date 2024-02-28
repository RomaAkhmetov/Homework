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
	double w, h, r;
	cin >> w >> h >> r;

	if (2 * r <= min(w, h))
		cout << "YES";
	else
		cout << "NO";
}
