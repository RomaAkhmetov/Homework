#define _CRT_SECURE_NO_WARNINGS
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

	int sliece_num = 2;
	for (int i = 2; i <= n; i++)
	{
		sliece_num += i;
	}
	cout << sliece_num;
}