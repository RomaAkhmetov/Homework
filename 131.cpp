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

struct Pair1
{
	int V;
	int S;
};


int main()
{
	int n;
	cin >> n;

	vector <Pair1> p(n);
	int male = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].V >> p[i].S;
	}


	int index = -2;
	int age = -1;
	for (int j = 0; j < n; j++)
	{
		if (p[j].S == 1)
		{
			if (p[j].V > age)
			{
				age = p[j].V;
				index = j;
			}
		}
	}
	cout << index + 1;

}