#include <fstream>
#include <iostream>
#include "Credit.h"

int main()
{
//	std::string sampleCard = "34567";
//
//	std::cout << "Test getSumOfDigits(34567) == 25: " << getSumOfDigits(34567) << '\n';
//
//	std::cout << "Test startsWith(\"34567\", \"3\") == 1: " << startsWith(sampleCard, "3") << '\n';
//
//	std::cout << "Test hasValidPrefix(\"34567\") == 0: " << hasValidPrefix(sampleCard) << '\n';
//
//	std::cout << "Test hasValidPrefix(\"37567\") == 1: " << hasValidPrefix("37567") << '\n';
//	std::cout << "Test hasValidPrefix(\"47567\") == 1: " << hasValidPrefix("47567") << '\n';
//	std::cout << "Test hasValidPrefix(\"57567\") == 1: " << hasValidPrefix("57567") << '\n';
//	std::cout << "Test hasValidPrefix(\"67567\") == 1: " << hasValidPrefix("67567") << '\n';
//
//	std::cout << "Test sumOddDigitsRightToLeft(\"34567\") == 15: " << sumOddDigitsRightToLeft(sampleCard) << '\n';
//
//	std::cout << "Test sumEvenDigitsRightToLeft(\"34567\") == 11: " << sumEvenDigitsRightToLeft(sampleCard) << '\n';
//
//	std::string testArr[]{ "4388576018402626", "4388576018410707" };
//
//	std::cout << "Test isCardValid(\"4388576018402626\") == 0: " << isCardValid(testArr[0]) << '\n';
//
//	std::cout << "Test isCardValid(\"4388576018410707\") == 1: " << isCardValid(testArr[1]) << '\n';

	std::string inputFilename = "cards.txt";
	std::ifstream fin;
	fin.open(inputFilename);

	if (fin.is_open()) 
	{

	}
	else
	{
		std::cout << "Error: could not open file: \"" << inputFilename << "\"\n";
		exit(1);
	}

	std::string ccNumber;
	int validCards{};
	int invalidCards{};
	while (fin >> ccNumber) 
	{
		bool cardValid{ isCardValid(ccNumber) };
		cardValid ? validCards++ : invalidCards++;
		std::cout << ccNumber << "   valid: " << cardValid << '\n';
	}
	fin.close();

	std::cout << "-------------------------------------------------------\n";
	std::cout << "valid cards: " << validCards << '\n';
	std::cout << "invalid cards: " << invalidCards << '\n';
 	
	return 0;
}                                                                                           