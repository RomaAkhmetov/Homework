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

struct Student
{
	ll age;
	string name;
	double medium_ball;
};

bool operator==(const Student& lhs, const Student& rhs)
{
	return lhs.medium_ball == rhs.medium_ball && lhs.age == rhs.age && lhs.name == rhs.name;
	return 0;
	// return lhs.medium_ball == rhs.medium_ball && lhs.age == rhs.age && lhs.name == rhs.name;
}

bool operator<(const Student& lhs, const Student& rhs)
{
	if (lhs.medium_ball != rhs.medium_ball)
		return lhs.medium_ball < rhs.medium_ball;
	if (lhs.age != rhs.age)
		return lhs.age < rhs.age;
	return lhs.name < rhs.name;
}
int main()
{
	const ll STUDENTS_COUNT = 3;
	vector<Student> school(STUDENTS_COUNT);
	for (auto& [age, name, medium_ball] : school)
		cin >> age >> name >> medium_ball;
	sort(school.begin(), school.end());
	for (const auto& [age, name, medium_ball] : school)
		cout << age << ' ' << name << ' ' << medium_ball << ' ';
}

//Z
// 12 Zorro 5.0  15 Dijkstra 3.9  12 Aho-Karasic 2.8