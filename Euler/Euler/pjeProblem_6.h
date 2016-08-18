#pragma once
#include "pjeSolution.h"
//The sum of the squares of the first ten natural numbers is,
//
//1^2 + 2^2 + ... + 10^2 = 385
//The square of the sum of the first ten natural numbers is,
//
//(1 + 2 + ... + 10)^2 = 552 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
//3025 ? 385 = 2640.
//
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


class pjeProblem_6 :
	public pjeSolution
{
public:
	pjeProblem_6();

	virtual std::string description() const override;
	// Get the descriptions

	virtual long long run() override;
	// do the do

	virtual ~pjeProblem_6();
};

