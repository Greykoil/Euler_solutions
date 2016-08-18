#pragma once
#include "pjeSolution.h"

//Each new term in the Fibonacci sequence is generated by adding the previous two terms.
//By starting with 1 and 2, the first 10 terms will be :
//
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
//By considering the terms in the Fibonacci sequence whose values do not exceed four million,
//find the sum of the even - valued terms.
//


// Thoughts and observations:
// The sequence starts Odd, Even, Odd, Odd Even Odd Odd Even.
// it is trivial to show that is has to carry on in this pattern so we want every third term 
// 
// The current solution does not actually use this because time is not enough of a factor.

class pjeProblem_2 : public pjeSolution
{
public:
	pjeProblem_2();

	virtual std::string description() const override; 
	// Return the general problem description

	virtual long long run() override;
	// Run the actual problem

	virtual ~pjeProblem_2();
};
