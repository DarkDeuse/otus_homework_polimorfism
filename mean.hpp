#pragma once

#include "statistic.hpp"

class Mean : public IStatistics {
public:
	Mean() : m_mean{0},
			 row{0}{}

	void update(double next) override {
		m_mean += next;
		row += 1;
	}

	double eval() const override {
		return m_mean/row;
	}

	const char * name() const override {
		return "mean";
	}

private:
	double m_mean;
	int row;
};