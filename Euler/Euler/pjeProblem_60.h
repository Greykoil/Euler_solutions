#pragma once
#include "pjeSolution.h"
#include "pjePrimeMap.h"
#include <vector>
//The primes 3, 7, 109, and 673, are quite remarkable.
//By taking any two primes and concatenating them in any order the result will always be prime.
//For example, taking 7 and 109, both 7109 and 1097 are prime.The sum of these four primes, 792,
//represents the lowest sum for a set of four primes with this property.
//
//Find the lowest sum for a set of five primes for which any two primes concatenate to produce another prime.

class pjeProblem_60 :
	public pjeSolution
{
public:
	pjeProblem_60();

	virtual std::string description() const;
	// Return a description of the problem

	virtual long long run();
	// Run the solution

	virtual ~pjeProblem_60();

protected:

	bool is_pair(int one, int two);
	// Are onetwo and twoone both prime

	void add_next_prime_node();
	// Adds a prime node to the current list
	// Also adds all the connections too

private: 
	pjePrimeMap m_map;

	std::vector<pjePrimeNode*> m_prime_node_map;
};

