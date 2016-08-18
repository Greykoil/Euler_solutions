#pragma once
#include <string>

class pjeSolution
{
public:
	pjeSolution();

	virtual std::string description() const = 0;
	// Return a description of the problem

	virtual long long run() = 0;
	// Run the solution

	virtual ~pjeSolution();
};

