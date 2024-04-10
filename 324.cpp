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
	string n;
	cin >> n;

	string cnt = "";
	for (ll i = 0; i < n.size(); i++)
	{
		cnt += n[i];
	}

	string si = "";
	for (ll i = n.size() - 1; i >= 0; i--)
	{
		si += n[i];
	}

	ll g = stoi(cnt);
	ll g2 = stoi(si);
	if (g == g2)
		cout << "YES";
	else
		cout << "NO";
}