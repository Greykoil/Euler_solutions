#include "stdafx.h"
#include "pjeProblem_60.h"
#include "pjeFactorizerUtils.h"
#include "pjeNumUtils.h"
#include <vector>
#include <iostream>
#include <deque>
#include <iterator>


// Thoughs points and ideas:
// 
// This can be turned into a graph theory type question. 
// We have a graph of primes, with an edge if they are co-superprime 
// We are then adding nodes till we have a K5 subgraph.

struct prime_details {
	int value; 
	std::vector<int> superprime_pairs;
};


pjeProblem_60::pjeProblem_60()
{
}

std::string pjeProblem_60::description() const
{
	return "Primes that can be appended and stay primes";
}

long long pjeProblem_60::run()
{
	pjePrimeMap map;

	while (true) {
		std::vector<pjePrimeNode*> answers;
		std::vector<pjePrimeNode*> ptr_map;
		for (pjePrimeNode* node : m_prime_node_map) {
			ptr_map.push_back(node);
		}
		if (map.numbers_contain_k_connected_subgraph(ptr_map, 5, answers)) {
			int sum = 0;
			for (auto value : answers) {
				sum += value->value();
			}
			return sum;
		}
		add_next_prime_node();
	}
	return 0;
}


pjeProblem_60::~pjeProblem_60()
{
}


bool pjeProblem_60::is_pair(int one, int two)
{
	int digits_in_one = pjeNumUtils::num_digits(one);
	int digits_in_two = pjeNumUtils::num_digits(two);

	long long first_check = 
		one * (std::pow(10, digits_in_two)) + two;

	long long second_check =
		two * (std::pow(10, digits_in_one)) + one;

	if (!pjeFactorizerUtils::is_prime(first_check)) {
		return false;
	}
	if (!pjeFactorizerUtils::is_prime(second_check)) {
		return false;
	}
	return true;
}

void pjeProblem_60::add_next_prime_node()
{
	int last = 0;
	if (m_prime_node_map.size() == 0) {
		last = 1;
	}
	else {
		last = m_prime_node_map[m_prime_node_map.size() - 1]->value();
	}

	for (int i = last + 2; ; i += 2) {
		if (pjeFactorizerUtils::is_prime(i)) {
			pjePrimeNode* next = new pjePrimeNode(i);
			for (pjePrimeNode* node : m_prime_node_map) {
				if (is_pair(node->value(), i)) {
					next->add_cosuperprime(node);
					node->add_cosuperprime(next);
				}
			}
			m_prime_node_map.push_back(next);
			return;
		}
	}


}
