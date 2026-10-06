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

bool startsWith(const std::string& cardNumber, const std::string& prefix)
{
	const int prefixLength{ static_cast<int>(prefix.length()) };
	
	const std::string cardNumberPrefix{ cardNumber.substr(0, prefixLength) };

	if (cardNumberPrefix == prefix)
	{
		return true;
	}

	return false;
}

bool hasValidPrefix(const std::string& cardNumber)
{
	const int prefixesCount{ sizeof(Constants::validPrefixes) / sizeof(Constants::validPrefixes[0]) };
	for (int i = 0; i < prefixesCount; i++)
	{
		if (startsWith(cardNumber, Constants::validPrefixes[i]))
		{
			return true;
		}
	}
	
	return false;
}
