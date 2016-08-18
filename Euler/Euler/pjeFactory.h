#pragma once
#include <vector>
#include <memory>
#include "pjeSolution.h"
class pjeFactory
{
public:
	pjeFactory();

	void fill(std::vector<std::unique_ptr<pjeSolution>>& vector) const;
	// Fill the vector with all of the solutions I have 

	~pjeFactory();
};

