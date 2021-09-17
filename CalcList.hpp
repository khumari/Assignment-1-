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

    double total() const;
    void newOperation(const FUNCTIONS func, const double operand);
    void removeLastOperation();
    std::string toString(unsigned short precision) const;

    //Destructor , should deallocate all memeory from linked
};

#endif
