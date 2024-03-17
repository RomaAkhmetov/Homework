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
	ll a, b;
	cin >> a >> b;
	
	vector <ll> a1;
	vector <ll> b1;
	ll div = 2;
	while (a > 1)
	{
		while (a % div == 0)
		{
			a = a / div;
			a1.push_back(div);
		}
		div++;
	}
	ll div2 = 2;
	while (b > 1)
	{
		while (b % div2 == 0)
		{
			b = b / div2;
			b1.push_back(div2);
		}
		div2++;
	}

	vector <ll> res;
	for (ll i = 0; i < a1.size(); i++)
	{
		if(find(b1.begin(), b1.end(), a1[i]) != b1.end() 
		&& find(res.begin(), res.end(), a1[i]) == res.end())
			res.push_back(a1[i]);
	}


	ll pr = 1;
	for (ll j = 0; j < res.size(); j++)
	{
		pr = pr * res[j];
	}
	cout << pr;
}


