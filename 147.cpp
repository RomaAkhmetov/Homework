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
    ll n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    else if (n == 1)
    {
        cout << 1;
        return 0;
    }

    ll fc = 1;
    ll fp = 0;
    for (ll i = 1; i < n; i++)
    {
        ll tmp = fc;
        fc = fc + fp;
        fp = tmp;
    }
    cout << fc;
}
