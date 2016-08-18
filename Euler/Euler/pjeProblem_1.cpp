#include "stdafx.h"
#include "pjeProblem_1.h"
#include <vector>
#include <set>


pjeProblem_1::pjeProblem_1()
{
}

std::string pjeProblem_1::description() const
{
	return "mutiles of three and 5 problem";
}

long long pjeProblem_1::run()
{
	std::set<int> nums;
	int sum = 0;

	while ((sum += 3) < 1000) {
		nums.insert(sum);
	}

	sum = 0;
	while ((sum+=5) < 1000) {
		nums.insert(sum);
	}
	int total = 0;
	for (int value : nums) {
		total += value;
	}
	return total;
}

pjeProblem_1::~pjeProblem_1()
{
}
