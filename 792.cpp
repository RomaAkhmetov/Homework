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

ull f(ull n, ull p_1)
{
	ull tn = n;
	vector <ull> ost;
	while (tn != 0)
	{
		ull o = tn % p_1;
		ost.push_back(o);
		tn = tn / p_1;
	}
	ull sum = 0;
	for (ull i = 0; i < ost.size(); i++)
		sum += ost[i];
	return sum;
}

ull f1(ull n_1, ull p_2)
{
	ull tn_1 = n_1;
	vector <ull> ost1;
	while (tn_1 != 0)
	{
		ull o1 = tn_1 % p_2;
		ost1.push_back(o1);
		tn_1 = tn_1 / p_2;
	}
	ull sum_1 = 0;
	for (ull i = 0; i < ost1.size(); i++)
		sum_1 += ost1[i];
	return sum_1;
}

int main()
{
	ull n1, p1;
	cin >> n1 >> p1;

	ull n2, p2;
	cin >> n2 >> p2;

	ull s = f(n1, p1);
	ull s1 = f1(n2, p2);
	if (s == s1)
		cout << max(s, s1);
	else
		cout << 0;
}