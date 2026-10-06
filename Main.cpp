
#include <iostream>
#include "Credit.h"

int main()
{
	//int number{ 123 };
	//std::cout << getSumOfDigits(number) << '\n';
	std::string cardNumber1 = "4375123265462342";

	std::cout << startsWith(cardNumber1, "43") << '\n';
	std::cout << startsWith(cardNumber1, "23") << '\n';

}

