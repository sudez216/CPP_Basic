#include <array>
#include "io.h"

void ArrayClass()
{
	array<int, 3> Number = { 10,20,30 };
	// array 클래스타입, Number 변수

	cout << Number.size() << endl;
	cout << Number.front() << endl;
	cout << Number.back() << endl;
	cout << Number.empty() << endl;
	cout << Number.at(1) << endl;
}