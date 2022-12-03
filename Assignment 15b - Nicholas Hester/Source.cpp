// Nicholas Hester
// CIS 1202-501
// December 3, 2022

#include <iostream>
using namespace std;

int half(int input)
{
	if ((input / 2.0) > .5)
		return input / 2 + 1;
	else
		return input / 2;
}

template <typename A>
A half(A input)
{
	return input / 2;
}

int main()
{
	return 0;
}