//Gene Hosler
//CIS 1202
//8-1-2025

#include <iostream>
using namespace std;

template <typename T>

T half(T);

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}

template<typename T>
T half(T input)
{
	return input / 2;
}
