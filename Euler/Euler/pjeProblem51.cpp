#include "stdafx.h"
#include "pjeProblem51.h"
#include "pjeFactorizerUtils.h"
#include "pjeNumUtils.h"

#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
#include <assert.h>
// Some thoughts:
// we can find the family from any point in the cycle.
// We only want to carwe about primes that have a repeated digit.


pjeProblem51::pjeProblem51()
{
}

std::string pjeProblem51::description() const {
	return "Smallest prime in an 8 prime family";
}

long long pjeProblem51::run() {

	int required_length = 8;
	
	int start = 10;
	int end = 100;
	int num_digits = 2;
	while (true) {
		std::cout << "Generating " << num_digits << " digit primes\n";
		std::set<long> n_digit_primes;
		double percent = 0;
		double last = -1;
		for (int i = start; i < end; ++i) {
			percent = (double)i / (double)end;
			if (percent > last + 0.1) {
				last = percent;
				std::cout << ".";
			}
			if (pjeNumUtils::contains_repeated_digit(i)) {
				if (pjeFactorizerUtils::is_prime(i)) {
					n_digit_primes.insert(i);
				}
			}
		}
		int longest = find_for(n_digit_primes, num_digits, required_length);
		if (longest >= required_length) {
			return 0;
		}
		start *= 10;
		end *= 10;
		++num_digits;
	}

	return 0;
}


pjeProblem51::~pjeProblem51()
{
}

bool pjeProblem51::find_for(const std::set<long>& primes, int num_digits, int required_length)
{
	int max_found = 0;
	std::cout << "\nCurrently look at " << num_digits << " digit numbers\n";
	long count = 0;
	long vector_size = primes.size();
	double percent = 0;
	double last = -1;
	for (int num : primes) {
		percent = (double)count / (double)vector_size;
		if (percent > last + 0.1) {
			last = percent;
			std::cout << ".";
		}
		++count;

		int found = find_matching_values(num, primes);
		if (found > max_found) {
			max_found = found;
			m_best = num;
		}
	}


	std::cout << "\nLongest current loop is " << max_found << "\n";
	std::cout << "It starts at " << m_best;

	std::cout << "\n";
	return (max_found >= required_length);
}

int pjeProblem51::find_matching_values(long num, const std::set<long>& primes)
{

	std::vector<int> digits;
	pjeNumUtils::split_number(digits, num);
	int max = 0;

	for (int i = 0; i < (int)digits.size(); ++i) {
		std::vector<int> repeat_locs;
		repeat_locs.push_back(i);
		for (int j = i + 1; j < (int)digits.size(); ++j) {
			if (digits[i] == digits[j]) {
				repeat_locs.push_back(j);
			}
		}
		if (repeat_locs.size() > 1) {
			int current = check_set_for_rep(digits, repeat_locs, primes);
			max = std::max(current, max);
		}
	}
	return max;
}

int pjeProblem51::check_set_for_rep(const std::vector<int>& digits, const std::vector<int>& repeat_locs, const std::set<long>& primes)
{
	int count = 0;
	int missed = 0;
	for (int replace = 0; replace < 10; ++replace) {
		long sum = 0;
		long mult = 1;
		for (int num = digits.size() - 1; num >= 0; --num) {
			bool added = false;
			for (int pos : repeat_locs) {
				if (num == pos) {
					sum += (mult * replace);
					added = true;
				}
			}
			if (!added) {
				sum += (mult * digits[num]);
			}
			mult *= 10;
		}
		if (primes.find(sum) != primes.end()) {
			++count;
		}
	}
	return count;
}