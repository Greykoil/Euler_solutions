#include "stdafx.h"
#include "pjePrimeMap.h"
#include <assert.h>

pjePrimeMap::pjePrimeMap()
{
}

void pjePrimeMap::test()
{
	// This should really be moved out to its own unit test
	pjePrimeNode one(1);
	pjePrimeNode two(2);
	pjePrimeNode three(3);
	pjePrimeNode four(4);
	pjePrimeNode five(5);
	pjePrimeNode six(6);

	one.add_cosuperprime(&six);
	two.add_cosuperprime(&three);
	two.add_cosuperprime(&four);
	two.add_cosuperprime(&five);
	three.add_cosuperprime(&two);
	three.add_cosuperprime(&four);
	three.add_cosuperprime(&five);
	three.add_cosuperprime(&six);
	four.add_cosuperprime(&one);
	four.add_cosuperprime(&two);
	four.add_cosuperprime(&three);
	four.add_cosuperprime(&five);

	five.add_cosuperprime(&two);
	five.add_cosuperprime(&three);
	five.add_cosuperprime(&four);

	six.add_cosuperprime(&one);
	six.add_cosuperprime(&three);



	std::vector<pjePrimeNode*> map;
	map.push_back(&one);
	map.push_back(&two);
	map.push_back(&three);
	map.push_back(&four);
	map.push_back(&five);
	map.push_back(&six);

	std::vector<pjePrimeNode*> answer;
	if (!numbers_contain_k_connected_subgraph(map, 3, answer)) {
		assert(false);
	}
	if (numbers_contain_k_connected_subgraph(map, 4, answer)) {
		assert(false);
	}
}

void pjePrimeMap::add_node(pjePrimeNode node)
{
	m_nodes.push_back(node);
}

bool pjePrimeMap::numbers_contain_k_connected_subgraph(
	const std::vector<pjePrimeNode*>& nodes, 
	int required, 
	std::vector<pjePrimeNode*>& answer
)
{
	if (required == 1 && nodes.size() >= 1) {
		answer.push_back(nodes[0]);
		return true;
	}
	for (pjePrimeNode* node : nodes) {
		std::vector<pjePrimeNode*> connected = common_elements(node, nodes);
		if (numbers_contain_k_connected_subgraph(connected, required - 1, answer)) {
			answer.push_back(node);
			return true;
		}
	}
	return false;
}


pjePrimeMap::~pjePrimeMap()
{
}

std::vector<pjePrimeNode*> pjePrimeMap::common_elements(const pjePrimeNode* main, std::vector<pjePrimeNode*> nodes)
{
	std::vector<pjePrimeNode*> common;
	auto main_nodes = main->links();
	for (pjePrimeNode* node : nodes) {
		for (pjePrimeNode* main_node : main_nodes) {
			if (node == main_node) {
				common.push_back(node);
			}
		}
	}
	return common;
}
