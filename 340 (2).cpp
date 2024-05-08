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
	vector <ll> tv1(3);
	vector <ll> tv2(3);
	for (ll j = 0; j < 3; j++)
	{
		cin >> tv1[j];
	}
	for (ll u = 0; u < 3; u++)
	{
		cin >> tv2[u];
	}

	sort(tv1.begin(), tv1.end());
	sort(tv2.begin(), tv2.end());

	if (tv1[0] == tv2[0] && tv1[1] == tv2[1] && tv1[2] == tv2[2])
		cout << "Boxes are equal";
	else if (tv1[0] >= tv2[0] && tv1[1] >= tv2[1] && tv1[2] >= tv2[2])
		cout << "The first box is larger than the second one";
	else if (tv1[0] <= tv2[0] && tv1[1] <= tv2[1] && tv1[2] <= tv2[2])
		cout << "The first box is smaller than the second one";
	else
		cout << "Boxes are incomparable";
}

//Z
