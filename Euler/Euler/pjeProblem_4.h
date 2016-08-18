#pragma once
#include "pjeSolution.h"

//A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3 - digit numbers.
//
// Lets brute force this and see where we end up

class pjeProblem_4 :
	public pjeSolution
{
public:
	pjeProblem_4();

	virtual std::string description() const override;
	// Return a description of the problem

     virtual long long run() override;
	// Run the solution

	bool is_palendrome(int num);
	// is the number a palendrome

	virtual ~pjeProblem_4();
};

