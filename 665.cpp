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

char ctoi(char a)
{
    return a - '0';
}

string otrazhenie(string e)
{
    string g = "";
    for (ll p = e.size() - 1; p >= 0; p--)
        g += e[p];
    return g;
}

string convert_to_hours(string e)
{
    if (e[1] == '9')
    {
        e[0] += 1;
        string res = to_string(ctoi(e[0])) + "0";
        return res;
    }
    else if (e[0] == '0' && e[1] != '9')
    {
        e[1] += 1;
        string res = "0" + to_string(ctoi(e[1]));
        return res;
    }
    else
    {
        e[1] += 1;
        string res = to_string(ctoi(e[0])) + to_string(ctoi(e[1]));
        return res;
    }
}

string romas_code(string s)
{
    //string s;
    //cin >> s;

    vector<char> h;
    vector<char> m;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == ':')
            break;
        h.push_back(s[i]);
    }
    for (ll j = 3; j < s.size(); j++)
        m.push_back(s[j]);
    string e = to_string(ctoi(h[0])) + to_string(ctoi(h[1]));
    string f = to_string(ctoi(m[0])) + to_string(ctoi(m[1]));
    if (e == "23" && f >= "32")
    {
        //cout << "00:00";
        //return 0;
        return "00:00";
    }
    else if ((otrazhenie(e) == f))
    {
        string u = convert_to_hours(e);
        //cout << u << ':' << otrazhenie(u);
        return u + ':' + otrazhenie(u);
    }
    else if ((otrazhenie(e) > f))
    {
        //cout << e << ':' << otrazhenie(e);
        //return 0;

        return e + ':' + otrazhenie(e);
    }
    else if (otrazhenie(e) < f)
    {
        string y = convert_to_hours(e);
        //cout << y << ':' << otrazhenie(y);
        //return 0;
        return y + ':' + otrazhenie(y);
    }
}

string inc_time(string t)
{
    string h;
    string m;

    h = t.substr(0, 2);
    m = t.substr(3, 2);

    int ih = stoi(h);
    int im = stoi(m);

    im++;

    if (im > 59)
    {
        im = 0;
        ih++;
    }

    if (ih > 23)
    {
        ih = 0;
    }

    h = to_string(ih);
    m = to_string(im);

    if (h.size() < 2)
        h = "0" + h;

    if (m.size() < 2)
        m = "0" + m;

    return h + ":" + m;
}

string papas_code(string s)
{

    string t = s;
    while (true)
    {
        t = inc_time(t);

        if (t.substr(0, 2) == t.substr(4, 1) + t.substr(3, 1))
            return t;
    }
}

int main()
{
    string s;
    cin >> s;

    //cout << romas_code(s);

    cout << papas_code(s);
}

//Z