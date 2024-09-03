#define _USE_MATH_DEFINES_
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

struct our_time
{
    int h;
    int m;
};

int minutes_calculation(vector<our_time>& tm)
{
    if ((tm[0].m > tm[1].m && tm[1].h >= tm[0].h) || (tm[0].h > tm[1].h && tm[0].m < tm[1].m))
    {
        tm[0].h -= 1;
        int p1 = tm[0].m + 60;
        int res = abs(p1 - tm[1].m);
        return res;
    }
    else
    {
        int res = abs(tm[0].m - tm[1].m);
        return res;
    }
}

vector<int> time_calculation(vector<our_time> tm)
{
    if (tm[0].h > tm[1].h)
    {
        our_time time_p;
        time_p.h = 24;
        time_p.m = 0;
        vector<our_time> dop_v;
        dop_v.push_back(time_p);
        vector<our_time> mid = { dop_v[0],  tm[0]};
        ll midnight_m = minutes_calculation(mid);
        ll midnight_h = abs(mid[0].h - tm[0].h);
        int rm = midnight_m + tm[1].m;
        int rh = midnight_h + tm[1].h;
        if (rm >= 60)
        {
            rm -= 60;
            rh += 1;
        }
        vector<int> l = { rh, rm };
        return l;
    }
    else
    {
        int res_m = minutes_calculation(tm);
        int res_h = abs(tm[0].h - tm[1].h);
        if (res_m >= 60)
        {
            res_m -= 60;
            res_h += 1;
        }
        vector<int> g = { res_h, res_m };
        return g;
    }
}

int main()
{
    vector<our_time> tm;
    for (int i = 0; i < 2; i++)
    {
        our_time tmp;
        cin >> tmp.h >> tmp.m;

        tm.push_back(tmp);
    }
    vector<int> a = time_calculation(tm);
    int sum = (a[0] - 1) + a[1] / 30;
    if ((tm[0].h > tm[1].h && tm[0].m < 30 && tm[1].m < 30) || (tm[1].h - tm[0].h == 0 && tm[1].h >= 30 && a[1] < 30) || (((tm[1].m > 30 && tm[0].m > 30) || (tm[1].m < 30 && tm[0].m > 30) || (tm[1].m < 30 && tm[0].m < 30)) && tm[0].h < tm[1].h))
        sum += 1;
    else if (tm[0].h > tm[1].h && tm[0].m > 30 && tm[1].m < 30)
        sum -= 1;
    else if (tm[0].m < 30 && tm[1].m > 30)
        sum += 2;

    vector<int> number_of_beats_per_hour;
    if (tm[0].m == 0)
        number_of_beats_per_hour.push_back(tm[0].h);
    ll f = tm[1].h;
    if (tm[1].h < tm[0].h)
        f += 24;
    for (ll k = tm[0].h + 1; k <= f; k++)
    {
        if (k > 12)
        {
            if (k % 12 == 0)
                number_of_beats_per_hour.push_back(12);
            else
                number_of_beats_per_hour.push_back(k % 12);
        }
        else
            number_of_beats_per_hour.push_back(k);
    }
    ll sum1 = 0;
    for (ll j = 0; j < number_of_beats_per_hour.size(); j++)
        sum1 += number_of_beats_per_hour[j];
    cout << sum + sum1;
}

//Z