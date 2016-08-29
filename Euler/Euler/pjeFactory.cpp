#include "stdafx.h"
#include "pjeFactory.h"
#include "pjeProblem_1.h"
#include "pjeProblem_2.h"
#include "pjeProblem_3.h"
#include "pjeProblem_4.h"
#include "pjeProblem_5.h"
#include "pjeProblem_6.h"
#include "pjeProblem_7.h"
#include "pjeProblem_8.h"
#include "pjeProblem_9.h"
#include "pjeProblem_10.h"
#include "pjeProblem51.h"
#include "pjeProblem_60.h"
pjeFactory::pjeFactory()
{
}

void pjeFactory::fill(std::vector<std::unique_ptr<pjeSolution>>& vector) const
{
	vector.push_back(std::make_unique<pjeProblem_1>());

	vector.push_back(std::make_unique<pjeProblem_2>());

	vector.push_back(std::make_unique<pjeProblem_3>());

	vector.push_back(std::make_unique<pjeProblem_4>());

	vector.push_back(std::make_unique<pjeProblem_5>());

	vector.push_back(std::make_unique<pjeProblem_6>());

	vector.push_back(std::make_unique<pjeProblem_7>());

	vector.push_back(std::make_unique<pjeProblem_8>());
	
	vector.push_back(std::make_unique<pjeProblem_9>());

	vector.push_back(std::make_unique<pjeProblem_10>());

	vector.push_back(std::make_unique<pjeProblem51>());

	vector.push_back(std::make_unique<pjeProblem_60>());
}

pjeFactory::~pjeFactory()
{
}
