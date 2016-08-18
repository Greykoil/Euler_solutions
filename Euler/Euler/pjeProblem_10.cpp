#include "stdafx.h"
#include "pjeProblem_10.h"
#include "pjeFactorizerUtils.h"


pjeProblem_10::pjeProblem_10()
{
}


std::string pjeProblem_10::description() const
{
	return "Sum of the all primes less than 2 million";
}

long long pjeProblem_10::run()
{
	std::vector<int> primes;
	long long sum = 2;
	for (int i = 3; i < 2000000; i += 2) {
		if (pjeFactorizerUtils::is_prime(i)) {
			primes.push_back(i);
			sum += i;
		}
	}
	return sum;
}


pjeProblem_10::~pjeProblem_10()
{
}
