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

	string e_head = "2";
	string e_tail = "7182818284590452353602875";
	if (n == 0)
	{
		cout << 3;
		return 0;
	}
	if (n < e_tail.size())
	{
		if (e_tail[n] > '4')
		{
			e_tail[n - 1] += 1;
		}
	}
	cout << e_head << '.' << e_tail.substr(0, n);
}
