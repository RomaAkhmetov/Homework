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
#include <unordered_map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
 
struct Point
{
    ll xh;
    ll yh;
};

int main()
{
    ll xg, yg;
    cin >> xg >> yg;

    ll xd, yd;
    cin >> xd >> yd;

    ll n;
    cin >> n;

    vector <Point> a;
    for (ll i = 0; i < n; i++)
    {
        Point tmp;
        cin >> tmp.xh >> tmp.yh;

        a.push_back(tmp);
    }
    ll ind_r = -1;
    for (ll o = 0; o < n; o++)
    {
        ll ag = abs(xg - a[o].xh);
        ll bg = abs(yg - a[o].yh);
        double cg = sqrt(pow(ag, 2) + pow(bg, 2));
        ll ad = abs(xd - a[o].xh);
        ll bd = abs(yd - a[o].yh);
        double cd = sqrt(pow(ad, 2) + pow(bd, 2));

        if (cg <= (cd / 2.0))
        {
            ind_r = o;
            break;
        }
    }
    if (ind_r == -1)
        cout << "NO";
    else
        cout << ind_r + 1;
}

//Z
