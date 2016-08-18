#pragma once
#include "pjeSolution.h"
class pjeProblem_9 :
	public pjeSolution
{
public:
	pjeProblem_9();

	virtual std::string description() const;
	// Get the descriptions

	virtual long long run() override;
	// do the do

	virtual ~pjeProblem_9();
};

