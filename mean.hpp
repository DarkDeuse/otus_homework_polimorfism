#pragma once

#include "statistic.hpp"

class Mean : public IStatistics {
public:
	Mean();

	void update(double next);

	double eval() const;
	const char * name() const;

private:
	double m_mean;
	int row;
};