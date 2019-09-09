#include <iostream>
#include <string>
#include <vector>
#include "integer.h"
using namespace std;

Integer::Integer()
{
	negative = false;
	digits.push_back(0);
}

Integer::Integer(string val)
{
	negative = false;
	int n = int(val.size());
	//empty string
	if (n == 0){
		digits.push_back(0);
		return;
	}
	//leading zero
	if (val[0] == '0' && n > 1){
		digits.push_back(0);
		return;
	}
	for (int i = n-1; i >=0; --i){
		char c = val[i];
		if(isdigit(c))
			digits.push_back(c - '0');
		else{
			digits.clear();
			digits.push_back(0);
			return;
		}
	}
}

Integer Integer::operator-()
{
	if(negative)
		negative = false;
	else 
		negative = true;
}

Integer Integer::operator+(const Integer& rhs) const
{
	
}

Integer Integer::operator-(const Integer& rhs) const
{
	
}

bool Integer::operator<(const Integer& rhs) const
{
	
}

bool Integer::operator>(const Integer& rhs) const
{
	
}

bool Integer::operator<=(const Integer& rhs) const
{
	
}

bool Integer::operator>=(const Integer& rhs) const
{
	
}

bool Integer::operator==(const Integer& rhs) const
{
	
}

bool Integer::operator!=(const Integer& rhs) const
{
	
}

ostream& operator<<(ostream& out, const Integer& val)
{
	
}

digit_list Integer::add(const digit_list& lhs, const digit_list& rhs) const
{
	
}

digit_list Integer::sub(const digit_list& lhs, const digit_list& rhs) const
{
	
}

bool Integer::less_than(const digit_list& lhs, const digit_list& rhs) const
{
	
}











