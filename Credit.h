#pragma once
#include <string>

namespace Constants {
	const std::string validPrefixes[] {"4", "5", "6", "37"};
}

/// <summary>
/// Get the sum of the individual digits in a number.
/// </summary>
/// <param name="number">Number to analyze.</param>
/// <returns>Sum of each digit within the number.</returns>
int getSumOfDigits(int number);

/// <summary>
/// Check if card number starts with given prefix.
/// </summary>
/// <param name="cardNumber">Card number.</param>
/// <param name="prefix">Prefix of card number.</param>
/// <returns>True if card number has given prefix. False otherwise</returns>
bool startsWith(const std::string& cardNumber, const std::string& prefix);

/// <summary>
/// Checks if card number starts with "4", "5", "6", or "37"
/// </summary>
/// <param name="cardNumber">Card number.</param>
/// <returns>True if card number is valid, false otherwise.</returns>
bool hasValidPrefix(const std::string& cardNumber);

/// <summary>
/// Add up the odd-place digits from right to left.
/// </summary>
/// <param name="cardNumber">Card number.</param>
/// <returns>Sum of odd-place digits.</returns>
int sumOddDigitsRightToLeft(const std::string& cardNumber);

/// <summary>
/// Add up the sum of even-place digits * 2. If the even-place digit * 2 
/// results in a multi-digit number, add the digits together, and add that to
/// the sum.
/// </summary>
/// <param name="cardNumber">Card number.</param>
/// <returns>Sum of even place digits.</returns>
int sumEvenDigitsRightToLeft(const std::string& cardNumber);

/// <summary>
/// Checks if card number is valid based on Luhn's algorithm.
/// </summary>
/// <param name="cardNumber">Card number.</param>
/// <returns>True if valid, false otherwise.</returns>
bool isCardValid(const std::string& cardNumber);
