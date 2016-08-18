#pragma once
#include "pjeSolution.h"

//"If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. "
//"The sum of these multiples is 23."
//" Find the sum of all the multiples of 3 or 5 below 1000.";

class pjeProblem_1 : public pjeSolution
{
public:
	pjeProblem_1();

	virtual std::string description() const override;
	// Return a description of the problem

	virtual long long run() override;
	// Run the solution

	virtual ~pjeProblem_1();
};

