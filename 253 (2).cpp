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

bool t_less_t(our_time t1, our_time t2)
{
    if (t1.h < t2.h)
        return true;
    else
        if (t1.h > t2.h)
            return false;
        else
            if (t1.m < t2.m)
                return true;
            else
                return false;
}

our_time inc_t(our_time t)
{
    if (t.m < 30)
        t.m = 30;
    else
    {
        t.h++;
        t.m = 0;
    }

    return t;
}

int get_bums(our_time t)
{
    if (t.m == 30)
        return 1;
    
    int h_bums = t.h;
    if (h_bums > 12)
        h_bums = h_bums - 12;

    return h_bums;
}

int main()
{
    our_time t1, t2;
    
    cin >> t1.h >> t1.m;

    cin >> t2.h >> t2.m;

    
    int bum_count = 0;

    if (t_less_t(t1, t2))
    {
        our_time tc = t1;
        
        tc = inc_t(tc);

        while (t_less_t(tc, t2))
        {
           bum_count += get_bums(tc);

           tc = inc_t(tc);
        }
    }
    else
    {
        our_time tc = t1;
        our_time t_midnight;

        t_midnight.h = 24;
        t_midnight.m = 0;

        tc = inc_t(tc);

        while (t_less_t(tc, t_midnight))
        {
            bum_count += get_bums(tc);
            
            tc = inc_t(tc);

        }

        bum_count += 12;

        tc.h = 0;
        tc.m = 30;

        while (t_less_t(tc, t2))
        {
            bum_count += get_bums(tc);

            tc = inc_t(tc);
        }

    }

    cout << bum_count;

    
}

//Z