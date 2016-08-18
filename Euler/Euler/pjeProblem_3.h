#pragma once
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

// Thoughts and ideas:
// This is almost certainly supposed to be an introduction to fast factorisation.
// Initial attempt will be dumb but try to find a faster way of doing it if possible.

#include "pjeSolution.h"
class pjeProblem_3 :
	public pjeSolution
{
public:
	pjeProblem_3();

	virtual std::string description() const override;
	// Return a description of the problem

     virtual long long run() override;
	// Run the solution

	virtual ~pjeProblem_3();
};

