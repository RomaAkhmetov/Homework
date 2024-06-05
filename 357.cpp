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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 
char ctoi(char a)
{
	return a - '0';
}

int main()
{
	string n;
	cin >> n;

	ll sum1 = 0;
	ll sum2 = 0;
	for (ll i = 0; i < n.size(); i++)
	{
		if (i % 2 == 0)
			sum1 += ctoi(n[i]);
		else
			sum2 += ctoi(n[i]);
	}
	if (abs(sum1 - sum2) % 11 == 0)
		cout << "YES";
	else
		cout << "NO";
}

//Z