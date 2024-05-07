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



int main()
{
	vector <ll> v(6);
	for (ll i = 0; i < 6; i++)
	{
		cin >> v[i];
	}
	vector <ll> tv1;
	vector <ll> tv2;
	for (ll j = 0; j < 3; j++)
	{
		tv1.push_back(v[j]);
	}
	for (ll u = 3; u < 6; u++)
	{
		tv2.push_back(v[u]);
	}

	sort(tv1.begin(), tv1.end());
	sort(tv2.begin(), tv2.end());
	if (tv1[0] == tv2[0] && tv1[1] == tv2[1] && tv1[2] == tv2[2])
		cout << "Boxes are equal";
	else if (tv1[0] >= tv2[0] && tv1[2] >= tv2[2])
	{
		if ((tv1[0] == tv2[0] && tv1[2] == tv2[2] && tv1[1] > tv2[1]) || (tv1[1] == tv2[1] && tv1[2] == tv2[2] && tv1[0] > tv2[0]) || (tv1[1] == tv2[1] && tv1[2] > tv2[2] && tv1[0] == tv2[0]))
			cout << "The first box is larger than the second one";
		else
			cout << "The first box is smaller than the second one";
		return 0;
		
	}
	else if (tv1[0] <= tv2[0] && tv1[2] <= tv2[2])
		cout << "The first box is smaller than the second one";
	else
		cout << "Boxes are incomparable";
}

//Z