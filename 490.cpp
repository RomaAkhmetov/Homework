#define _USE_MATH_DEFINES_
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

//31 1
//28 2
//31 3
//30 4
//31 5
//30 6
//31 7
//31 8
//30 9
//31 10
//30 11
//31 12

ll convert_months_to_days(ll p)
{
	if (p == 2)
		return 28;
	else if ((p % 2 != 0 && p < 8) || (p > 7 && p % 2 == 0))
		return 31;
	else if ((p % 2 == 0 && p < 7) || (p > 8 && p % 2 != 0))
		return 30;
}

ll difference_between_years_and_months(ll Pe_nu_da, ll Pe_nu_mo, ll Pe_nu_ye, ll Va_nu_da, ll Va_nu_mo, ll Va_nu_ye)
{
	if (Pe_nu_ye != Va_nu_ye)
	{
		ll days = 0;
		for (ll m = Pe_nu_mo; m <= 12; m++)
		{
			if (m == Pe_nu_mo)
				days += (convert_months_to_days(m) - Pe_nu_da);
			else
				days += convert_months_to_days(m);
		}

		for (ll n = 1; n <= Va_nu_mo; n++)
		{
			if (n == Va_nu_mo)
				days += Va_nu_da;
			else
				days += convert_months_to_days(n);
		}

		return days;
	}
	else
	{
		if (Pe_nu_mo == Va_nu_mo)
			return Va_nu_da - Pe_nu_da;
		else
		{
			ll days = 0;
			for (ll q = Pe_nu_mo; q <= Va_nu_mo; q++)
			{
				if (q == Pe_nu_mo)
					days += (convert_months_to_days(q) - Pe_nu_da);
				else if (q == Va_nu_mo)
					days += Va_nu_da;
				else
					days += convert_months_to_days(q);
			}
			return days;
		}
	}
}

int main()
{
	string Peter_s_age;
	cin >> Peter_s_age;

	string Vasya_s_age;
	cin >> Vasya_s_age;

	ll Pe_nu_da = stoi(Peter_s_age.substr(0, 2));
	ll Pe_nu_mo = stoi(Peter_s_age.substr(3, 2));
	ll Pe_nu_ye = stoi(Peter_s_age.substr(6, 2));
	ll Va_nu_da = stoi(Vasya_s_age.substr(0, 2));
	ll Va_nu_mo = stoi(Vasya_s_age.substr(3, 2));
	ll Va_nu_ye = stoi(Vasya_s_age.substr(6, 2));

	cout << difference_between_years_and_months(Pe_nu_da, Pe_nu_mo, Pe_nu_ye, Va_nu_da, Va_nu_mo, Va_nu_ye);
}

//Z