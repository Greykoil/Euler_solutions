#include "stdafx.h"
#include "pjeProblem_6.h"


pjeProblem_6::pjeProblem_6()
{
}

std::string pjeProblem_6::description() const
{
	return "Sum of squares and square of sums";
}

long long pjeProblem_6::run()
{
	int finish = 100;
	long long sum_of_squares = 0;
	int sum = 0;
	for (int i = 0; i < finish + 1; ++i) {
		sum_of_squares += (i * i);
		sum += i;
	}

	long long square_of_sums = sum * sum;

	long long diff = square_of_sums - sum_of_squares;
	return diff;
}

pjeProblem_6::~pjeProblem_6()
{
}
