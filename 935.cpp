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
	ull x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	if (((x1 + y1) % 2 == 0) && ((x2 + y2) % 2 == 0))
		cout << "YES";
	else if (((x1 + y1) % 2 != 0) && ((x2 + y2) % 2 != 0))
		cout << "YES";
	else
		cout << "NO";
}