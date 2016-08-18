#include "stdafx.h"
#include "pjeProblem_7.h"
#include "pjeFactorizerUtils.h"
#include <vector>

pjeProblem_7::pjeProblem_7()
{
}

std::string pjeProblem_7::description() const
{
	return "Find the 10 001 st prime";
}

long long pjeProblem_7::run()
{
	pjeFactorizerUtils utils;
	std::vector<long long> primes;
	int count = 0;
	primes.push_back(2);
	for (int i = 3; count < 10003 ; i += 2) {
		if (utils.is_prime(i)) {
			++count;
			primes.push_back(i);
		}
	}
	long long final = primes[10000];
	return final;
}

pjeProblem_7::~pjeProblem_7()
{
}
