#pragma once
#include <vector>
class pjePrimeNode
{
public:
	pjePrimeNode(int value);

	void add_cosuperprime(pjePrimeNode* other);
	// Add a link from this to the other

	int value() {
		return m_value;
	}
	std::vector<pjePrimeNode*> links() const{
		return m_links;
	}

	~pjePrimeNode();

private:
	
	int m_value;
	// The value of the actual prime
	
	std::vector<pjePrimeNode*> m_links;
	// The other primes this is superprime with
};

