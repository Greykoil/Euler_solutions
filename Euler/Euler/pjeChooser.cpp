#include "stdafx.h"
#include "pjeChooser.h"
#include "pjeFactory.h"
#include <iostream>

pjeChooser::pjeChooser()
{
	pjeFactory factory;
	factory.fill(m_solution_list);
}

void pjeChooser::choose_problem() {
	std::cout << "Please choose from the avaible options:\n";
	int count = 0;
	for (auto& problem : m_solution_list) {
		std::cout << count;
		std::cout << "   -   ";
		std::cout << problem->description();
		std::cout << "\n\n";
		++count;
	}
	int num;
	std::cin >> num;

	long long solution = m_solution_list[num]->run();

	std::cout << "The answer I have found for you is\n";
	std::cout << solution;
	std::cin >> num;
}

pjeChooser::~pjeChooser()
{
}
