#pragma once
#include <vector>
#include <memory>
#include "pjePrimeNode.h"
class pjePrimeMap
{
public:
	pjePrimeMap();

	void test();

	void add_node(pjePrimeNode);

	bool numbers_contain_k_connected_subgraph(
		const std::vector<pjePrimeNode*>& nodes, 
		int required,
		std::vector<pjePrimeNode*>& answer
	);

	~pjePrimeMap();

protected:

	std::vector<pjePrimeNode*> common_elements(const pjePrimeNode* main, std::vector<pjePrimeNode*> nodes);
	// return all of the common elements between main and nodes

private: 
	
	std::vector<pjePrimeNode> m_nodes;
	long long m_value;
	std::vector<pjePrimeMap*> m_links;
};

