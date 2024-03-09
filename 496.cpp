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

	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	int mx = 0;
	for (int j = 0; j < n; j++)
	{
		int sum = 0;
		if (j == 0)
			sum = a[j] + a[j + 1] + a[n - 1];
		else if (j == a.size() - 1)
			sum = a[j] + a[0] + a[j - 1];
		else
			sum = a[j] + a[j + 1] + a[j - 1];

		if (sum > mx)
			mx = sum;
	}
	cout << mx;
}