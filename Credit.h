#pragma once
#include <string>

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

