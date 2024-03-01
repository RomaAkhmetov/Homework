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

	string s;
	cin >> s;

	s.erase(k - 1, 1);
	cout << s;
}
