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

int sumOddDigitsRightToLeft(const std::string& cardNumber)
{
	int sum{};
	int position{ 1 }; // rightmost digit is position 1
	const int endIndex{ static_cast<int>(cardNumber.size()) - 1 }; // card length - 1 = index of last digit
	for (int i = endIndex; i >= 0; i--, position++)
	{
		if (position % 2 == 1)
		{
			sum += cardNumber[i] - '0'; // cardNumber[i] is a char
		}
	}
	return sum;
}

int sumEvenDigitsRightToLeft(const std::string& cardNumber)
{
	int sum{};
	int position{ 1 }; // rightmost digit is position 1
	const int endIndex{ static_cast<int>(cardNumber.size()) - 1}; // card length - 1 = index of last digit
	for (int i = endIndex; i >= 0; i--, position++)
	{
		if (position % 2 == 0)
		{
			int digit{ cardNumber[i] - '0' } ; // cardNumber[i] is a char
			sum += getSumOfDigits(digit * 2);
		}
	}
	return sum;
}

bool isCardValid(const std::string& cardNumber)
{
	const int cardLength{ static_cast<int>(cardNumber.size()) };
	
	// Check card length requirements
	if (cardLength < 13 || cardLength > 16)
	{
		return false;
	}

	// Check prefix
	if (!hasValidPrefix(cardNumber))
	{
		return false;
	}

	// Sum even digits
	int evenSum{ sumEvenDigitsRightToLeft(cardNumber) };

	// Sum odd digits
	int oddSum{ sumOddDigitsRightToLeft(cardNumber) };
	
	// Combine sums
	int combinedSum{ evenSum + oddSum };
	
	// Check if divisible by 10
	if (combinedSum % 10 == 0)
	{
		return true;
	}
	
	// In all other cases, card is invalid
	return false;
}
