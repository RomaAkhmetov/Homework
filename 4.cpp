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
	int k;
	cin >> k;

    int first = k;
	int second = 9;
	int third = 9 - k;
	string s1 = to_string(first);
	string s2 = to_string(second);
	string s3 = to_string(third);
	string res = s1 + s2 + s3;
	cout << res;
}


