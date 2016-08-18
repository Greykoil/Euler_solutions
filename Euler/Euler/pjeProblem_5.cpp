#include "stdafx.h"
#include "pjeProblem_5.h"


pjeProblem_5::pjeProblem_5()
{
}

std::string pjeProblem_5::description() const
{
	return "LCM of all numbers 1-20";
}

long long pjeProblem_5::run()
{
	// Here is an answer I worked out by my hand
	// Its the standard lcm method
	int sum = 2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19;
	return sum;
}


pjeProblem_5::~pjeProblem_5()
{
}
