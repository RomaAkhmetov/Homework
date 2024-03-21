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

ll GCD(ll a, ll b)
{
    ll div;
    if (a == b) 
       return a;
    ll d = a - b;
    if (d < 0) {
        d = -d;
        div = GCD(a, d);
    }
    else
        div = GCD(b, d);
    return div;
}

ll NOK(ll a, ll b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
	ll a, b;
	cin >> a >> b;

    ll res = NOK(a, b);
    cout << res;
}


