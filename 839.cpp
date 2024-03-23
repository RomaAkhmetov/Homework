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
	string s;
	cin >> s;

	ll zero = 0;
	for (ll i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
			zero++;
	}

	if (zero == 0)
		cout << "YES";
	else
		cout << "NO";
}


