#pragma once
#include <vector> 

class pjeFactorizerUtils
{
public:
	pjeFactorizerUtils();

	static bool is_prime(long long number);

	void prime_factors(long long number, std::vector<long long>& factors);

	~pjeFactorizerUtils();
};

