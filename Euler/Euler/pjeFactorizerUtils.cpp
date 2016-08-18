#include "stdafx.h"
#include "pjeFactorizerUtils.h"


pjeFactorizerUtils::pjeFactorizerUtils()
{
}


bool pjeFactorizerUtils::is_prime(long long number)
{
	long long root = std::sqrt(number);
	if (number % 2 == 0) {
		return false;
	}
	for (long long i = 3; i < root + 1; i += 2) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

void pjeFactorizerUtils::prime_factors(long long number, std::vector<long long>& factors)
{
	long long root = std::sqrt(number);
	if (number % 2 == 0) {
		factors.push_back(2);
	}
	for (long long i = 3; i < root; i += 2) {
		if (number % i == 0 && is_prime(i)) {
			factors.push_back(i);
		}
	}
}

pjeFactorizerUtils::~pjeFactorizerUtils()
{
}
