#pragma once
#include "pjeSolution.h"


//By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number ?


class pjeProblem_7 :
	public pjeSolution
{
public:
	pjeProblem_7();


	virtual std::string description() const override;
	// Return a description of the problem

     virtual long long run() override;
	// Run the solution

	virtual ~pjeProblem_7();
};

