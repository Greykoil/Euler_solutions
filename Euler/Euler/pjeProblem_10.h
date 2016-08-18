#pragma once
#include "pjeSolution.h"

//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//Find the sum of all the primes below two million.


class pjeProblem_10 :
	public pjeSolution
{
public:
	pjeProblem_10();

	virtual std::string description() const override;
	// Return a description of the problem

	virtual long long run() override;
	// Run the solution

	virtual ~pjeProblem_10();
};

