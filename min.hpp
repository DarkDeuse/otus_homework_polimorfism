#pragma once
#include "statistic.hpp"

class Min : public IStatistics {
public:
	Min();

	void update(double next);
	double eval() const;
	const char * name() const;
private:
	double m_min;
};