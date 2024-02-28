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
	char letter;
	cin >> letter;

	vector <char> klaviatura { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b',
	'n', 'm' };
	auto it = find(klaviatura.begin(), klaviatura.end(), letter);
	auto index = distance(klaviatura.begin(), it);

	if (letter == 'm')
		cout << 'q';
	else
		cout << klaviatura[index + 1];
}
