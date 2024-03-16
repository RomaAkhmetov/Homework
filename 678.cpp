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
	string s;
	cin >> s;

	int ballpossicion = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A' && ballpossicion == 1)
			ballpossicion++;
		if (s[i] == 'A' && ballpossicion == 2)
			ballpossicion--;
		else if (s[i] == 'B' && ballpossicion == 3)
			ballpossicion--;
		else if (s[i] == 'B' && ballpossicion == 2)
			ballpossicion++;
		else if (s[i] == 'C' && ballpossicion == 3)
			ballpossicion -= 2;
		else if (s[i] == 'C' && ballpossicion == 1)
			ballpossicion += 2;
	}
	cout << ballpossicion;
}


