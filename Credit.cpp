#include "Credit.h"

int getSumOfDigits(int number)
{
	int sum{};

	while (number != 0)
	{
		sum += number % 10;   // get digits in ones place
		number = number / 10; // truncate current digit in ones place
	}

	return sum;
}