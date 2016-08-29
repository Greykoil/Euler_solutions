#include "stdafx.h"
#include <algorithm>
#include "pjeNumUtils.h"


pjeNumUtils::pjeNumUtils() {

}

bool pjeNumUtils::contains_repeated_digit(long long num) {
	// Ensure that we have at least two digits
	if (num / 10 < 1) {
		return false;
	}
	std::vector<int> digits;
	split_number(digits, num);
	std::sort(digits.begin(), digits.end());
	for (size_t i = 0; i < digits.size() - 1; ++i) {
		if (digits[i] == digits[i + 1]){
			return true;
		}
	}
	return false;
}

void pjeNumUtils::split_number(std::vector<int>& digits, long long num) {

	while (num > 0) {
		int last = num % 10;
		digits.push_back(last);
		num = (num - last) / 10;
	}
	std::reverse(digits.begin(), digits.end());
}

long long pjeNumUtils::replace_digit(long long number, int nth_digit, int new_value) {
	
	std::vector<int> digits;
	split_number(digits, number);
	digits[nth_digit] = new_value;
	int mult = 1;
	long long sum = 0;
	for (int num : digits) {
		sum += num * mult;
		mult *= 10;
	}
	return sum;
}
int pjeNumUtils::num_digits(long long number)
{
	int digits = 0;
	while (number) {
		number /= 10;
		++digits;
	}
	return digits;
}
pjeNumUtils::~pjeNumUtils() {

}
