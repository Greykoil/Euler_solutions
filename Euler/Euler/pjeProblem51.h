#pragma once
#include "pjeSolution.h"
#include <set>
#include <vector>

// By replacing the 1st digit of the 2 - digit number * 3, it turns out that six of the nine 
// possible values : 13, 23, 43, 53, 73, and 83, are all prime.
//
// By replacing the 3rd and 4th digits of 56 * *3 with the same digit, this 5 - digit number is 
// the first example having seven primes among the ten generated numbers, yielding the family : 
// 56003, 56113, 56333, 56443, 56663, 56773, and 56993. Consequently 56003, being the first member of this family,
// is the smallest prime with this property.
//
// Find the smallest prime which, by replacing part of the number(not necessarily adjacent digits) with the same digit, 
// is part of an eight prime value family.
class pjeProblem51 :
	public pjeSolution
{
public:
	pjeProblem51();

	virtual std::string description() const override;
	// Return a description of the problem
	 
	virtual long long run() override;
	// Run the solution

	virtual ~pjeProblem51();
protected: 
	bool find_for(const std::set<long>& primes, int num_digits, int required_length);

	int find_matching_values(long num, const std::set<long>& primes);

	int check_set_for_rep(const std::vector<int>& digits, const std::vector<int>& rep_locs, const std::set<long>& primes);

private:
	long m_best;
};

