#pragma once

#include "statistic.hpp"

class STD : public IStatistics {
public:
	STD() : m_mean{0},
			row{0}{}

	void update(double next) override {
		all_numbers.push_back(next);
		m_mean += next;
		row += 1;
	}

	double eval() const override {
		double sq_mean{0};
		for (const double number: all_numbers){
			sq_mean += (number-(m_mean/row)) * (number - (m_mean/row));
		};
		return std::sqrt(sq_mean/row);
	}

	const char * name() const override {
		return "std";
	}

private:
	double m_mean;
	int row;
	std::vector <double> all_numbers;
};