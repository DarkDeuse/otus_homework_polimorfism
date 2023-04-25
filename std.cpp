#include "std.hpp"
#include <iostream>
STDs::STDs() : m_mean{0},
        row{0}{}

void STDs::update(double next)  {
    all_numbers.push_back(next);
    m_mean += next;
    row += 1;
}

double STDs::eval() const  {
    double sq_mean{0};
    for (const double number: all_numbers){
        sq_mean += (number-(m_mean/row)) * (number - (m_mean/row));
    };
    return std::sqrt(sq_mean/row);
}

const char * STDs::name() const  {
    return "std";
}
