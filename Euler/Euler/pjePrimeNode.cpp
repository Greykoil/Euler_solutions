#include "stdafx.h"
#include "pjePrimeNode.h"
#include <assert.h>

pjePrimeNode::pjePrimeNode(int value)
	: m_value (value)
{
}


void pjePrimeNode::add_cosuperprime(pjePrimeNode * other)
{
	assert(other);
	m_links.push_back(other);
}

pjePrimeNode::~pjePrimeNode()
{
}
