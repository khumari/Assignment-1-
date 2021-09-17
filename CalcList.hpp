#ifndef CALC_LIST_H
#define CALC_LIST_H

#include <iostream>
#include <string>
#include "CalcListInterface.hpp"

class CalcList : public CalcListInterface
{
private:
public:
    //constructor
    CalcList()
    {
        //
    }

    double total() const = 0;
    void newOperation(const FUNCTIONS func, const double operand) = 0;
    void removeLastOperation() = 0;
    std::string toString(unsigned short precision) const = 0;

    //Destructor , should deallocate all memeory from linked
};

#endif
