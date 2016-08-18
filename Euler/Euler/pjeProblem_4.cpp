#include "stdafx.h"
#include "pjeProblem_4.h"


pjeProblem_4::pjeProblem_4()
{
}

std::string pjeProblem_4::description() const
{
	return "Highest palemdrome of two 3 digit numbers";
}

long long pjeProblem_4::run()
{
	int highest_so_far = 0;
	for (int i = 100; i < 1000; ++i) {
		for (int j = 100; j < 1000; ++j) {
			int sum = i * j;
			if (is_palendrome(sum) && sum > highest_so_far) {
				highest_so_far = sum;
			}
		}
	}
	return highest_so_far;
}

bool pjeProblem_4::is_palendrome(int num) {
	std::string str = std::to_string(num);
	int len = str.length();

	for (int i = 0; i < len / 2; ++i) {
		if (str[i] != str[len - (i+1)]) {
			return false;
		}
	}
	return true;
}


pjeProblem_4::~pjeProblem_4()
{
}
