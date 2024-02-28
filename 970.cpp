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
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;

	if (((a1 + a2) == a3) || ((a1 + a3) == a2) || ((a2 + a3) == a1))
		cout << "YES";
	else
		cout << "NO";
}
