#pragma once
#include "pjeSolution.h"

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

// This is fairly standard maths, I am actually going to do this by hand

class pjeProblem_5 :
	public pjeSolution
{
public:
	pjeProblem_5();

	virtual std::string description() const;
	// Get the descriptions

	virtual long long run() override;
	// do the do

	virtual ~pjeProblem_5();
};

