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
	int N;
	cin >> N;

	if (N == 1 || N == 2 || N == 12)
		cout << "Winter";
	else if (N == 3 || N == 4 || N == 5)
		cout << "Spring";
	else if (N == 6 || N == 7 || N == 8)
		cout << "Summer";
	else if (N == 9 || N == 10 || N == 11)
		cout << "Autumn";
	else if (N > 12)
		cout << "Error";
}
