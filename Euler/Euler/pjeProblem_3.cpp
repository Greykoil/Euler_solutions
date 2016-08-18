#include "stdafx.h"
#include "pjeProblem_3.h"
#include "pjeFactorizerUtils.h"
#include <vector>
#include <set>

pjeProblem_3::pjeProblem_3()
{
}

std::string pjeProblem_3::description() const
{
	return "Largest prime factor of 600851475143";
}

long long pjeProblem_3::run()
{
	std::vector<long long> factors;
	long long large_number = 600851475143;
	pjeFactorizerUtils().prime_factors(large_number, factors);
	return factors[factors.size() - 1];
}

pjeProblem_3::~pjeProblem_3()
{
}
