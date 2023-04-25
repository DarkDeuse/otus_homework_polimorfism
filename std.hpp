#pragma once

#include <vector>
#include "statistic.hpp"

class STDs : public IStatistics {
public:
	STDs();

	void update(double next);
	double eval() const;
	const char * name() const;

private:
	double m_mean;
	int row;
	std::vector <double> all_numbers;
};