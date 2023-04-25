#pragma once 

#include "statistic.hpp"

class Max : public IStatistics {
public:
	Max();
	void update(double next);

	double eval() const;

	const char * name() const;
private:
	double m_max;
};