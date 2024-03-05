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
	int g, l;
	cin >> g >> l;

	int x = g + l - 1;
	int n_g = x - g;
	int n_l = x - l;
	cout << n_g << ' ' << n_l;
}