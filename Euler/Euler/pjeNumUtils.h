#pragma once
#include <vector>
// This class is a collection of reusable functions for number manipulation

class pjeNumUtils
{
public:
	pjeNumUtils();
	
	// Does the given number contain the same digit twice
	static bool contains_repeated_digit(long long num);

	// Split num into its digits
	static void split_number(std::vector<int>& digits, long long num);

	// replace the n'th digit of number with new_value
	// starts from the right of the number and is zero indexed.
	// IE num - 765098 has 0th digit 8, 1st digit 9 and 5th digit 7
	static long long replace_digit(long long number, int nth_digit, int new_value);

	// how many digits in the numer
	static int num_digits(long long number);
	~pjeNumUtils();
};

