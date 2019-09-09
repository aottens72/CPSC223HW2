#include <iostream>
#include <cassert>
#include "integer.h"

using namespace std;

int main()
{
	// test name values
	Integer x1("42");
	Integer x2("42");
	assert(x1 == x2);


	return 0;
}