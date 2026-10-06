
#include <iostream>
#include "Credit.h"

int main()
{
	//int number{ 123 };
	//std::cout << getSumOfDigits(number) << '\n';

	//std::cout << startsWith(cardNumber1, "43") << '\n';
	//std::cout << startsWith(cardNumber1, "23") << '\n'; 
	std::string cardNumbers[]{ "4375123265462342", "5375123265462342", "6375123265462342", "3775123265462342", "2375123265462342" };
	std::string simpleNumbers[]{ "12345", "11111", "12", "321", "11233", "9999", "77777"};
//	int cardCount{ sizeof(cardNumbers) / sizeof(cardNumbers[0]) };
//	for (int i = 0; i < cardCount; i++)
//	{
//		std::cout << cardNumbers[i] << ": " << hasValidPrefix(cardNumbers[i]) << '\n';
//	}

//	int cardCount{ sizeof(simpleNumbers) / sizeof(simpleNumbers[0]) };
//	for (int i = 0; i < cardCount; i++)
//	{
//		std::cout << simpleNumbers[i] << ": " << sumOddDigitsRightToLeft(simpleNumbers[i]) << '\n';
//	}

	int cardCount{ sizeof(simpleNumbers) / sizeof(simpleNumbers[0]) };
	for (int i = 0; i < cardCount; i++)
	{
		std::cout << simpleNumbers[i] << ": " << sumEvenDigitsRightToLeft(simpleNumbers[i]) << '\n'; 
	}
}                                                                                           