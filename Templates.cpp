//Gene Hosler
//CIS 1202
//8-1-2025

#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T half(T);

template <>
int half<int>(int);

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	system("pause");
	return 0;
}

template<typename T>
T half(T input)
{
	return input / 2;
}

template<>
int half<int>(int input) {
	return static_cast<int>(round(static_cast<float>(input) / 2));
}