#include "prac07_task1_ex12.h"
#include <iostream>
#include <string>
#include <format>

using namespace std;

int main()
{
	KeyValuePair<int, double> kv1{ 11, 2.33 };
	cout << kv1.getKey() << "=" << kv1.getValue() << endl;

	KeyValuePair kv2{ "John Doe"s, 123456 };
	cout << kv2.getKey() << "=" << kv2.getValue() << endl;
}
