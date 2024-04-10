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
	ll k;
	cin >> k;

	for (ll i = 0; i < k; i++)
	{
		string s;
		cin >> s;

		int n1 = stoi(s) - 1;
		int n2 = stoi(s) + 1;

		int ost0n1b = n1 % 10;
		int ost1n1b = (n1 % 100) / 10;
		int ost2n1b = (n1 % 1000) / 100;
		int ost0n1a = (n1 % 1000000) / 100000;
		int ost1n1a = (n1 % 100000) / 10000;
		int ost2n1a = (n1 % 10000) / 1000;

		int ost0n2b = n2 % 10;
		int ost1n2b = (n2 % 100) / 10;
		int ost2n2b = (n2 % 1000) / 100;
		int ost0n2a = (n2 % 1000000) / 100000;
		int ost1n2a = (n2 % 100000) / 10000;
		int ost2n2a = (n2 % 10000) / 1000;

		ll r_n1 = abs((ost0n1a + ost1n1a + ost2n1a) - (ost0n1b + ost1n1b + ost2n1b));
		ll r_n2 = abs((ost0n2a + ost1n2a + ost2n2a) - (ost0n2b + ost1n2b + ost2n2b));
		if (r_n1 == 0 || r_n2 == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

}