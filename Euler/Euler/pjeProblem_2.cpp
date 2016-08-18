#include "stdafx.h"
#include "pjeProblem_2.h"
#include <vector>


pjeProblem_2::pjeProblem_2()
{
}

std::string pjeProblem_2::description() const
{
	return "Even fibinachi numbers problem";
}

long long pjeProblem_2::run()
{
	std::vector<int> checks;
	std::vector<int> evens;
	int one = 1;
	int two = 1;

	int count = 0;
	bool flag = false;
	while (one < 4000000 && two < 4000000) {

		checks.push_back(one);
		checks.push_back(two);
		one = one + two;
		two = one + two;
		if (one % 2 == 0) {
			evens.push_back(one);
		}
		if (two % 2 == 0) {
			evens.push_back(two);
		}
	}
	
	int total = 0;
	for (int num : evens) {
		total += num;
	}
	return total;
}

pjeProblem_2::~pjeProblem_2()
{
}
