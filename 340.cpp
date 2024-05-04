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
	ll a1, b1, c1;
	cin >> a1 >> b1 >> c1;

	ll a2, b2, c2;
	cin >> a2 >> b2 >> c2;

	if ((a1 == a2 && b1 == b2 && c1 == c2) || (a1 == b2 && b1 == a2 && c1 == c2) || (a1 == c2 && b1 == b2 && c1 == a2))
		cout << "Boxes are equal";
	else if ((a1 <= a2 && b1 <= b2 && c1 <= c2) || (a1 <= b2 && b1 <= a2 && c1 <= c2) || (a1 <= c2 && b1 <= b2 && c1 <= a2))
		cout << "The first box is smaller than the second one";
	else if ((a1 >= a2 && b1 >= b2 && c1 >= c2) || (a1 >= b2 && b1 >= a2 && c1 >= c2) || (a1 >= c2 && b1 >= b2 && c1 >= a2))
		cout << "The first box is larger than the second one";
	else
		cout << "Boxes are incomparable";
}

//Z