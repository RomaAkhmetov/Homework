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
	int n;
	cin >> n;

	vector <int> wm(n);
	for (int i = 0; i < n; i++)
	{
		cin >> wm[i];
	}
	sort(wm.begin(), wm.end());
	cout << wm[0] << ' ' << wm[n - 1];
}