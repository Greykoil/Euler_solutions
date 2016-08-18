#include "stdafx.h"
#include "pjeProblem_9.h"


pjeProblem_9::pjeProblem_9()
{
}

std::string pjeProblem_9::description() const
{
	return "Pythagorian Tripples";
}

long long pjeProblem_9::run()
{
	double rt = 1000;
	for (int i = 1; i < rt; ++i) {
		for (int j = 1; j < rt; ++j) {
			for (int k = 1; k < rt; ++k) {
				if (((i * i + j * j) == (k * k)) && i+j+k== 1000)
				{
					return i * j * k;
				}
			}
		}
	}
	return 0;
}

pjeProblem_9::~pjeProblem_9()
{
}
