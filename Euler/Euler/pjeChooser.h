#pragma once

#include "pjeSolution.h"
#include <memory>
#include <vector>
class pjeChooser
{
public:
	pjeChooser();

	void choose_problem();
	// Pick our problem out of the available list

	~pjeChooser();

protected: 

private:
	std::vector<std::unique_ptr<pjeSolution>> m_solution_list;
};

