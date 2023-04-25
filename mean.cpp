#include "mean.hpp"

	Mean::Mean() : m_mean{0},
			 row{0}{}

	void Mean::update(double next){
		m_mean += next;
		row += 1;
	}

	double Mean::eval() const  {
		return m_mean/row;
	}

	const char * Mean::name() const {
		return "mean";
	}