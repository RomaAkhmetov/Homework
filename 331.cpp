#define _CRT_SECURE_NO_WARNINGS
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
	//напишите вариант без string, сразу читайте в int. Чтоб пропустить двоеточие нужно написать cin.ignore(1);
	cin >> s;

	int th, tm;
	cin >> th >> tm;

	string hs = s.substr(0, 2);
	string ms = s.substr(s.find(":")+1, 2);
	int h = stoi(hs);
	int m = stoi(ms);
	
	int sum1 = h + th;
	int sum2 = m + tm;
	
	int summin = sum1 * 60 + sum2;
	
	int days = summin / 1440;
	int resh = summin / 60 - days * 24;
	
	int resm = summin % 1440 - resh * 60;

	cout << setw(2) << setfill('0') << resh << ":" << setw(2) << setfill('0') << resm;

}
//Хочется лаконичнее. Предположим у вас есть текущее время в минутах(время старта + время в дороге).
//Как перейти от него к текущему колчеству часов? Как перейти к текущему количеству минут?
