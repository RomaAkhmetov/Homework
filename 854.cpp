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
	int tr, tc;
	cin >> tr >> tc;

	string s;
	cin >> s;

	if (s == "freeze")
		cout << min(tr, tc);
	else if (s == "heat")
		cout << max(tr, tc);
	else if (s == "fan")
		cout << tr;
	else if (s == "auto")
		cout << tc;
}
